/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmlynarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:54:41 by jmlynarc          #+#    #+#             */
/*   Updated: 2018/01/24 17:24:13 by jmlynarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_op	*init_operations_list(void)
{
	t_op	**op_list;

	if (!(op_list = (t_op**)malloc(sizeof(t_op*) * 11)))
		return (NULL);
	op_list[0] = &push_a;
	op_list[1] = &push_b;
	op_list[2] = &swap_a;
	op_list[3] = &swap_b;
	op_list[4] = &swap_both;
	op_list[5] = &rotate_a;
	op_list[6] = &rotate_b;
	op_list[7] = &rotate_both;
	op_list[8] = &reverse_rotate_a;
	op_list[9] = &reverse_rotate_b;
	op_list[10] = &reverse_rotate_both;
	return (op_list);
}

char	**init_op_id_list(void)
{
	char	**op_id_list;

	if (!(op_id_list = (char**)malloc(sizeof(char*) * 11)))
		return (NULL);
	op_id_list[0] = "pa";
	op_id_list[1] = "pb";
	op_id_list[2] = "sa";
	op_id_list[3] = "sb";
	op_id_list[4] = "ss";
	op_id_list[5] = "ra";
	op_id_list[6] = "rb";
	op_id_list[7] = "rr";
	op_id_list[8] = "rra";
	op_id_list[9] = "rrb";
	op_id_list[10] = "rrr";
	return (op_id_list);
}
/*
int		main(int ac, char **av)
{
	t_op	*op_list;
	t_pile	**a;
	t_pile	**b;
	char	**op_id_list;
	char	**instruction;

	if (!(instruction = (char**)malloc(sizeof(char*))))
		exit_with_error();
	while (get_next_line(1, instruction))
	{

	}
	ft_memdel((void**)&op_list);
	ft_memdel((void**)&op_id_list);
	return (0);
}
*/
