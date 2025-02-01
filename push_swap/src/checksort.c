/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 12:20:51 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/25 12:27:39 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	check_sort(t_stck *head_a)
{
	while (head_a != NULL && head_a->next != NULL)
	{
		if ((head_a)->data > head_a->next->data)
			return (0);
		(head_a) = (head_a)->next;
	}
	return (1);
}

void	checksort(t_stck **head)
{
	if (check_sort(*head))
	{
		ft_lstclear(head);
		exit(0);
	}
}
