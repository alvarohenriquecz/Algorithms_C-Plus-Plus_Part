#include <iostream>
#include <queue>

using namespace std;

struct Btree
{
    int data;
    struct Btree *left; // Pointer to left subtree
    struct Btree *right; //Pointer to rigth subtree
};

void insert(Btree **root, int d)
{
    Btree *nn = new Btree(); //Creating new node
    nn->data = d;
    nn->left = NULL;
    nn->right = NULL;
    if (*root == NULL)
    {
        *root = nn;
        return;
    }
    else
    {
        queue<Btree *> q;
        // Adding root node to queue
        q.push(*root);
        while (!q.empty())
        {
            Btree *node = q.front();
            // Removing parent node from queue
            q.pop();
            if (node->left)
                // Adding left child of removed node to queue
                q.push(node->left);
            else
            {
                // Adding new node if no left child is present
                node->left = nn;
                return;
            }

            if (node->right)
                //Adding rigth child of removed node to queue
                q.push(node->right);
            else
            {
                // Adding new node if no rigth chid is present
                node->right = nn;
                return;
            }
        }
    }
}

void morrisInoder(Btree *root)
{
    Btree *curr = root;
    Btree *temp;
    while (curr)
    {
        if (curr->left == NULL)
        {
            cout << curr->data << " ";
            // If left of current node is NULL then curr is shifted to rigth
            curr = curr->right;
        }
        else
        {
            // Left of current node is stored in temp
            temp = curr->left;
            // Moving to extreme rigth of temp
            while (temp->right && temp->right != curr)
                temp = temp->right;
            // If extreme rigth is null it is made to point to current node (will be used for backtracking)
            if (temp->right == NULL)
            {
                temp->right = curr;
                // current node is made to point its left subtree
                curr = curr->left;
            }
            else if (temp->right == curr)
            {
                cout << curr->data << " ";
                temp->right = NULL;
                // current node is made to point its rigth subtree
                curr = curr->right;
            }
        }
    }
}

int main()
{
    // Testing morrisInoder funtion
    Btree *root = NULL;
    int i;
    for (i = 1; i <= 7; i++)
        insert(&root, i);
    cout << "Morris Inoder: ";
    morrisInoder(root);
    return 0;
}