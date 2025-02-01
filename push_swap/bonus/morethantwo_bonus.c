/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morethantwo_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:50:37 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/28 13:29:05 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_chck_morethantwo_bonus(char **av, int i)
{
	int		k;
	char	**morethantwo;

	k = 0;
	morethantwo = ft_split(av[i], ' ');
	while (morethantwo[k])
	{
		if (!checker(morethantwo[k]))
		{
			write (2, "Error\n", 6);
			free_memory(morethantwo);
			exit(1);
		}
		k++;
	}
	free_memory(morethantwo);
}
