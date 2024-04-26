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
        return;
    }
    tail->next=newnode;
    tail=newnode;
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
    int c=cnt(head);
    if(c==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
   else{
     int mx=INT_MIN;
    int mn=INT_MAX;
    
   for(node *i=head;i!=NULL;i=i->next)
   {
    if(mx<i->val)
    {
        mx=i->val;
    }
    if(mn>i->val)
    {
        mn=i->val;
    }
   } 
   int dif= mx-mn;
   if(dif<0)
   {
    cout<<dif*(-1)<<endl;
   }
   else{
    cout<<dif<<endl;
   }
   }
    return 0;
}