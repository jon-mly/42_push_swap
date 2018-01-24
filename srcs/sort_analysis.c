#include <push_swap.c>

int     is_sorted(t_pile **a)
{
    t_pile  *current;
    int     last_value;

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
