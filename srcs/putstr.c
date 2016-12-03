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
	write(1, s, k);
}

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	write(1, "\n", 1);
}

void	ft_putchar(char const c)
{
	write(1, &c, 1);
}
