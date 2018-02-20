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

void cond1(var_t *play)
{
	play->bol_turn = 1;
	my_putstr("Error: this line is out of range\n");
	play->cond_bol = 0;
}

void cond2(var_t *play)
{
	play->bol_turn = 1;
	my_putstr("Error: invalid input (positive number expected)\n");
	play->cond_bol = 0;
}

void cond3(var_t *play)
{
	 play->bol_turn = 1;
	 my_putstr("Error: you have to remove at least one match\n");
	 play->cond_bol = 0;
}
void cond4(var_t *play)
{
	play->bol_turn = 1;
	my_putstr("Error: not enough matches on this line\n");
	play->cond_bol = 0;
}
