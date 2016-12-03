/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 07:24:29 by khansman          #+#    #+#             */
/*   Updated: 2016/12/03 07:24:32 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOTRACE_H
# define HOTRACE_H

/*
** ----------\
** Includes   |
** ----------/
*/

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

/*
** ----------\
** Defines    |
** ----------/
*/

/*
** ----------\
** Structures |
** ----------/
*/

typedef struct		s_link
{
	char			*key;
	char			*value;
	struct s_link	*higher;
	struct s_link	*lower;
	struct s_link	*equal;
}					t_link;

typedef struct		s_lindex
{
	struct s_link	*ptr;
	struct s_lindex	*next;
}					t_lindex;

typedef struct		s_query
{
	char			*query;
	struct s_query	*next;
}					t_query;

/*
** ----------\
** Global     |
** ----------/
*/

# ifdef MAIN_FILE

	t_link			*g_index[53];
	t_lindex		*g_lindex;
	t_query			*g_query;
# else

	extern t_link	*g_index[53];
	extern t_lindex	*g_lindex;
	extern t_query	*g_query;
# endif

/*
** ----------\
** Prototypes |
** ----------/
*/

/*
** algo.c
*/
int					find_index(char key);
t_link				*find_link_pos(t_link *pos, char *key);
/*
** find_values.c
*/
void				find_values(void);
/*
** ft_bzero.c
*/
void				ft_bzero(void *s, size_t n);
/*
** ft_memcpy.c
*/
void				*ft_memcpy(void *dest, const void *src, size_t n);
/*
** ft_strcmp.c
*/
int					ft_strcmp(const char *s1, const char *s2);
/*
** ft_strnew.c
*/
char				*ft_strnew(size_t size);
/*
** getline.c
*/
int					get_line(int fd, char **line);
/*
** getnextline.c
*/
int					get_next_line(const int fd, char **line);
/*
** init.c
*/
void				init_globals(void);
/*
** links.c
*/
t_link				*create_link(char *key, char *value);
void				destroy_link(t_link *link);
t_lindex			*create_lindex(t_link *link);
t_query				*create_query(char *query);
/*
** putstr.c
*/
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putchar(char const c);
/*
** read_input.c
*/
char				read_input(void);
/*
** store_link.c
*/
void				store_link(char *key, char *value);

/*
**                                /----------\                                **
** ----- ----- ----- ----- ----- |  The End   | ----- ----- ----- ----- ----- **
**                                \----------/                                **
*/
#endif
