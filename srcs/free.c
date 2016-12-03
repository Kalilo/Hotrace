/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 15:47:22 by khansman          #+#    #+#             */
/*   Updated: 2016/12/03 15:47:23 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/hotrace.h"

void	free_lindex(void)
{
	while (g_lindex != NULL)
	{
		destroy_link(g_lindex->ptr);
		g_lindex = g_lindex->next;
	}
}

void	free_query(void)
{
	while (g_query != NULL)
	{
		free(g_query->query);
		g_query = g_query->next;
	}
}
