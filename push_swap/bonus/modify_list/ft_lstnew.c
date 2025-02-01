/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:14:06 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/24 16:14:44 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

t_stck	*ft_lstnew(int content)
{
	t_stck	*newnode;

	newnode = malloc(sizeof(t_stck));
	if (!newnode)
		return (NULL);
	newnode->data = content;
	newnode->next = NULL;
	return (newnode);
	return (NULL);
}
