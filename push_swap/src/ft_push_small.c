/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 14:57:53 by hyolasig          #+#    #+#             */
/*   Updated: 2023/03/26 14:57:54 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_push_small_a(t_list **stack_a, t_list **stack_b, int flag)
{
	t_list	*head;

	head = *stack_a;
	while (head->next != NULL)
	{
		if (head->index == 0 && flag == 0)
		{
			pb(stack_a, stack_b);
			break ;
		}
		if (head->index == 1 && flag == 1)
		{
			pb(stack_a, stack_b);
			break ;
		}
		ra(stack_a);
		head = *stack_a;
	}
}
