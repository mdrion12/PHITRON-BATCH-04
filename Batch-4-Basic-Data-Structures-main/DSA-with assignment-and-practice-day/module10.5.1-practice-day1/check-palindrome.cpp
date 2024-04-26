#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};
void insert_tail(node*&head,node *&tail,int val)
{
    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    tail->next=newnode;
    newnode->prev=tail,
     tail=tail->next;

}
int cnt(node *head)
{
    node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int main()
{
    node *head=NULL;
    node *tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    
    bool flag=true;
if(cnt(head)%2==1)
{
    
    node*i=head;
    node*j=tail;
    while(i!=j)
    {
        if(i->val!=j->val)
        {
         flag=false;
         break;
        }
        i=i->next;
        j=j->prev;
    }
}
else
{
  node*i=head;
    node*j=tail;
    while(i->next!=j)
    {
        if(i->val!=j->val)
        {
            flag=false;
            break;
        }
         i=i->next;
        j=j->prev;
    
    }
    if(i->val!=j->val)
    {
        flag=false;
        
    }
    
}
if(flag==true)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
    
    
    return 0;
}