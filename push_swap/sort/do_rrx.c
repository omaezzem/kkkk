/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:43:15 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/25 10:18:18 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	do_rra(t_stck **stack_a)
{
	reverse_rotate(stack_a);
	write (1, "rra\n", 4);
}

void	do_rrb(t_stck **stack_b)
{
	reverse_rotate(stack_b);
	write (1, "rrb\n", 4);
}

void	do_rrr(t_stck **stack_a, t_stck **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write (1, "rrr\n", 4);
}
