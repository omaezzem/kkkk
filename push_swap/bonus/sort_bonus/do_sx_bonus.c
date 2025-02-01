/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sx_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:45:42 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/25 12:17:34 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static void	ft_swap(t_stck *stck)
{
	int	tmp;

	if (!stck || !(stck->next) || (ft_lstsize(stck) < 2))
		return ;
	tmp = stck->data;
	stck->data = stck->next->data;
	stck->next->data = tmp;
}

void	do_sa_bonus(t_stck **stack_a)
{
	ft_swap(*stack_a);
}

void	do_sb_bonus(t_stck **stack_b)
{
	ft_swap(*stack_b);
}

void	do_ss_bonus(t_stck **stack_a, t_stck **stack_b)
{
	ft_swap(*stack_a);
	ft_swap(*stack_b);
}
