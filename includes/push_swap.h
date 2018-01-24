#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*
** ===================== INCLUDES
*/

# include <libft.h>

/*
** ===================== DEFINES
*/

/*
** ===================== TYPEDEF
*/

typedef struct  s_pile
{
    int             value;
    struct s_pile   *next;
}               t_pile;

typedef int     (*t_op)(t_pile**);

/*
** ===================== PROTOTYPES
*/

int         push_a(t_pile **a, t_pile **b);
int         push_b(t_pile **a; t_pile **b);
int         swap_b(t_pile **b);
int         swap_a(t_pile **a);
int         swap_both(t_pile **a, t_pile **b);
int         rotate_a(t_pile **a);
int         rotate_b(t_pile **b);
int         rotate_both(t_pile **a, t_pile **b);
int         reverse_rotate_a(t_pile **a);
int         reverse_rotate_b(t_pile **b);
int         reverse_rotate_both(t_pile **a, t_pile **b);
int         is_sorted(t_pile **a);

#endif
