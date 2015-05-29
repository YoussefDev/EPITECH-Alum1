/*
** tab.c for Allum1 in /home/sayyou_y/rendu/CPE-Prog-Elem/Allum1
** 
** Made by Youssef Sayyouri
** Login   <sayyou_y@epitech.net>
** 
** Started on  Mon Feb 16 14:00:47 2015 Youssef Sayyouri
** Last update Sun Mar 15 18:04:15 2015 Youssef Sayyouri
*/

#include <stdlib.h>
#include "include/my.h"

int		*make_tab(int tab_size)
{
  int		*tab;
  int		i;
  int		j;

  if ((tab = malloc(sizeof(int) * tab_size)) == NULL)
    return (NULL);
  i = 0;
  j = 1;
  while (i < tab_size)
    {
      tab[i] = j;
      j += 2;
      i++;
    }
  return (tab);
}

void		init_vars(t_vars *vars)
{
  vars->i = 0;
  vars->j = 0;
  vars->k = 0;
}

void		show_tab(int *tab, int tab_size)
{
  t_vars	v;
  int		nline;

  nline = 1;
  v.space = tab_size + 2;
  init_vars(&v);
  while (v.i < tab_size)
    {
      v.j = 0;
      my_put_nbr(nline++);
      my_putchar('.');
      v.k = (nline > 10) ? 1 : 0;
      while (v.k++ < v.space)
	my_putchar(' ');
      while (v.j < tab[v.i])
	{
	  my_putchar('|');
	  v.j++;
	}
      my_putchar('\n');
      v.i++;
      v.space--;
    }
}
