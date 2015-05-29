/*
** my.h for Allum1 in /home/sayyou_y/rendu/CPE-Prog-Elem/Allum1/include
** 
** Made by Youssef Sayyouri
** Login   <sayyou_y@epitech.net>
** 
** Started on  Tue Feb 10 18:40:22 2015 Youssef Sayyouri
** Last update Sun Mar 15 18:04:15 2015 Youssef Sayyouri
*/

#ifndef MY_H_
# define MY_H_

typedef struct	s_vars
{
  int		i;
  int		j;
  int		k;
  int		space;
}		t_vars;

char		*get_buff(int *tab);
void		my_putchar(char c);
void		init_vars(t_vars *vars);
void		show_tab(int *tab, int tab_size);
void		my_put_nbr(int nbr);
void		wait_msg();
void		who_start(int *tab, int tab_size);
void		ia_process(int *tab, int tab_size);
int		count_pos_line(int *tab, int tab_size);
int		allum1(int tab_size);
int		ia(int *tab, int tab_size, int is_start);
int		check_s2(char *buff, int nbr, int tab_rl);
int		check_end(int total, int type);
int		biggest_line(int *tab, int tab_size);
int		my_exit(char *buff);
int		get_total_matches(int *tab, int tab_size);
int		my_putstr(char *str);
int		size_tab(int ac, char **av);
int		my_getnbr(char *str);
int		my_str_isnum(char *str);
int		step_one(int *remove_line, int *tab, int tab_size, char *buff);
int		step_two(int *remove_line, int *tab, int tab_size, char *buff);
int		*make_tab(int tab_size);

#endif /* !MY_H_ */
