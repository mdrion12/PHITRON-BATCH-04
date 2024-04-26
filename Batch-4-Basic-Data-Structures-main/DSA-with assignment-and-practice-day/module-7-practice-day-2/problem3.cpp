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
int cnt( node *head)
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
{   node *head=NULL;
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
   int c= cnt(head);
   if(c%2==0)
   {
    
    for(int i=1;i<c/2;i++)
    {
     head=head->next;   
    }
    cout<<head->val<<" "<<head->next->val<<endl;
   }
   else
   {
    for(int i=1;i<c/2;i++)
    {
        head=head->next;
    }
    cout<<head->next->val<<endl;
   }

    
    return 0;
}