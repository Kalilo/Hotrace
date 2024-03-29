/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   links.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 08:31:41 by khansman          #+#    #+#             */
/*   Updated: 2016/12/03 08:31:43 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/hotrace.h"

t_link		*create_link(char *key, char *value)
{
	t_link		*link;

	link = (t_link *)malloc(sizeof(t_link));
	link->key = key;
	link->value = value;
	link->higher = NULL;
	link->lower = NULL;
	link->equal = NULL;
	return (link);
}

void		destroy_link(t_link *link)
{
	free(link->key);
	free(link->value);
	free(link);
}

t_lindex	*create_lindex(t_link *link)
{
	t_lindex	*index;

	index = (t_lindex *)malloc(sizeof(t_lindex));
	index->ptr = link;
	index->next = NULL;
	return (index);
}

t_query		*create_query(char *query)
{
	t_query		*q;

	q = (t_query *)malloc(sizeof(t_query));
	q->query = query;
	q->next = NULL;
	return (q);
}
