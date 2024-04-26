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
{
    node *head1=NULL;
    node *head2=NULL;
    node *tail1=NULL;
    node*tail2=NULL;
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
    int count1=cnt(head1);

 while(true)
    {
        int v;
        cin>>v;
        if(v==-1)
        {
            break;
        }
        insert_tail(head2,tail2,v);
    }
    int count2=cnt(head2);
    if(count1==count2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}