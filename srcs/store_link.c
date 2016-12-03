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

void	store_lindex(t_link *link)
{
	static	t_lindex	*index_pos;

	if (index_pos != NULL)
	{
		index_pos->next = create_lindex(link);
		index_pos = index_pos->next;
	}
	else
	{
		g_lindex = create_lindex(link);
		index_pos = g_lindex;	
	}
}

void	store_link(char *key, char *value)
{
	t_link				*link;
	t_link				*tmp;
	int					index;
	

	index = find_index(*key);
	link = create_link(key, value);
	if (!g_index[index])
	{
		store_lindex(link);
		g_index[index] = link;
		return ;
	}
	tmp = find_link_pos(g_index[index], link->key);
	index = ft_strcmp(g_index[index]->key, link->key);
	if (index > 0)
		tmp->higher = link;
	else if (index < 0)
		tmp->lower = link;
	else
		tmp->equal = link;
	store_lindex(link);
}
