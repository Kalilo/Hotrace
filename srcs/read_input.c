/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 09:44:17 by khansman          #+#    #+#             */
/*   Updated: 2016/12/03 09:44:19 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/hotrace.h"

static void	readkey(void)
{
	char		*key;
	char		*value;

	while (get_next_line(0, &key))
	{
		if (*key == '\0')
			break ;
		get_next_line(0, &value);
		store_link(key, value);
	}
	if (key && !*key)
		free(key);
}

char		read_input(void)
{
	readkey();
	//
	return (1);//
}
