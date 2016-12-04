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

void		clear_str(char *str)
{
	int		k;

	k = 0;
	while (str[k])
	{
		if (str[k] && (str[k] < 32 || str[k] > 126))
			str[k] = str[k + 1];
		k++;
	}
}

static void	readkey(void)
{
	char		*key;
	char		*value;

	while (get_next_line(0, &key) && *key)
	{
		get_next_line(0, &value);
		clear_str(value);
		store_link(key, value);
	}
	if (key && !*key)
		free(key);
}

static void	readquery(void)
{
	char		*query;
	t_query		*pos;

	while (get_next_line(0, &query))
	{
		clear_str(query);
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

char		read_input(void)
{
	readkey();
	readquery();
	return (g_query != NULL && g_lindex != NULL);
}
