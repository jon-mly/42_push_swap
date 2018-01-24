/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_analysis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmlynarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:53:06 by jmlynarc          #+#    #+#             */
/*   Updated: 2018/01/24 16:53:25 by jmlynarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted(t_pile **a)
{
	t_pile	*current;
	int		last_value;

	current = *a;
	if (!(current) || (current && !(current->next)))
		return (1);
	last_value = current->value;
	current = current->next;
	while (current->next)
	{
		if (current->value < last_value)
			return (0);
		last_value = current->value;
		current = current->next;
	}
	return (1);
}
