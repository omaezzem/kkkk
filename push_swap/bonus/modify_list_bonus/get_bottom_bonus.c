/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bottom_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:46:43 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/24 18:28:57 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"	

t_check	*get_bottom_bonus(t_check *stack)
{
	while (stack && stack->next != NULL)
		stack = stack->next;
	return (stack);
}
