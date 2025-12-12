#include "push_swap.h"

t_stack *init_stack(int size)
{
    t_stack *st = malloc(sizeof(t_stack));
    st->data = malloc(sizeof(int) * size);
    st->top = -1;
    st->size = size;
    return st;
}