/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 09:57:56 by khansman          #+#    #+#             */
/*   Updated: 2016/12/03 09:57:58 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/hotrace.h"

int		find_index(char key)
{
	if ('a' <= key && key <= 'z')
		return (key - 'a');
	else if ('A' <= key && key <= 'Z')
		return (key - 39);
	else
		return (52);
}

t_link	**find_link_pos(t_link *pos, char *key)
{
	char	diff;
	int		k;

	k = 0;
	while (pos != NULL)
	{
		diff = pos->key[k] - key[k];
		if (diff > 0)
		{
			NEXT1(higher);
		}
		else if (diff < 0)
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


char		*search_for_key(t_link *pos, char *key)
{
	char	diff;
	int		k;
	k = 0;
	while (pos != NULL)
	{
		diff = pos->key[k] - key[k];
		if (diff > 0)
		{
			NEXT2(higher);
		}
		else if (diff < 0)
		{
			NEXT2(lower);
		}
		else
		{
			while (pos->key[k] && key[k] && (pos->key[k] == key[k]))
				k++;
			if (!pos->key[k] && !key[k] && !ft_strcmp(pos->key, key))
				return (pos->value);
			NEXT2(equal);
		}
	}
	return (NULL);
}