/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 07:52:51 by khansman          #+#    #+#             */
/*   Updated: 2016/12/03 07:52:52 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAIN_FILE
#include "../includes/hotrace.h"

int		main()
{
	init_globals();
	if (!read_input())
	{
		ft_putendl("Failed to read input.\n");
		return (0);
	}
	printf("It reads!\n");
	find_values();
	printf("It searches!\n");
	free_lindex();
	free_query();
}
