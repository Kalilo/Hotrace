/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 17:04:20 by khansman          #+#    #+#             */
/*   Updated: 2016/12/03 17:04:21 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/hotrace.h"

void	print_short_link(t_link *link)
{
	ft_putendl((link != NULL) ? link->key : "NULL");
}

void	print_link(t_link *link)
{
	ft_putendl("---LINK---");
	if (link == NULL)
	{
		ft_putendl("NULL\n--- -- ---");
		return ;
	}
	ft_putstr("Key = ");
	ft_putendl(link->key);
	ft_putstr("Higher: ");
	print_short_link(link->higher);
	ft_putstr("Lower: ");
	print_short_link(link->lower);
	ft_putstr("Equal: ");
	print_short_link(link->equal);
	ft_putendl("--- -- ---");
}
