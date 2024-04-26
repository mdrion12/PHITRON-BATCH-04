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
void preorder(node*root,vector<int>&v)
{
    if(root==NULL)
    {
        return;
    }
    preorder(root->left,v);
    preorder(root->right,v);
    if(root->left==NULL && root->right==NULL)
    {
        v.push_back(root->val);
    }
 
}
int main()
{
    node* root=inputTree();
    vector<int>v;
    preorder(root,v);
    sort(v.begin(),v.end(),greater<int>());
    for(int c:v)
    {
        cout<<c<<" ";
    }
    
    return 0;
}