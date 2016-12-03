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

void	find_values(void)
{
	t_query	*query;
	t_link	*link;
	int		k;

	query = g_query;
	while (query != NULL)
	{
		link = find_link_pos(g_index[find_index(query->query[0])], query->query);
		k = strcmp(link->key, query->query);
		link = (k > 0) ? link->higher : (k < 0) ? link->lower : link->equal;
		ft_putstr(query->query);
		if (link == NULL)
			ft_putendl(": Not Found");
		else
		{
			ft_putstr(": ");
			ft_putendl(link->value);
		}
		query = query->next;
	}
}
