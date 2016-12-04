/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getnextline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 07:53:13 by khansman          #+#    #+#             */
/*   Updated: 2016/12/03 07:53:14 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/getnextline.h"
#include "../includes/hotrace.h"

static void		remalloc(char **line, int len)
{
	char			*tmp;

	tmp = *line;
	*line = ft_strnew(len + LINE_SIZE + 2);
	if (len != -1)
	{
		ft_memcpy(*line, tmp, len + 1);
		free(tmp);
	}
}

static int		read_line(t_buff *buff)
{
	if (!buff->active)
		buff->active = 1;
	else if (buff->ret < BUFF_SIZE)
	{
		buff->active = 0;
		buff->ret = 0;
		return (0);
	}
	else
		ft_bzero(&buff->buff, BUFF_SIZE);
	buff->ret = read(buff->fd, buff->buff, BUFF_SIZE);
	buff->pos = 0;
	if (buff->ret == -1)
	{
		buff->active = 0;
		return (buff->ret);
	}
	return (1);
}


int			get_next_line(const int fd, char **line)
{
	static t_buff       buff;

	if (BUFF_SIZE < 1 || line == NULL)
		return (-1);
		buff.fd = fd;
	if ((!buff.active || (buff.pos > buff.ret)) && !read_line(&buff))
		return (buff.ret);
	L = -1;
	while (buff.buff[buff.pos] != '\n' && buff.buff[buff.pos] != 26)
	{
		if (buff.pos > buff.ret && !read_line(&buff))
			return (buff.ret);
		if (buff.buff[buff.pos] == '\n' || buff.buff[buff.pos] == 26)
			break ;
		if (((L + 1) % LINE_SIZE) == 0 || L == -1)
			remalloc(&LINE, L);
		LINE[++L] = buff.buff[buff.pos];
		buff.pos++;
	}
	*line = (L == -1) ? ft_strnew(4) : LINE;
	buff.pos++;
	return (1);
}