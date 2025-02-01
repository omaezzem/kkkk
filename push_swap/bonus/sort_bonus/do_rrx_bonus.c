/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrx_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:43:15 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/25 09:59:59 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	do_rra_bonus(t_stck **stack_a)
{
	reverse_rotate_bonus(stack_a);
}

void	do_rrb_bonus(t_stck **stack_b)
{
	reverse_rotate_bonus(stack_b);
}

void	do_rrr_bonus(t_stck **stack_a, t_stck **stack_b)
{
	reverse_rotate_bonus(stack_a);
	reverse_rotate_bonus(stack_b);
}
