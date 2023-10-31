#include "main.h"


int main()
{
    treenode *n1 = createnode(11);
    treenode *n2 = createnode(12);
    treenode *n3 = createnode(13);
    treenode *n4 = createnode(14);
    treenode *n5 = createnode(15);
    
    n1->left = n2;
    n1->right = n3;
    n3->left = n4;
    n3->right = n5;

    printtree(n1);

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);

    return (1);
}
