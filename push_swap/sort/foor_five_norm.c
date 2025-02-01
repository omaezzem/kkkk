/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   foor_five_norm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:30:23 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/25 10:18:34 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	norm_five(int poszero, t_stck **head_a)
{
	if (poszero == 1)
		do_sa(head_a);
	else if (poszero == 2)
	{
		do_rra(head_a);
		do_rra(head_a);
		do_rra(head_a);
	}
	else if (poszero == 3)
	{
		do_rra(head_a);
		do_rra(head_a);
	}
	else if (poszero == 4)
		do_rra(head_a);
}

void	norm_foor(int pos, t_stck **head_a)
{
	if (pos == 1)
		do_sa(head_a);
	else if (pos == 2)
	{
		do_rra(head_a);
		do_rra(head_a);
	}
	else if (pos == 3)
		do_rra(head_a);
}
