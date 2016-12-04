/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_values.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 13:23:34 by khansman          #+#    #+#             */
/*   Updated: 2016/12/03 13:23:35 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/hotrace.h"

/*
** Debug lines:
** ft_putstr(query->query);
** ft_putstr(": ");
** ft_putstr(".\n");
*/

void	find_values(void)
{
	t_query	*query;

	query = g_query;
	while (query != NULL)
	{
		search_for_key(g_index[find_index(query->query[0])],
			query->query);
		if (g_ret)
		{
			ft_putendl(g_ret);
		}
		else
		{
			ft_putstr(query->query);
			ft_write(1, ": Not found.\n", 13);
		}
		query = query->next;
	}
}
