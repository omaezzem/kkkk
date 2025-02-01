/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:14:06 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/24 16:17:08 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

t_check	*ft_lstnew_bonus(char *content)
{
	t_check	*newnode;

	newnode = malloc(sizeof(t_check));
	if (!newnode)
		return (NULL);
	newnode->data = content;
	newnode->next = NULL;
	return (newnode);
	return (NULL);
}
