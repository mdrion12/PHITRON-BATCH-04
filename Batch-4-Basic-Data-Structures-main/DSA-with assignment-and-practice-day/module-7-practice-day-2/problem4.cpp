#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }

};
void insert_tail(node *&head,node *&tail,int val)
{
    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    tail=newnode;
}
int main()
{
    node *head=NULL;
    node *tail=NULL;
    while(true)
    {
        int v;
        cin>>v;
        if(v==-1)
        {
            break;
        }
        insert_tail(head,tail,v);       
    }
    int mx=INT_MIN;
    for(node *i=head;i!=NULL;i=i->next)
    {
       
        if(i->val>=mx)
        {
            mx=i->val;
        }
    }
    cout<<mx<<endl;
    
    return 0;
}