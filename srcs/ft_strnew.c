/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 08:05:29 by khansman          #+#    #+#             */
/*   Updated: 2016/12/03 08:05:31 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/hotrace.h"

char	*ft_strnew(size_t size)
{
	char	*temp;
	size_t	k;

	if (!(temp = (char *)malloc((unsigned int)size + 1)))
		return (NULL);
	k = 0;
	while (k <= size)
	{
		temp[k] = '\0';
		k++;
	}
	return (temp);
}
