/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morethantwo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:08:17 by omaezzem          #+#    #+#             */
/*   Updated: 2025/02/01 16:01:16 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_chck_morethantwo(char **av, int i)
{
	int		k;
	char	**morethantwo;

	k = 0;
	morethantwo = ft_split(av[i], ' ');
	if (!morethantwo)
	{
		write (2, "Error.malloc\n", 14);
		free_memory(morethantwo);
		exit(1);
	}
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
