/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_pile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmlynarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:51:20 by jmlynarc          #+#    #+#             */
/*   Updated: 2018/01/24 17:37:13 by jmlynarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile		*create_node(int value)
{
	t_pile		*new_node;

	if (!(new_node = (t_pile*)malloc(sizeof(t_pile))))
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

void		append_node(char *desc, t_pile **pile)
{
	t_pile		*current;
	t_pile		*new_node;
	int			value;

	value = convert_to_value(desc);
	current = *pile;
	new_node = create_node(value);
	if (!(current))
		*pile = new_node;
	else
	{
		while (current->next)
			current = current->next;
		current->next = new_node;
	}
}

t_pile		**read_pile_from(char **av, int ac)
{
	int			i;
	t_pile		**a;

	if (!(a = (t_pile**)malloc(sizeof(t_pile*))))
		return (NULL);
	*a = NULL;
	i = 0;
	while (++i < ac)
		append_node(av[i], a);
	return (a);
}
