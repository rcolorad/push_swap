/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcolorad <rcolorad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:37:42 by rcolorad          #+#    #+#             */
/*   Updated: 2024/09/20 01:02:53 by rcolorad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate(t_stack **stack)
{
    if (*stack == NULL)
        return ;
    *stack = (*stack)->next;
}

void    ra(t_stack **stack_a)
{
    rotate(stack_a);
    write(1, "ra\n", 3);
}

void    rb(t_stack **stack_b)
{
    rotate(stack_b);
    write(1, "rb\n", 3);
}

void    rr(t_stack **stack_a, t_stack **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    write(1, "rr\n", 3);   
}