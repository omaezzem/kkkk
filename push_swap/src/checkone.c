/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkone.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:09:16 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/23 17:51:00 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_chckone(char **av, int i)
{
	int	j;

	j = i;
	while (av[j])
	{
		if (!checker(av[i]))
		{
			write (2, "Error\n", 6);
			exit(1);
		}
		j++;
	}
}
