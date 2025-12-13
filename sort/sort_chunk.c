/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-han <moel-han@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 16:42:18 by moel-han          #+#    #+#             */
/*   Updated: 2025/12/13 20:18:37 by moel-han         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_range(int size) {
    if (size <= 16) return (3);
    if (size <= 100) return (15);
    if (size <= 500) return (35);
    return (45);
}
void index_stack(int *arr, int size) {
    int *sorted = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) sorted[i] = arr[i];

    // Simple Bubble Sort for indexing (use QuickSort for very large sets)
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (sorted[j] > sorted[j + 1]) {
                int tmp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] == sorted[j]) {
                arr[i] = j;
                break;
            }
        }
    }
    free(sorted);
}

// 2. Finding position of the maximum value in B
int get_max_pos(t_stack *b) {
    int max = b->data[0];
    int pos = 0;
    for (int i = 1; i < b->size; i++) {
        if (b->data[i] > max) {
            max = b->data[i];
            pos = i;
        }
    }
    return pos;
}

// 3. Main Chunk Sort Logic
void sort_chunks(t_stack *a, t_stack *b) {
     int n = a->top + 1;
    int chunk_size = (n <= 100) ? 20 : 45;
    int start = 0;            // start index of current chunk
    int end = chunk_size - 1; // end index of current chunk

    while (a->top != -1)
    {
        int i = 0;
        int size = a->top + 1;
        while (i < size)
        {
            int val = a->data[a->top];
            if (val >= start && val <= end)
            {
                pb(a, b);
                // optional: rotate small numbers deeper in B
                if (b->data[b->top] < start + chunk_size / 2)
                    rb(b);
            }
            else
                ra(a);
            i++;
        }
        start += chunk_size;
        end += chunk_size;
        if (end >= n)
            end = n - 1;
    }

    // Phase 2: Push from B to A
    while (b->size > 0) {
        int max_pos = get_max_pos(b);
        if (max_pos <= b->size / 2) {
            while (max_pos-- > 0) rb(b);
        } else {
            while (max_pos++ < b->size) rrb(b);
        }
        pa(a, b);
    }
}

