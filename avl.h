#ifndef PADDLEPADDLE_SSTABLE_AVL_H_
#define PADDLEPADDLE_SSTABLE_AVL_H_

typedef struct avlNode *AvlTree;

/* empty avl tree is just a null pointer */

AvlTree avl_create();

/* free a tree */
void avl_destroy(AvlTree t);

/* return the height of a tree */
int avl_get_height(AvlTree t);

/* return nonzero if key is present in tree */
int avl_search(AvlTree t, int key);

/* insert a new element into a tree */
/* note *t is actual tree */
void avl_insert(AvlTree *t, int key);

/* run sanity checks on tree (for debugging) */
/* assert will fail if heights are wrong */
void avl_sanity_check(AvlTree t);

/* print all keys of the tree in order */
void avl_print_keys(AvlTree t);

/* delete and return minimum value in a tree */
int avl_delete_min(AvlTree *t);

#endif  // PADDLEPADDLE_SSTABLE_AVL_H_
