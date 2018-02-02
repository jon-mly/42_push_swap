/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmlynarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 17:37:21 by jmlynarc          #+#    #+#             */
/*   Updated: 2018/01/24 17:46:48 by jmlynarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		append_to_stack(t_op_stack **stack, char *instruction)
{
	t_op_stack		*new_node;
	t_op_stack		*current;

	if (!(new_node = (t_op_stack*)malloc(sizeof(t_op_stack))))
		exit_with_error();
	new_node->op_id = instruction;
	new_node->next = NULL;
	current = *stack;
	if (!(current))
		*stack = new_node;
	else
	{
		while (current->next)
			current = current->next;
		current->next = new_node;
	}
}

t_op_stack		**read_instructions(void)
{
	t_op_stack		**stack;
	char			**tmp;

	if (!(stack = (t_op_stack**)malloc(sizeof(t_op_stack*))) ||
			!(tmp = (char **)malloc(sizeof(char*))))
		return (NULL);
	*stack = NULL;
	while (get_next_line(1, tmp) > 0)
		append_to_stack(stack, *tmp);
	return (stack);
}
