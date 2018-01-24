/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_find_op.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmlynarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:54:24 by jmlynarc          #+#    #+#             */
/*   Updated: 2018/01/24 16:54:38 by jmlynarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		op_index(char *instruction, char **op_id_list)
{
	int		i;

	i = -1;
	while (++i < 11)
	{
		if (ft_strequ(instruction, op_id_list[i]))
			return (i);
	}
	return (-1);
}
