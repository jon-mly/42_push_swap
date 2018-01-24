#include <push_swap.h>

int     op_index(char *instruction, char **op_id_list)
{
    int     i;

    i = -1;
    while (++i < 11)
    {
        if (ft_strequ(instruction, op_id_list[i]))
            return (i);
    }
    return (-1);
}
