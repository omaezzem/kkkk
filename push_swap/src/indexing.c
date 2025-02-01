/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:15:47 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/23 17:50:46 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	indexing(t_stck **head)
{
	t_stck	*tmp;
	t_stck	*prev;
	int		pos;

	tmp = *head;
	while (tmp != NULL)
	{
		prev = *head;
		pos = 0;
		while (prev != NULL)
		{
			if (tmp->data > prev->data)
				pos++;
			prev = prev->next;
		}
		tmp->index = pos;
		tmp = tmp->next;
	}
}
