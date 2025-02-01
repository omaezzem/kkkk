/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rx_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:40:30 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/25 12:17:28 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	do_ra_bonus(t_stck **stack_a)
{
	rotate_bonus(stack_a);
}

void	do_rb_bonus(t_stck **stack_b)
{
	rotate_bonus(stack_b);
}

void	do_rr_bonus(t_stck **stack_a, t_stck **stack_b)
{
	rotate_bonus(stack_a);
	rotate_bonus(stack_b);
}
