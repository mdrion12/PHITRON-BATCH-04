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
void nodelevel(node*root,int x)
{
    
    queue<pair<node*,int>>q;
    q.push({root,0});
    bool foundAtLevel = false;
    while(!q.empty())
    {
        pair<node*,int>pr=q.front();
        node*node1=pr.first;
        int level=pr.second;
        q.pop();
        if(level==x)
        {
            cout<<node1->val<<" ";
            foundAtLevel=true;
        }

        if(node1->left)
        {
           q.push({node1->left,level+1});
        }
          if(node1->right)
        {
           q.push({node1->right,level+1});
        }

    }
    if(!foundAtLevel)
    {
        cout<<"Invalid"<<endl;
    }
}
int main()
{ 

    node* root = inputTree();
    int v;
    cin >> v;

    if (v >= 0) {
        nodelevel(root, v);
    } else {
        cout << "Invalid" << endl;
    }


    
    return 0;
}