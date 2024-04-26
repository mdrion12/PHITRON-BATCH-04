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
{   node *head=NULL;
    node *head1=NULL;
    node *tail=NULL;
    node *tail1=NULL;
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
      while(true)
    {
        int v;
        cin>>v;
        if(v==-1)
        {
            break;
        }
        insert_tail(head1,tail1,v);
    }
    int c1=cnt(head1);
    if(c!=c1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        bool flag=true;
    
        for (node *i = head, *j = head1; i != NULL && j != NULL; i = i->next, j = j->next)
      {
    if (i->val != j->val)
    {
        flag = false;
        break;
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
    }

    
    return 0;
}