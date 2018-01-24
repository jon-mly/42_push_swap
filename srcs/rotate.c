#include <push_swap.h>

static int  rotate_pile(t_pile **pile)
{
    t_pile  *tmp;
    t_pile  *current;

    if (!(*pile) || ((*pile) && !((*pile)->next)))
        return (0);
    tmp = *pile;
    *pile = (*pile)->next;
    current = *pile;
    while (current->next)
        current = current->next;
    current->next = tmp;
    return (1);
}

int         rotate_a(t_pile **a)
{
    return (rotate_pile(a));
}

int         rotate_b(t_pile **b)
{
    return (rotate_pile(b));
}

int         rotate_both(t_pile **a, t_pile **b)
{
    return (rotate_pile(a) + rotate_pile(b));
}
