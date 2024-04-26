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
node* inputtree()
{
    int val;
    cin>>val;
    node*root;
    if(val==-1)
    {
        root=NULL;
    }
    else
    {
       root=new node(val);
       queue<node*>q;
       if(root)
       {
        q.push(root);
       }
    
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
        else{
            myleft=new node(l);
        }
        if(r==-1)
        {
            myright=NULL;
        }
        else{
            myright=new node(r);
        }
        f->left=myleft;
        f->right=myright;
        if(f->left)
        {
            q.push(f->left);
        }
        if(f->right)
        {
            q.push(f->right);
        }
    }
 
}
return root;
}

int preorder(node* root)
{
    if (root == NULL)
    {
        return 0;
    }
    
     int sum = 0;

    sum += preorder(root->left);
    sum += preorder(root->right);
   
    
    if (root->left != NULL || root->right != NULL)
    {
        sum += root->val;
    }

    return sum;
}

int main()
{
   node*root= inputtree();

  int sum=preorder(root);
 cout<<sum<<endl;
    
    return 0;
}
