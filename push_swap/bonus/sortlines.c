/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortlines.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 09:24:49 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/29 11:56:52 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	sort_lines(t_check *lines, t_stck **stack_a, t_stck **stack_b)
{
	if (!ft_strcmp(lines->data, "sa\n"))
		do_sa_bonus(stack_a);
	else if (!ft_strcmp(lines->data, "sb\n"))
		do_sb_bonus(stack_b);
	else if (!ft_strcmp(lines->data, "pa\n"))
		do_pa_bonus(stack_a, stack_b);
	else if (!ft_strcmp(lines->data, "pb\n"))
		do_pb_bonus(stack_a, stack_b);
	else if (!ft_strcmp(lines->data, "ra\n"))
		do_ra_bonus(stack_a);
	else if (!ft_strcmp(lines->data, "rb\n"))
		do_rb_bonus(stack_b);
	else if (!ft_strcmp(lines->data, "rra\n"))
		do_rra_bonus(stack_a);
	else if (!ft_strcmp(lines->data, "rrb\n"))
		do_rrb_bonus(stack_b);
	else if (!ft_strcmp(lines->data, "rrr\n"))
		do_rrr_bonus(stack_a, stack_b);
	else if (!ft_strcmp(lines->data, "ss\n"))
		do_ss_bonus(stack_a, stack_b);
	else if (!ft_strcmp(lines->data, "rr\n"))
		do_rr_bonus(stack_a, stack_b);
	else
		return (1);
	return (0);
}

void	do_line_by_line(t_check **check, t_stck **stack_a, t_stck **stack_b)
{
	t_check	*tmp;

	tmp = NULL;
	tmp = *check;
	while (tmp)
	{
		sort_lines(tmp, stack_a, stack_b);
		tmp = tmp->next;
	}
}
