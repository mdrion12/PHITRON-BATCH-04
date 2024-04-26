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
void print(node *head)
{
    node* temp =head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
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
    for(node *i=head;i->next!=NULL;i=i->next)
    {
        for(node *j=i->next;j!=NULL;j=j->next)
        {
            if(i->val<j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    print(head);
    
    return 0;
}