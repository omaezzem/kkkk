/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_px_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:03:03 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/25 13:02:10 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	do_pa_bonus(t_stck **stack_a, t_stck **stack_b)
{
	t_stck	*tmp_b;

	if (!(*stack_b))
		return ;
	tmp_b = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	tmp_b->next = NULL;
	(tmp_b)->next = (*stack_a);
	(*stack_a) = tmp_b;
}

void	do_pb_bonus(t_stck **stack_a, t_stck **stack_b)
{
	t_stck	*tmp_a;

	if (!(*stack_a))
		return ;
	tmp_a = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	tmp_a->next = NULL;
	(tmp_a)->next = (*stack_b);
	(*stack_b) = tmp_a;
}
