/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:33:32 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/28 13:29:33 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	addto_list(char *line, t_check **head_a)
{
	ft_lstadd_back_bonus(head_a, ft_lstnew_bonus(line));
}

int	checkline(t_check **head_a, char *line)
{
	if (!ft_strcmp(line, "sa\n"))
		addto_list(line, head_a);
	else if (!ft_strcmp(line, "sb\n"))
		addto_list(line, head_a);
	else if (!ft_strcmp(line, "pa\n"))
		addto_list(line, head_a);
	else if (!ft_strcmp(line, "pb\n"))
		addto_list(line, head_a);
	else if (!ft_strcmp(line, "ra\n"))
		addto_list(line, head_a);
	else if (!ft_strcmp(line, "rb\n"))
		addto_list(line, head_a);
	else if (!ft_strcmp(line, "rra\n"))
		addto_list(line, head_a);
	else if (!ft_strcmp(line, "rrb\n"))
		addto_list(line, head_a);
	else if (!ft_strcmp(line, "rrr\n"))
		addto_list(line, head_a);
	else if (!ft_strcmp(line, "ss\n"))
		addto_list(line, head_a);
	else if (!ft_strcmp(line, "rr\n"))
		addto_list(line, head_a);
	else
		return (1);
	return (0);
}

int	read_operations(t_check **head_a)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (checkline(head_a, line))
		{
			ft_lstclear_bonus(head_a);
			write (2, "Error\n", 6);
			exit(1);
		}
		line = get_next_line(0);
	}
	return (0);
}
