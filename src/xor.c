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

int i_do_shit(char **array, var_t *play)
{
	int min = 0;

	for (int j = 1; j < play->nb_size; j++)
		array[1][j] == '|' ? min++ : 0;
	for (int i = 2; i <= play->line; i++) {
		play->nb_pipe = 0;
		for (int j = 1; j < play->nb_size; j++)
			array[i][j] == '|' ? play->nb_pipe++ : 0;
		min ^= play->nb_pipe;
	}
	return (min);
}
