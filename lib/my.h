/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#ifndef MY_H
#define MY_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "my.h"

int my_put_nbr(int nb);
void my_putchar(char c);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
int my_atoi(char *str);
int my_putstr(char const *str);
int my_strlen(char *str);

#endif
