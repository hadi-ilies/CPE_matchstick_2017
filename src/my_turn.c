/*
** EPITECH PROJECT, 2018
** my_turn
** File description:
** my_turn
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void changes(char **array, int line, int matches, var_t *play)
{
	for (int j = 1; j < play->nb_size; j++) {
		if ((array[line][j - 1] == '|' && array[line][j] == ' ')
		|| (array[line][j - 1] == '|' && array[line][j] == '*'))
			for (int k = 1; k <= matches; k++)
				array[line][j - k] = ' ';
	}
}

void count_bat(char **array, int *line, var_t *play)
{
	play->nb_pipe != 0 ? play->nb_pipe = 0 : 0;
	for (int j = 0; j < play->nb_size; j++)
		array[*line][j] == '|' ? play->nb_pipe++ : 0;
}

void my_turn(char **array, int line, int matches, var_t *play)
{
	if (my_turn_part1(array, &line, &matches, play) == -1) {
		play->bol_ctrl_d = 1;
		return;
	} if (line == -2) {
		cond2(play);
		return;
	} if (line > play->line || line == 0) {
		cond1(play);
		return;
	} if (my_turn_part2(array, &line, &matches, play) == -2) {
		play->bol_ctrl_d != 1 ? cond2(play) : 0;
		return;
	} if (matches == 0) {
		cond3(play);
		 return;
	} if (matches > play->nb_pipe) {
		cond4(play);
		return;
	} TURN_P1 TURN_P2;

}

void display_game(int *line, int *matches)
{
	my_putstr("Player removed ");
	my_put_nbr(*matches);
	my_putstr(" match(es) from line ");
	my_put_nbr(*line);
	my_putstr("\n");
}

void display_game_ia(int line, int matches)
{
	my_putstr("AI removed ");
	my_put_nbr(matches);
	my_putstr(" match(es) from line ");
	my_put_nbr(line);
	my_putstr("\n");
}
