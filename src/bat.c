/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "my.h"

void count_all_bat(char **array, var_t *play)
{
	play->nb_pipe != 0 ? play->nb_pipe = 0 : 0;
	for (int i = 0; i < play->line; i++)
		for (int j = 0; j < play->nb_size; j++)
			array[i][j] == '|' ? play->nb_pipe++ : 0;
}

void rm_bat(char **array, int line,  var_t *play, int *matches)
{
	for (int k = 1; k < play->nb_size; k++) {
		if ((array[line][k - 1] == '|' &&   array[line][k] == ' ')
		|| (array[line][(k) - 1] == '|' && array[line][k] == '*'))
		for (int r = 1; r <= *matches; r++)
			array[line][(k) - 2] != '*'
				? array[line][(k) - r] = ' '
				: (array[line][(k) - 1] = ' ');
	}
}

void count_bat_line(char **array, int *line, var_t *play)
{
	play->nb_pipe_line != 0 ? play->nb_pipe_line = 0 : 0;
	for (int j = 0; j < play->nb_size; j++)
		array[*line][j] == '|' ? play->nb_pipe_line++ : 0;
}
