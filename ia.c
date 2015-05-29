/*
** ia.c for Allum1 in /home/sayyou_y/rendu/CPE-Prog-Elem/CPE_2014_allum1
** 
** Made by Youssef Sayyouri
** Login   <sayyou_y@epitech.net>
** 
** Started on  Tue Feb 17 20:51:16 2015 Youssef Sayyouri
** Last update Sun Feb 22 23:18:47 2015 Youssef Sayyouri
*/

#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "include/my.h"

int		ia(int *tab, int tab_size, int is_start)
{
  wait_msg();
  ia_process(tab, tab_size);
  if (check_end(get_total_matches(tab, tab_size), 1) == -1)
    return (-1);
  show_tab(tab, tab_size);
  if (is_start == 1)
    my_putstr("On which line would you want to remove matches ? ");
  return (0);
}

void		ia_process(int *tab, int tab_size)
{
  int		max_line;
  int		tot_matches;
  time_t	t;

  srand((unsigned) time(&t));
  max_line = biggest_line(tab, tab_size);
  tot_matches = get_total_matches(tab, tab_size);
  if (count_pos_line(tab, tab_size) == 2 && (tot_matches - tab[max_line]) != 1)
    tab[max_line] = (tab[max_line] == 1) ? 0 : 1;
  else if (count_pos_line(tab, tab_size) > 4)
    {
      if (tab[max_line] == 1)
	tab[max_line] = 0;
      else
	tab[max_line] = (tab[max_line] > 3) ? rand() % 3 : 1;
    }
  else
    {
      if ((tot_matches % 2) == 0 || tot_matches == 1)
	tab[max_line] = 0;
      else
	tab[max_line] = (tab[max_line] == 1) ? 0 : 1;
    }
}

void		wait_msg()
{
  my_putstr("Please wait, the computer play .");
  sleep(1);
  my_putchar('.');
  sleep(1);
  my_putstr(".\n");
}

int		check_end(int total, int type)
{
  if (total == 0)
    {
      if (type == 1)
	my_putstr("\n                You win !\nPress [");
      else
	my_putstr("\n                You lose !\nPress [");
      my_putstr("Enter] or [CTRL + D] to exit Allum1\n");
      return (-1);
    }
  return (0);
}
