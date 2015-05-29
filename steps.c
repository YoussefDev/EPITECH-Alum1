/*
** steps.c for Allum1 in /home/sayyou_y/rendu/CPE-Prog-Elem/Allum1
** 
** Made by Youssef Sayyouri
** Login   <sayyou_y@epitech.net>
** 
** Started on  Sun Feb 15 14:32:52 2015 Youssef Sayyouri
** Last update Sat Feb 21 11:26:24 2015 Youssef Sayyouri
*/

#include <stdlib.h>
#include "include/my.h"

int	step_one(int *remove_line, int *tab, int tab_size, char *buff)
{
  if (my_str_isnum(buff) == -1)
    {
      my_putstr("Error: You must have to enter positive numbers only !\n");
      my_putstr("On which line would you want to remove matches ? ");
      return (0);
    }
  if (my_getnbr(buff) > 0 && my_getnbr(buff) <= tab_size)
    {
      if (tab[my_getnbr(buff) - 1] == 0)
	{
	  my_putstr("Error: there is no matches in this line !\n");
	  my_putstr("On which line would you want to remove matches ? ");
	  return (0);
	}
      *remove_line = my_getnbr(buff) - 1;
      my_putstr("How many matches do you want to remove ? ");
      return (1);
    }
  my_putstr("Error: The line specified does not exist !\n");
  my_putstr("On which line would you want to remove matches ? ");
  return (0);
}

int	check_s2(char *buff, int nbr, int tab_rl)
{
  if (my_str_isnum(buff) == -1)
    {
      my_putstr("Error: You must have to enter positive numbers only !\n");
      my_putstr("How many matches do you want to remove ? ");
      return (1);
    }
  if (nbr > tab_rl || nbr == 0)
    {
      if (nbr == 0)
	my_putstr("Error: You have to take at least one match !\n");
      else
	my_putstr("Error: there is not enough matches !\n");
      my_putstr("How many matches do you want to remove ? ");
      return (1);
    }
  return (0);
}

int	step_two(int *remove_line, int *tab, int tab_size, char *buff)
{
  int	nbr;

  nbr = my_getnbr(buff);
  if (check_s2(buff, nbr, tab[*remove_line]) == 1)
    return (1);
  tab[*remove_line] = tab[*remove_line] - nbr;
  if (check_end(get_total_matches(tab, tab_size), 0) == -1)
    return (-1);
  show_tab(tab, tab_size);
  if (ia(tab, tab_size, 0) == -1)
    return (-1);
  *remove_line = -1;
  my_putstr("On which line would you want to remove matches ? ");
  return (0);
}
