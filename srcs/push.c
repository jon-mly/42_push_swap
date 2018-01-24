/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmlynarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:50:43 by jmlynarc          #+#    #+#             */
/*   Updated: 2018/01/24 16:51:16 by jmlynarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		push_a(t_pile **a, t_pile **b)
{
	t_pile		*tmp;

	if (!(*b))
		return (0);
	tmp = *b;
	*b = tmp->next;
	if (*a)
		tmp->next = *a;
	*a = tmp;
	return (1);
}

int		push_b(t_pile **a, t_pile **b)
{
	t_pile		*tmp;

	if (!(*a))
		return (0);
	tmp = *a;
	*a = tmp->next;
	if (*b)
		tmp->next = *b;
	*b = tmp;
	return (1);
}
