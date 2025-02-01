/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:54:00 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/24 10:54:13 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
