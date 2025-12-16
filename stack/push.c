#include "push_swap.h"

void stack_push(t_stack **st , int value){
    t_stack *new;

    if(!st)
        return ;
    new = (t_stack *)malloc(sizeof(t_stack));
    if(!new)
        return ;
    new->value = value;
    new->next = *st;
    *st = new;
}