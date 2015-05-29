/*
** tab_info.c for Allum1 in /home/sayyou_y/rendu/CPE-Prog-Elem/CPE_2014_allum1
** 
** Made by Youssef Sayyouri
** Login   <sayyou_y@epitech.net>
** 
** Started on  Sat Feb 21 01:32:06 2015 Youssef Sayyouri
** Last update Sun Feb 22 19:08:43 2015 Youssef Sayyouri
*/

#include "include/my.h"

int	size_tab(int ac, char **av)
{
  int	tab_size;

  if (ac < 2)
    tab_size = 4;
  else
    {
      if (my_getnbr(av[1]) <= 42 && my_getnbr(av[1]) >= 4)
	tab_size = my_getnbr(av[1]);
      else
	{
	  my_putstr("Error: You must have to enter a number between 4 and 42\n");
	  tab_size = 4;
	}
    }
  return (tab_size);
}

int	get_total_matches(int *tab, int tab_size)
{
  int	i;
  int	total;

  i = 0;
  total = 0;
  while (i < tab_size)
    {
      total += tab[i++];
    }
  return (total);
}

int	biggest_line(int *tab, int tab_size)
{
  int	i;
  int	biggest;
  int	biggest_i;

  i = 0;
  biggest = 0;
  biggest_i = 0;
  while (i < tab_size)
    {
      if (tab[i] > biggest)
	{
	  biggest = tab[i];
	  biggest_i = i;
	}
      i++;
    }
  return (biggest_i);
}

int	count_pos_line(int *tab, int tab_size)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (i < tab_size)
    {
      if (tab[i] > 0)
	count++;
      i++;
    }
  return (count);
}
