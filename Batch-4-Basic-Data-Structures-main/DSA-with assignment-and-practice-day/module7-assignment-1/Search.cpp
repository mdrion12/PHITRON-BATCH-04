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
void findvalue(node *head, int q)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        if (temp->val == q)
        {
            cout << count << endl;
            return;
        }
        else
        {
            count++;
            temp = temp->next;
        }
    }
    cout << -1 << endl;
}

int main()
{
    
    int t;
    cin>>t;
    while(t--)
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
    int q;
    cin>>q;
   findvalue(head,q);

    }
    return 0;
}