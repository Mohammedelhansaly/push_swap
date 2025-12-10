#include "push_swap.h"

void stack_push(t_stack *st , int new){
    st->top++;
    st->data[st->top] = new;
}