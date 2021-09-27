?* Program to find of Height or Depth of Binary tree */



#include <iostream>
using namespace std;

struct Btree
{
    Btree *left, *right;
    int data;
}*root = NULL, *temp = NULL, *np = NULL, *q;
 
void create(int n)
{
    int value,c = 0;   
    while (c < n)
    {
        if (root == NULL)
        {
            root = new Btree;
            cout<<"enter value of root node\n";
            cin>>root->data;
            root->right=NULL;
            root->left=NULL;
        }
        else
        {
            temp = root;
            cout<<"enter value of node\n";
            cin>>value;
            while(true)
            {
                if (value <= temp->data)
                {
                    if (temp->left == NULL)
                    {
                        temp->left = new Btree;
                        temp = temp->left;
                        temp->data = value;
                        temp->left = NULL;
                        temp->right = NULL;
                        cout<<"value entered in left\n";
                        break;
                    }
                    else if (temp->left != NULL)
                    {
                        temp = temp->left;
                    }
                }
                else if (value > temp->data)
                {
                    if (temp->right == NULL)
                    {
                        temp->right = new Btree;
                        temp = temp->right;
                        temp->data = value;
                        temp->left = NULL;
                        temp->right = NULL;
                        cout<<"value entered in right\n";
		        break;
		    }
                    else if (temp->right != NULL)
                    {
                        temp = temp->right;
                    }
                 }
             }
        }
        c++;
    }
}
void inorder(Btree *temp)
{
    if (temp != NULL)
    {
        inorder(temp->left);
        cout<<temp->data<<endl;
        inorder(temp->right);
    }
}

int maxDepth(Btree* node)
{
    if (node == NULL)
        return 0;
    else
    {
        /* compute the depth of each subtree */
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
     
        /* use the larger one */
        if (lDepth > rDepth)
            return(lDepth + 1);
        else return(rDepth + 1);
    }
}

int main()
{
    cout<<"Enter the number of Nodes for Binary Tree = ";
    int n;
    cin>>n;
    create(n);
    cout<<"printing traversal in inorder\n";
    inorder(root);
    cout<<"Height or Depth of Binary tree = "<<maxDepth(root)<<endl;
   
}
