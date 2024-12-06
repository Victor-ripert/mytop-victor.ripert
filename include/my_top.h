/*
** EPITECH PROJECT, 2024
** flags.h
** File description:
** flags structure & functions for my_printf
*/
#ifndef MY_TOP_H
    #define MY_TOP_H
int ncurse_loop(void);
char **my_str_to_word_array(char *str, char separator);
int my_word_len(char *str, char separator, int i);
typedef struct my_process_s {
    char *owner_name;
    char **stat;
    struct my_process_s *next;
} my_process_t;
typedef my_process_t *node_t;
node_t create_node(void);
int rm_node(node_t head);
int print_node(node_t);
int printw_node(node_t file);
int my_strlen(char const *str);
node_t add_node_stat(node_t head, char **value, char *owner);
node_t get_stat(void);
char *open_stat_file(char *stat_pathname);
#endif /* MY_TOP_H */
