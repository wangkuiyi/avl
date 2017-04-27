#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "avl.h"

#define N (1024)
#define MULTIPLIER (97)

int main() {
    AvlTree t = avl_create();
    int i;

    for(i = 0; i < N; i++) {
        avl_insert(&t, (i*MULTIPLIER) % N);
    }

    printf("height %d\n", avl_get_height(t));

    assert(avl_search(t, N-1) == 1);
    assert(avl_search(t, N) == 0);

    avl_sanity_check(t);

    for(i = 0; i < N-1; i++) {
        avl_delete_min(&t);
    }

    avl_sanity_check(t);

    avl_print_keys(t);

    avl_destroy(t);

    return 0;
}
