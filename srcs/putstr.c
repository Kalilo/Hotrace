/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 08:45:29 by khansman          #+#    #+#             */
/*   Updated: 2016/12/03 08:45:30 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/hotrace.h"

void	ft_putstr(char const *s)
{
	int	k;

	k = 0;
	while (s[k] != '\0')
		k++;
	ft_write(1, s, k);
}

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_write(1, "\n", 1);
}

void	ft_putchar(char const c)
{
	
	ft_write(1, &c, 1);
}

void	ft_write(int fd, char const *s, size_t len)
{
	static int		c;//counter for buffsize
	size_t			i;
    static char		b[WRITE_BUFF];

	if (s == NULL)
	{
		c && write(fd, b, c);
		c = 0;
		return ;
	}
	i = 0;
	start:
	while (c < WRITE_BUFF && i < len)
	{
		b[c] = s[i];
		i++;
		c++;
	}
	if (c == WRITE_BUFF && !(c = 0))
	{
		write(fd, b, WRITE_BUFF + 1);
		goto start;
	}
}