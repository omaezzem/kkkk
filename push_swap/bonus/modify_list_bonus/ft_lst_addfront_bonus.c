/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_addfront_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:19:00 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/24 16:16:50 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	ft_lstadd_front_bonus(t_check **lst, t_check *new)
{
	if (!lst)
		return ;
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
