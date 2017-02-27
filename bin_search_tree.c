/* Alex Weed
   H789X588
   CS300
   Assignment 6 Binary Search Tree
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bin_search_tree.h"

void key_setequal(Key a, Key b)		// Sets the key a to the value of the key b
{
}

int Key_iseuqal(Key a, Key b)		// Returns true(1) if the two keys are equal, or false(0) otherwise
{
}

int key_lessthan(Key a, Key b)		// eturns true(1) fi a comes before b i the order used for sorting
{
}

void tree_init(Tree *t) 		// Initialize the tree *t
{
}

Node *tree_makenode(Key k, Node *parent)	// Makes a new Node (with malloc), sets its key to k,
{						//	its parent to parent, and its left and right children to NULL.
}
						 	
Node *tree_root(Tree *t)		// returns the root of t (This is an identity function, included for completeness)
{
}

Node *tree_parent(Node *n)		// Returns the parent of n
{
}

Node *tree_leftchild(Node *n) 		// Returns the left child of n
{
}

Node *tree_rightchild(Node *n)		// Returns the right child of n
{
}

Node *tree_search(Key k, Tree t)	// Returns the node in tree t whose key is k if it exists, or NULL
{
}

int tree_num_children(Node *n)		// Returns the number of children (0, 1 or 2) of node n
{
}

void tree_insert(Tree *t, Key k)	// Adds a new nod whose key is k to the tree t
{
}

void tree_delete(Tree t, Key k)		// Removes the node whose ky is k from the tree t if it is contained in the tree
{
}

void tree_preorder(Node *n, FILE *fp)	// Writes out the key for each node of tree n, one key per line, in preorder, to the file fp
{
}

void tree_postorder(Node *n, FILE *fp)	// Writes out the key for each node of tree n, one key per line, in postorder, to the file fp
{
}

void tree_inorder(Node *n, FILE *fp)	// Writes out the key for each node of tree n, one key per line, in inorder, to the file fp
{
}

int tree_empty(Tree t)			// Returns true(1) if tree t is empty and false(0) otherwise
{
}

int tree_height(Tree t)			// Returns the height of the tree t
{
}

void tree_makenull(Tree t)		// Deletes all nodes of the tree t
{
}

