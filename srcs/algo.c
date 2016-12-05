/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 09:57:56 by khansman          #+#    #+#             */
/*   Updated: 2016/12/04 14:47:49 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/hotrace.h"

int			find_index(char key)
{
	if ('a' <= key && key <= 'z')
		return (key - 'a');
	else if ('A' <= key && key <= 'Z')
		return (key - 39);
	else
		return (52);
}

t_link		**find_link_pos(t_link *pos, char *key)
{
	int		k;

	k = 0;
	while (pos != NULL)
	{
		if ( pos->key[k] > key[k])
		{
			NEXT1(higher);
		}
		else if ( pos->key[k] < key[k])
		{
			NEXT1(lower);
		}
		else
		{
			while (pos->key[k] && key[k] && (pos->key[k] == key[k]))
				k++;
			NEXT1(equal);
		}
	}
	return (NULL);
}

void		search_for_key(t_link *pos, char *key)
{
	int		k;

	k = 0;
	g_ret = NULL;
	while (pos != NULL)
	{
		if ( pos->key[k] > key[k])
		{
			NEXT2(higher);
		}
		else if ( pos->key[k] < key[k])
		{
			NEXT2(lower);
		}
		else
		{
			while (pos->key[k] && key[k] && (pos->key[k] == key[k]))
				k++;
			if (!pos->key[k] && !key[k] && !ft_strcmp(pos->key, key))
				g_ret = pos->value;
			NEXT2(equal);
		}
	}
}
