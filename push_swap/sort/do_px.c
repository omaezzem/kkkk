/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_px.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:03:03 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/25 10:18:07 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	do_pa(t_stck **stack_a, t_stck **stack_b)
{
	t_stck	*tmp_b;

	tmp_b = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	tmp_b->next = NULL;
	(tmp_b)->next = (*stack_a);
	(*stack_a) = tmp_b;
	write (1, "pa\n", 3);
}

void	do_pb(t_stck **stack_a, t_stck **stack_b)
{
	t_stck	*tmp_a;

	tmp_a = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	tmp_a->next = NULL;
	(tmp_a)->next = (*stack_b);
	(*stack_b) = tmp_a;
	write (1, "pb\n", 3);
}
