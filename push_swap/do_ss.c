/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnemor <lnemor@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:21:20 by lnemor            #+#    #+#             */
/*   Updated: 2021/12/13 16:28:29 by lnemor           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_ss(t_stacks *stack)
{
	do_sa(stack);
	do_sb(stack);
	ft_putendl_fd("ss", 1);
}