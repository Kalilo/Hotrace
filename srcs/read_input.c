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

void		readkey(void)
{
	char		*key;
	char		*value;

	while (get_next_line(0, &key) && *key)
	{
		get_next_line(0, &value);
		store_link(key, value);
	}
	if (key && !*key)
		free(key);
}

void	readquery(void)
{
	char		*query;
	t_query		*pos;

	while (get_next_line(0, &query))
	{
		if (g_query)
		{
			pos->next = create_query(query);
			pos = pos->next;
		}
		else
		{
			g_query = create_query(query);
			pos = g_query;
		}
	}
}
