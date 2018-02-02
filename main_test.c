#include "push_swap.h"
#include <stdio.h>

void	display_pile(t_pile **a)
{
	t_pile	*current;

	current = *a;
	if (!(current))
		return;
	while (current)
	{
		printf("elt : %d\n", current->value);
		current = current->next;
	}
}

void	display_instructions(t_op_stack **stack)
{
	t_op_stack *current;

	current = *stack;
	if (!(current))
		return;
	while (current)
	{
		printf("Instruction : %s\n", current->op_id);
		current = current->next;
	}
}

int main(int ac, char **av)
{
	t_pile	**a;
	t_op_stack	**stack;

	stack = read_instructions();
	display_instructions(stack);
	printf("Work correctly\n");
	return (0);
}
