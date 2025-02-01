/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:29:41 by omaezzem          #+#    #+#             */
/*   Updated: 2025/02/01 18:07:26 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	checkdoubles(t_stck **head_a)
{
	t_stck	*tmp;
	t_stck	*addr;

	addr = *head_a;
	indexing(head_a);
	while (*head_a != NULL)
	{
		tmp = (*head_a)->next;
		while (tmp != NULL)
		{
			if ((*head_a)->index == tmp->index)
			{
				*head_a = addr;
				write (2, "Error\n", 6);
				ft_lstclear(head_a);
				exit(1);
			}
			tmp = tmp->next;
		}
		*head_a = (*head_a)->next;
	}
	*head_a = addr;
}
