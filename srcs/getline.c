/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getline.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 08:11:07 by khansman          #+#    #+#             */
/*   Updated: 2016/12/03 08:11:09 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/hotrace.h"

static char	*ft_re_malloc(char *line, size_t size)
{
	char				*tmp;

	tmp = ft_strnew(size + 50);
	if (size > 0)
	{
		ft_memcpy(tmp, line, size + 1);
		free(line);
	}
	return (tmp);
}

int			get_line(int fd, char **line)
{
	static unsigned int	k;
	char				buff;
	char				*l;

	l = NULL;
	read(fd, &buff, 1);
	while (buff != '\n' && buff != '\0')
	{
		if (k + 1 % 50 == 0 || k == 0)
			l = ft_re_malloc(l, k);
		l[k] = buff;
		if (buff != 0)
			k++;
		read(fd, &buff, 1);
	}
	*line = l;
	if (k > 0)
	{
		k = 0;
		return (1);
	}
	else
		line = NULL;
	return (0);
}
