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

int		find_index(char key)
{
	if ('a' <= key && key <= 'z')
		return (key - 'a');
	else if ('A' <= key && key <= 'Z')
		return (key - 39);
	else
		return (52);
}