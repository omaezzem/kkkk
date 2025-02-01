/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkone_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:53:00 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/28 12:56:56 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_chckone_bonus(char **av, int i)
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
