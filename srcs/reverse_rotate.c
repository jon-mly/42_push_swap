#include <push_swap.h>

static int  reverse_rotate_pile(t_pile **pile)
{
    t_pile      *tmp;
    t_pile      *current;

    if (!(*pile) || ((*pile) && !((*pile)->next)))
        return (0);
    current = *pile;
    while (current->next && current->next->next)
        current = current->next;
    tmp = current->next;
    current->next = NULL;
    tmp->next = *pile;
    *pile = tmp;
    return (1);
}

int         reverse_rotate_a(t_pile **a)
{
    return (reverse_rotate_pile(a));
}

int         reverse_rotate_b(t_pile **b)
{
    return (reverse_rotate_pile(b));
}

int         reverse_rotate_both(t_pile **a, t_pile **b)
{
    return (reverse_rotate_pile(a) + reverse_rotate_pile(b));
}
