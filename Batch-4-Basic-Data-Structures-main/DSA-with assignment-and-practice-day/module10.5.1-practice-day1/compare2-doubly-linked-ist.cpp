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
    node*head1=NULL;
    node *tail1=NULL;
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
      while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head1,tail1,val);
    }
    if(cnt(head)!=cnt(head1))
    {
        cout<<"NO"<<endl;
        return 0;
    }
    bool flag=true;
    for(node *i = head, *j = head1; i != NULL && j != NULL; i = i->next, j = j->next)
    {
       if(i->val!=j->val)
       {
        flag=false;
        break;
       }
    
      
    }
    if(flag==true)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    
    return 0;
}