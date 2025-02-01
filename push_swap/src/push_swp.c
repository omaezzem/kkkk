/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:51:40 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/28 13:30:28 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	scan(char **av, int len)
{
	int	i;

	i = 1;
	while (av[i])
	{
		len = count_str(av[i], ' ');
		if (len > 1)
			ft_chck_morethantwo(av, i);
		if (len == 1)
			ft_chckone(av, i);
		i++;
	}
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

void	sort(t_stck **head_a, t_stck **head_b)
{
	int	len;

	len = ft_lstsize(*head_a);
	if (len == 2)
		sorting_two(head_a);
	else if (len == 3)
		sorting_three(head_a);
	else if (len == 4)
		sorting_foor(head_a, head_b);
	else if (len == 5)
		sorting_five(head_a, head_b);
	else if (len > 5)
		part_one(head_a, head_b);
}

int	main(int ac, char **av)
{
	t_stck	*head_a;
	t_stck	*head_b;
	int		i;
	int		len;

	i = 1;
	len = 0;
	head_a = NULL;
	head_b = NULL;
	if (ac >= 2)
	{
		scan(av, len);
		while (av[i])
		{
			splity_av(av[i], &head_a);
			i++;
		}
		checkdoubles(&head_a);
		checksort(&head_a);
		sort(&head_a, &head_b);
		ft_lstclear(&head_a);
		ft_lstclear (&head_b);
	}
}
