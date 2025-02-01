/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_morefive.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 15:35:01 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/31 12:09:58 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	handle_cas(t_stck **stack_a)
{
	int		l;
	int		count;
	int		len;
	t_stck	*aa;

	len = 0;
	count = 0;
	aa = (*stack_a);
	while (aa && aa->next != NULL)
	{
		l = aa->data - aa->next->data;
		if (l == 2 || l == 3 || l == 4)
		{
			count++;
		}
		aa = aa->next;
	}
	if (count >= 15 && count < 499)
		return (1);
	return (0);
}

int	len_arg(t_stck **stack_a)
{
	int	range;
	int	len;

	range = 0;
	len = ft_lstsize(*stack_a);
	if (len > 100)
		range = 33;
	else if (len <= 100)
		range = 16;
	return (range);
}

void	part_one(t_stck **stack_a, t_stck **stack_b)
{
	int	i;
	int	range;

	range = len_arg(stack_a);
	i = 0;
	indexing(stack_a);
	while (*stack_a != NULL)
	{
		if ((*stack_a)->index <= i)
		{
			do_pb(stack_a, stack_b);
			i++;
		}
		else if ((*stack_a)->index <= (i + range))
		{
			do_pb(stack_a, stack_b);
			do_rb(stack_b);
			i++;
		}
		else if (handle_cas(stack_a))
			do_rra(stack_a);
		else
			do_ra(stack_a);
	}
	part_two(stack_a, stack_b);
}

void	part_two(t_stck **stack_a, t_stck **stack_b)
{
	int		pos;
	int		akbarindex;
	int		len;
	t_stck	*a;

	len = ft_lstsize(*stack_b);
	indexing(stack_b);
	while (*stack_b != NULL)
	{
		len = ft_lstsize(*stack_b);
		akbarindex = len - 1;
		pos = 0;
		a = (*stack_b);
		while (a->index != akbarindex)
		{
			pos++;
			// len--;
			a = a->next;
		}
		len = ft_lstsize(*stack_b);
		part_three(pos, len, stack_b);
		do_pa(stack_a, stack_b);
	}
}

void	part_three(int pos, int len, t_stck **stack_b)
{
	if (pos <= (len / 2))
	{
		while (pos > 0)
		{
			do_rb(stack_b);
			pos--;
		}
	}
	else
	{
		while (pos != len)
		{
			do_rrb(stack_b);
			pos++;
		}
	}
}
//pb
// pb
// rb
// pb
// pb
// rb
// pb
// rb
// pb
// rrb