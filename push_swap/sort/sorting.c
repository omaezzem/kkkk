/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:06:17 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/25 10:31:04 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sorting_two(t_stck **head)
{
	indexing(head);
	if ((*head)->index == 0)
		do_sa(head);
}

void	sorting_three(t_stck **head)
{
	indexing(head);
	if ((*head)->index == 0 && (*head)->next->index == 2)
	{
		do_rra(head);
		do_sa(head);
	}
	else if ((*head)->index == 1 && (*head)->next->index == 0)
		do_sa(head);
	else if ((*head)->index == 1 && (*head)->next->index == 2)
		do_rra(head);
	else if ((*head)->index == 2 && (*head)->next->index == 1)
	{
		do_ra(head);
		do_sa(head);
	}
	else if ((*head)->index == 2 && (*head)->next->index == 0)
		do_ra(head);
	else if ((*head)->index == 0 && (*head)->next->index == 2)
		do_ra(head);
}

void	sorting_foor(t_stck **head_a, t_stck **head_b)
{
	t_stck	*pusha;
	int		pos;

	pusha = *head_a;
	indexing(head_a);
	pos = 0;
	while ((*head_a) != NULL)
	{
		if ((*head_a)->index == 0)
			break ;
		pos += 1;
		(*head_a) = (*head_a)->next;
	}
	(*head_a) = pusha;
	norm_foor(pos, head_a);
	do_pb(head_a, head_b);
	sorting_three(head_a);
	do_pa(head_a, head_b);
}

void	sorting_five(t_stck **head_a, t_stck **head_b)
{
	t_stck	*pusha;
	int		poszero;

	poszero = 0;
	pusha = *head_a;
	indexing(head_a);
	while ((*head_a) != NULL)
	{
		if ((*head_a)->index == 0)
			break ;
		poszero++;
		(*head_a) = (*head_a)->next;
	}
	*head_a = pusha;
	norm_five(poszero, head_a);
	do_pb(head_a, head_b);
	sorting_foor(head_a, head_b);
	do_pa(head_a, head_b);
}
