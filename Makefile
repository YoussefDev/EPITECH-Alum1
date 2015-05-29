##
## Makefile for Allum1 in /home/sayyou_y/rendu/CPE-Prog-Elem/Allum1
## 
## Made by Youssef Sayyouri
## Login   <sayyou_y@epitech.net>
## 
## Started on  Tue Feb 10 18:39:46 2015 Youssef Sayyouri
## Last update Sat Mar 21 20:02:29 2015 Youssef Sayyouri
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -Wextra -Wall -Werror
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I.

NAME	= allum1

SRCS	= main.c	\
	  my_func.c	\
	  tab.c		\
	  steps.c	\
	  ia.c		\
	  tab_info.c	\
	  allum1.c	\

OBJS	= $(SRCS:.c=.o)

all	: $(NAME)

$(NAME)	: $(OBJS)
	  $(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean	:
	  $(RM) $(OBJS)

fclean	: clean
	  $(RM) $(NAME)

re	: fclean all

.PHONY	: all clean flcean re
