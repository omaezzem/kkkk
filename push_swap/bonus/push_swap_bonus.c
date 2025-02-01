/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:47:37 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/28 13:29:21 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	scan(char **av, int len)
{
	int	i;

	i = 1;
	while (av[i])
	{
		len = count_str(av[i], ' ');
		if (len > 1)
			ft_chck_morethantwo_bonus(av, i);
		if (len == 1)
			ft_chckone_bonus(av, i);
		i++;
	}
}

int	check_sort(t_stck *head_a)
{
	while (head_a != NULL && head_a->next != NULL)
	{
		if ((head_a)->data > head_a->next->data)
			return (0);
		(head_a) = (head_a)->next;
	}
	return (1);
}

void	splity_av(char *av, t_stck **list)
{
	int		i;
	int		j;
	char	**split;
	int		toint;

	split = ft_split(av, ' ');
	if ((!split[0]) || (*split[0] == '\0'))
	{
		write(2, "Error\n", 6);
		free_memory(split);
		exit(1);
	}
	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		j = 0;
		if (split[i][j] == '+')
			j++;
		toint = ft_atoi(split[i]);
		ft_lstadd_back(list, ft_lstnew(toint));
		i++;
	}
	free_memory(split);
}

static void	ko_ok(t_stck *head_a, t_stck *head_b)
{
	if (head_b != NULL)
	{
		write (2, "KO\n", 3);
		return ;
	}
	if (check_sort(head_a))
		write (1, "OK\n", 3);
	else
		write (2, "KO\n", 3);
}

int	main(int ac, char **av)
{
	t_stck	*head_a;
	t_stck	*head_b;
	t_check	*check;
	int		i;
	int		len;

	i = 1;
	len = 0;
	if (ac >= 2)
	{
		scan(av, len);
		while (av[i])
		{
			splity_av(av[i], &head_a);
			i++;
		}
		checkdoubles(&head_a);
		read_operations(&check);
		do_line_by_line(&check, &head_a, &head_b);
		ko_ok(head_a, head_b);
		ft_lstclear_bonus(&check);
		ft_lstclear(&head_a);
		ft_lstclear(&head_b);
	}
}
