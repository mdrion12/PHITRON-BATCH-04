#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *right;
    node *left;
    node(int val)
    {
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }

};
node* inputTree()
{
    int val;
    cin>>val;
    node* root;
     if(val==-1)
     {
        root=NULL;
     }
     else
     {
        root=new node(val);
     queue<node*>q;
     q.push(root);
     while(!q.empty())
     {
        node*f=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        node*myleft;
        node*myright;
        if(l==-1)
        {
            myleft=NULL;
        }
        else
        {
            myleft=new node(l);
            q.push(myleft);
        }
         if(r==-1)
        {
            myright=NULL;
        }
        else
        {
            myright=new node(r);
            q.push(myright);
        }
        f->left=myleft;
        f->right=myright;

     }
    }
  
    return root;
}
void left(node*root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left)
    {
        left(root->left);
    }
    else
    {
        if(root->right)
        left(root->right);
    }
    cout<<root->val<<" ";
}
void right(node*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->val<<" ";
    if(root->right)
    {
        right(root->right);
    }
    else
    {
        if(root->left)
        right(root->left);
    }
    
}
int main()
{
    node*root=inputTree();
    left(root->left);
    cout<<root->val<<" ";
    right(root->right);
    
    return 0;
}