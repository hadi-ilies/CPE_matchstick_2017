/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int my_turn_part3(char **array, int *line, int *matches, var_t *play)
{
	if (*matches > play->nb_stick) {
		play->bol_turn = 1;
		my_putstr("Error: you cannot remove more than ");
		my_put_nbr(play->nb_stick);
		my_putstr(" matches per turn\n");
		play->cond_bol = 0;
		return (1);
	} if (*line > 0 && *line <= play->line && *matches <= play->nb_stick) {
		changes(array, *line, *matches, play);
		play->cond_bol = 1;
		play->bol_turn = 0;
	}
	return (0);
}

int my_turn_part2(char **array, int *line, int *matches, var_t *play)
{
	my_putstr("Matches: ");
	*matches = my_atoi(get_next_line_f_shell(0));
	if (*matches == -2)
		return (-2);
	if (*matches == -1) {
		play->bol_ctrl_d = 1;
		return (-2);
	}
	*line <= play->line ? count_bat(array, line, play) : 0;
	play->save_turn = *matches;
	return (0);
}

int my_turn_part1(char **array, int *line, int *matches, var_t *play)
{
	(void) array;
	(void) *matches;
	play->bol_turn == 0 ? my_putstr("Your turn:\n") : 0;
	my_putstr("Line: ");
	*line = my_atoi(get_next_line_f_shell(0));
	if (*line == -2)
		return (-2);
	if (*line == -1)
		return (-1);
	return (0);
}
