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

/*
** ----------\
** Global     |
** ----------/
*/

/*
** ----------\
** Prototypes |
** ----------/
*/

/*
** ft_bzero.c
*/
void		ft_bzero(void *s, size_t n);
/*
** ft_memcpy.c
*/
void		*ft_memcpy(void *dest, const void *src, size_t n);
/*
** ft_strcmp.c
*/
int			ft_strcmp(const char *s1, const char *s2);
/*
** ft_strnew.c
*/
char		*ft_strnew(size_t size);
/*
** getline.c
*/
int			get_line(int fd, char **line);
/*
** getnextline.c
*/
int			get_next_line(const int fd, char **line);

/*
**                                /----------\                                **
** ----- ----- ----- ----- ----- |  The End   | ----- ----- ----- ----- ----- **
**                                \----------/                                **
*/
#endif
