/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmlynarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:53:28 by jmlynarc          #+#    #+#             */
/*   Updated: 2018/01/24 16:54:09 by jmlynarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		swap_pile(t_pile **pile)
{
	int		tmp_value;

	if (!(*pile) || ((*pile) && !((*pile)->next)))
		return (0);
	tmp_value = (*pile)->value;
	(*pile)->value = ((*pile)->next)->value;
	((*pile)->next)->value = tmp_value;
	return (1);
}

int				swap_b(t_pile **b)
{
	return (swap_pile(b));
}

int				swap_a(t_pile **a)
{
	return (swap_pile(a));
}

int				swap_both(t_pile **a, t_pile **b)
{
	return (swap_pile(a) + swap_pile(b));
}
