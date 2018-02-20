/*
** EPITECH PROJECT, 2018
** test
** File description:
** ai
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "my.h"

char **copy_tab(char **array, var_t *play)
{
	char **copy_array = malloc(sizeof(char *) * (play->line + 2));

	for (int k = 0; k < (play->line + 2); k++)
		copy_array[k] = malloc(sizeof(char) * (play->nb_size + 2));
	for (int i = 0; i < play->line + 2; i++)
		for (int j = 0; j < play->nb_size; j++)
			copy_array[i][j] = array[i][j];
	return (copy_array);
}

void max_line(char **array, int *line, int *matches, var_t *play)
{
	int comp = 0;
	int max_comp = 0;

	for (int i = 1; i < play->line + 1; i++) {
		comp = 0;
		for (int j = 0; j < play->nb_size; j++)
			array[i][j] == '|' ? comp++ : 0;
		if (max_comp <= comp) {
			max_comp = comp;
			*line = i;
		}
	}
	*matches = 1;
}

void my_ai2(char **array, int *line, int *matches, var_t *play)
{
	char **copy_array = copy_tab(array, play);

	max_line(array, line, matches, play);
	for (int i = 1; i <= play->line; i++) {
		count_bat_line(array, &i, play);
		for (int j = 1; BNORME; j++) {
			copy_array = copy_tab(array, play);
			rm_bat(copy_array, i, play, &j);
			if (i_do_shit(copy_array, play) == 1) {
				*line = i;
				*matches = j;
				return;
			}
		}
	}
}

void my_ai_part2(char **array, int *line, int *j, int *matches)
{
	if ((array[*line][(*j) - 1] == '|' && array[*line][*j] == ' ')
	|| (array[*line][(*j) - 1] == '|' && array[*line][*j] == '*'))
		for (int k = 1; k <= *matches; k++)
			array[*line][(*j) - 2] != '*'
				? array[*line][(*j) - k] = ' '
				: (array[*line][(*j) - 1] = ' ');
}

void my_ai(char **array, int line, int matches, var_t *play)
{
	my_ai2(array, &line, &matches, play);
	display_game_ia(line, matches);
	for (int j = 1; j < play->nb_size; j++)
		my_ai_part2(array, &line, &j, &matches);
}
