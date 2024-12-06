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
#include <pwd.h>
#include <sys/stat.h>
#include <fcntl.h>

// char *open_stat_file(char *stat_pathname)
// {
//     int size = my_file_len(stat_pathname);
//     char buffer[size];
//     int fd = open(stat_pathname, O_RDONLY);
//     char *result = malloc(sizeof(char) * size + 1);

//     read(fd, buffer, size);
//     result = buffer;
//     result[size] = '\0';
//     return result;
// }

char *open_stat_file(char *stat_pathname)
{
    int size = 32000;
    char buffer[size];
    int fd = open(stat_pathname, O_RDONLY);
    char *result;
    int read_return;

    read_return = read(fd, buffer, size);
    result = malloc(sizeof(char) * read_return + 1);
    for (int i = 0; i < read_return; i++) {
        result[i] = buffer[i];
    }
    result[read_return] = '\0';
    return result;
}
