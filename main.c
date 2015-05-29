/*
** main.c for Allum1 in /home/sayyou_y/rendu/CPE-Prog-Elem/Allum1
** 
** Made by Youssef Sayyouri
** Login   <sayyou_y@epitech.net>
** 
** Started on  Wed Feb 11 17:03:38 2015 Youssef Sayyouri
** Last update Tue Mar 17 15:50:23 2015 Youssef Sayyouri
*/

#include <stdlib.h>
#include <unistd.h>
#include "include/my.h"

int		main(int ac, char **av)
{
  int		tab_size;

  tab_size = size_tab(ac, av);
  if (allum1(tab_size) == -1)
    {
      return (0);
    }
  return (0);
}

char		*get_buff(int *tab)
{
  int		fd;
  char		*buff;

  if ((buff = malloc(sizeof(char) * 4096)) == NULL)
    return (NULL);
  if ((fd = read(0, buff, 4096)) == -1)
    return (NULL);
  if (fd == 0)
    {
      free(buff);
      free(tab);
      my_putchar('\n');
      return (NULL);
    }
  buff[fd - 1] = '\0';
  return (buff);
}
