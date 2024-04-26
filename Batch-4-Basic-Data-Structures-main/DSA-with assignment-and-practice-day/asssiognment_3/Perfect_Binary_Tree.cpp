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
  int countnode(node*root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int l=countnode(root->left);
        int r=countnode(root->right);
        return l+r+1;
    }
    int maxDepth(node* root) {
    if (root == NULL) {
        return 0;
    }

    int l = maxDepth(root->left);
    int r = maxDepth(root->right);

    return 1 + max(l, r);
}

int main()
{
    node*root=inputTree();
    int n=countnode(root);
    int m=maxDepth(root);
    int c=pow(2,m)-1;
    if(c==n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}