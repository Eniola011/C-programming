#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>


typedef struct treenode
{
    int value;
    struct treenode *left;
    struct treenode *right;
} treenode;


treenode *createnode(int value);
void printtree(treenode *root);


#endif
