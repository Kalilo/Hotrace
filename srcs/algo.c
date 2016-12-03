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

t_link	*find_link_pos(t_link *pos, char *key)
{
	char	diff;
	int		k;

	k = 0;
	while (pos != NULL)
	{
		//print_link(pos);
		diff = pos->key[k] - key[k];
		if (diff > 0)
		{
			if (pos->higher != NULL)
				pos = pos->higher;
			else
				return (pos);
		}
		else if (diff < 0)
		{
			if (pos->lower != NULL)
				pos = pos->lower;
			else
				return (pos);
		}
		else
		{
			while (pos->key[k] && (pos->key[k] == key[k]))
				k++;
			if (pos->equal != NULL)
				pos = pos->equal;
			else
				return (pos);
		}
	}
	return (NULL);
}
