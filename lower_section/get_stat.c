/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** desc
*/
#include "my_top.h"
#include <stdio.h>
#include <curses.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <fcntl.h>
#include <pwd.h>
#include <sys/stat.h>

char *make_pathname(char *pid)
{
    char *pathname;

    pathname = malloc(sizeof(char) * (11 + my_strlen(pid) + 1));
    sprintf(pathname, "/proc/%s/stat", pid);
    return pathname;
}

char *get_name(char *pathname)
{
    struct passwd *pwd;
    struct stat sb;
    char *name;

    stat(pathname, &sb);
    pwd = getpwuid(sb.st_uid);
    name = pwd->pw_name;
    return name;
}

node_t get_stat(void)
{
    DIR *dirp;
    struct dirent *dp;
    node_t process = create_node();
    char *pathname;
    char *stat_str;
    char **stat_array;
    char *user_name;

    dirp = opendir("/proc");
    for (dp = readdir(dirp); dp != NULL; dp = readdir(dirp)) {
        if (dp->d_name[0] >= '0' && dp->d_name[0] <= '9') {
            pathname = make_pathname(dp->d_name);
            user_name = get_name(pathname);
            stat_str = open_stat_file(pathname);
            stat_array = my_str_to_word_array(stat_str, ' ');
            process = add_node_stat(process, stat_array, user_name);
            free(pathname);
        }
    }
    return process;
}
