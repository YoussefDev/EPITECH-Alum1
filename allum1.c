/*
** allum1.c for Allum1 in /home/sayyou_y/rendu/CPE-Prog-Elem/CPE_2014_allum1
** 
** Made by Youssef Sayyouri
** Login   <sayyou_y@epitech.net>
** 
** Started on  Sat Feb 21 01:36:00 2015 Youssef Sayyouri
** Last update Sat Feb 21 19:39:10 2015 Youssef Sayyouri
*/

#include <stdlib.h>
#include <time.h>
#include "include/my.h"

int		allum1(int tab_size)
{
  char		*buff;
  int		*tab;
  int		step;
  int		remove_line;

  step = 0;
  remove_line = -1;
  tab = make_tab(tab_size);
  show_tab(tab, tab_size);
  who_start(tab, tab_size);
  while ((buff = get_buff(tab)))
    {
      if (my_exit(buff) == -1 || step == -1)
	{
	  free(tab);
	  free(buff);
	  return (-1);
	}
      if (step == 0)
	step = step_one(&remove_line, tab, tab_size, buff);
      else if (step == 1)
	step = step_two(&remove_line, tab, tab_size, buff);
      free(buff);
    }
  return (0);
}

void		who_start(int *tab, int tab_size)
{
  time_t	t;

  srand((unsigned) time(&t));
  if ((rand() % 2) == 1)
    my_putstr("\nOn which line would you want to remove matches ? ");
  else
    ia(tab, tab_size, 1);
}

int		my_exit(char *buff)
{
  if (buff == NULL || (buff[0] == 'e' && buff[1] == 'x'
		       && buff[2] == 'i' && buff[3] == 't'))
    {
      my_putstr("\n\nBye bye !\n\n");
      return (-1);
    }
  return (0);
}
