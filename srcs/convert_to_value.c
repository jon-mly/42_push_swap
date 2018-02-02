/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmlynarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 17:04:17 by jmlynarc          #+#    #+#             */
/*   Updated: 2018/01/24 17:08:49 by jmlynarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			convert_to_value(char *desc)
{
	int		i;

	i = -1;
	while (desc[++i])
	{
		if (!(ft_isdigit(desc[i])))
			exit_with_error();
	}
	return (ft_atoi(desc));
}
