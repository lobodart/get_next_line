/*
** get_next_line.h for gnl in /home/bodart_l/projets/Perso/piscine_tek1/gnl
** 
** Made by Louis BODART
** Login   <bodart_l@epitech.net>
** 
** Started on  Tue Dec  3 09:36:46 2013 Louis BODART
** Last update Tue Dec  3 10:25:38 2013 Louis BODART
*/

#define	BUFF_SIZE	10

typedef	struct	s_list	t_list;

struct		s_list
{
  char		c;
  t_list	*next;
};

char		*get_next_line(const int);
