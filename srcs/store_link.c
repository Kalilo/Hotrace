/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_link.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 10:05:09 by khansman          #+#    #+#             */
/*   Updated: 2016/12/03 10:05:10 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/hotrace.h"

void	store_link(char *key, char *value)
{
	t_link	*link;
	t_link	*tmp;
	int		index;

	index = find_index(*key);
	link = create_link(key, value);
	if (!g_index[index])
	{
		g_index[index] = link;
		return ;
	}
	tmp = find_link_pos(g_index[index], link->key);
	index = g_index[index]->key[0] - link->key[0];
	if (index > 0)
		tmp->higher = link;
	else if (index < 0)
		tmp->lower = link;
	else
		tmp->equal = link;
}
