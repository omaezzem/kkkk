/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:15:03 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/29 11:17:01 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate(t_stck **stack)
{
	t_stck	*head1;
	t_stck	*head2;

	if (ft_lstsize(*stack) < 2)
		return ;
	head1 = (*stack);
	while (head1->next->next != NULL)
		head1 = head1->next;
	head2 = get_bottom(*stack);
	head1->next = NULL;
	head2->next = (*stack);
	(*stack) = head2;
}
