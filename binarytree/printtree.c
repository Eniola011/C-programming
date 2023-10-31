#include "main.h"

/*
 * printtree - print root and leaves
 *
 * Return: nothing
 */
void printtree(treenode *root)
{
    if (root == NULL)
    {
        printf("--<empty>--\n");
        return;
    }
    printf("Value = %d\n", root->value);
    printf("Go left..\n");
    printtree(root->left);
    printf("Go right..\n");
    printtree(root->right);
    printf("done...\n");
}
