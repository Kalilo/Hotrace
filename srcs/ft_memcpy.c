/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 08:08:51 by khansman          #+#    #+#             */
/*   Updated: 2016/12/03 08:08:52 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/hotrace.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (n == 0 || dest == src)
		return (dest);
	d = (char *)dest;
	s = (char *)src;
	while (--n)
		*d++ = *s++;
	*d = *s;
	return (dest);
}
