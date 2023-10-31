#include "main.h"

/*
 * createnode - create nodes
 * @value: value inside node
 * Return: result
 */

treenode *createnode(int value)
{
    treenode *result = malloc(sizeof(treenode));
    if (result != NULL)
    {
        result->left = NULL;
        result->right = NULL;
        result->value = value;
    }
    return result;
}
