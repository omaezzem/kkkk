/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:40:30 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/25 10:18:25 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	do_ra(t_stck **stack_a)
{
	rotate(stack_a);
	write (1, "ra\n", 3);
}

void	do_rb(t_stck **stack_b)
{
	rotate(stack_b);
	write (1, "rb\n", 3);
}

void	do_rr(t_stck **stack_a, t_stck **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write (1, "rr\n", 3);
}
