/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scanone.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:35:43 by omaezzem          #+#    #+#             */
/*   Updated: 2025/02/01 18:14:55 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	empty_check(char *av)
{
	if ((!av))
		return (0);
	return (1);
}

int	check_double_signe(char *av)
{
	int	i;
	int	n_sign;

	i = 0;
	n_sign = 0;
	while (av[i])
	{
		if ((av[i] == '-' || av[i] == '+') && (av[i - 1] == ' ' || i == 0))
		{
			if (is_sign(av[i]))
				n_sign += 1;
		}
		else if ((av[i] == '-' || av[i] == '+') && (av[i - 1] != ' ' || i != 0))
			return (0);
		i++;
	}
	if (n_sign == 1 || n_sign == 0)
		return (1);
	return (0);
}

int	letters_check(char *av)
{
	int	i;
	int	nb_not_overf;

	i = 0;
	nb_not_overf = ft_atoi(av);
	if (!(nb_not_overf >= INT_MIN && nb_not_overf <= INT_MAX))
		return (0);
	while (av[i] != '\0')
	{
		if (av[i] == '+' || av[i] == '-')
			i++;
		if ((!is_digit(av[i])))
			return (0);
		i++;
	}
	return (1);
}

int	check_space(char *av)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (av[i] != '\0')
	{
		if (av[i] != ' ')
			count++;
		i++;
	}
	if (count > 0)
		return (1);
	return (0);
}

int	checker(char *av)
{
	if (!av)
		return (0);
	if (!(empty_check(av)))
		return (0);
	if (!(check_double_signe(av)))
		return (0);
	if (!(letters_check(av)))
		return (0);
	if (!(check_space(av)))
		return (0);
	return (1);
}
