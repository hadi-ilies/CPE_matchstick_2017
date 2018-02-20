/*
** EPITECH PROJECT, 2017
** main
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void display(char **array, var_t *play)
{
	for (int i = 0; i < play->line + 2; i++) {
		my_putstr(array[i]);
		my_putstr("\n");
	}
	my_putstr("\n");
}

int i_loose(char **array, var_t *play)
{
	for (int i = 1; i < play->line + 2; i++)
		for (int j = 0; j < play->nb_size; j++)
			if (array[i][j] == '|')
				return (0);
	return (1);
}

int game_cond(int *line, int *matches, var_t *play, char **array)
{
	my_putstr("AI's turn...\n");
	my_ai(array, *line, *matches, play);
	display(array, play);
	if (i_loose(array, play) == 1) {
		my_putstr("I lost... snif... but I'll get you next time!!\n");
		return (1);
	}
	play->bol = 0;
	return (0);
}

int game(char **argv, int lose, int line, int matches)
{
	var_t *play = init_struct(argv);
	char **array = matchstick(play);

	display(array, play);
	while (1) {
	play->bol == 0 ? my_turn(array, line, matches, play) : 0;
	if (play->bol_ctrl_d == 1)
		return (0);
	play->bol == 0 && play->cond_bol == 1 ? display(array, play) : 0;
	i_loose(array, play) == 1 ? my_putstr("You lost, too bad...\n") : 0;
	if (i_loose(array, play) == 1)
		return (2);
	play->bol == 0 && play->cond_bol == 1 ? play->bol = 1 : (play->bol = 0);
	if (play->bol == 1) {
		lose = game_cond(&line, &matches, play, array);
		if (lose == 1)
			return (1);
	}
	}
}

int main (int argc, char **argv)
{
	int lose = 0;
	int line = 0;
	int matches = 0;

	if (argc != 3)
		return (84);
	if (argc == 3 && my_atoi(argv[1]) <= 100 && my_atoi(argv[1]) > 1)
		return (game(argv, lose, line, matches));
	else
		return (84);
	return (0);
}
