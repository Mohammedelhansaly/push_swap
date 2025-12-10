#include "push_swap.h"

void sa(t_stack *st)
{
    if(st->top < 1)
        return st->data[st->top];
    int j;
    j = st->data[st->top];
    st->data[st->top] = st->data[st->top - 1]; 
    st->data[st->top - 1] = j;
}