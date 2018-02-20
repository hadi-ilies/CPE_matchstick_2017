/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void cond_into_array(int i, int j, var_t *play, char **array)
{
	(i == 0) ? array[i][j] = '*' : 0;
	i > 0 && i < play->line + 1 ? array[i][j] = ' ' : 0;
	if (i > 0 && i < play->line + 1
	&& j >= (play->nb_size - play->nb_bat) / 2
	&& play->cond < play->nb_bat) {
		array[i][j] = '|';
		play->cond++;
	}
	i > 0 && i < play->line + 1 ? array[i][0] = '*' : 0;
	i > 0 && i < play->line + 1 ? array[i][play->nb_size - 1] = '*' : 0;
	i == play->line + 1 ?   array[i][j] = '*' : 0;
}

void into_array(char **array, var_t *play)
{
	int j;

	for (int i = 0; i < play->line + 2; i++) {
		play->nb_bat = (i - 1) * 2 + 1;
		play->cond = 0;
		for (j = 0; j < play->nb_size; j++)
			cond_into_array(i, j, play, array);
		array[i][j] = '\0';
	}
}

char **matchstick(var_t *play)
{
	char **array = mem_alloc_2d_array(play->line + 2, play->line * 2 + 2);

	into_array(array, play);
	return (array);
}
