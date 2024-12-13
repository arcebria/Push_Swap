/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arcebria <arcebria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 17:28:49 by arcebria          #+#    #+#             */
/*   Updated: 2024/12/13 19:55:26 by arcebria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac > 2)
	{
		start_stack(&stack_a, av + 1);
		if (stack_a && not_sorted(stack_a))
		{
			if (stack_len(stack_a) <= 5)
				sort_small(&stack_a, &stack_b);
			else
				sort_big(&stack_a, &stack_b);
		}
		free_stack(&stack_a);
	}
	else
		ft_putstr_fd("Error\n", 2);
	return (0);
}
