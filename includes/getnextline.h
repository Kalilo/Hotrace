/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:52:58 by khansman          #+#    #+#             */
/*   Updated: 2016/11/13 16:53:28 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GETNEXTLINE_H
# define GETNEXTLINE_H

/*
** ----------\
** Includes   |
** ----------/
*/

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

/*
** Debug:
** # include "./libft/includes/libft.h"
*/

/*
** ----------\
** Defines    |
** ----------/
*/

# define BUFF_SIZE 256

# define NUM_BUFF  10
# define LINE_SIZE 50

/*
** Short_hand
*/
# define AB_POS    (buff.pos % BUFF_SIZE)
# define L         buff.l
# define LINE      buff.line

# define BUFF_END (BUFF[POS] == '\0' && RET < BUFF_SIZE)

/*
** ----------\
** Structures |
** ----------/
*/

typedef struct	s_buff
{
	char		buff[BUFF_SIZE];
	char		active;
	int			fd;
	int			ret;
	int			pos;
	int			l;
	char		*line;
}				t_buff;

/*
** ----------\
** Prototypes |
** ----------/
*/

int				get_next_line(const int fd, char **line);

/*
**                                /----------\                                **
** ----- ----- ----- ----- ----- |  The End   | ----- ----- ----- ----- ----- **
**                                \----------/                                **
*/
#endif
