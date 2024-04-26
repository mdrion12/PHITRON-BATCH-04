#include<bits/stdc++.h>
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
class node1
{
    public:
    int val;
    node1 *next;
    node1 *prev;
    node1(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};
class my_stack
{
    public:
    node1 *head=NULL;
    node1*tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
     node1*newnode=new node1(val);
     if(head==NULL)
     {
        head=newnode;
        tail=newnode;
        return;
     }
     newnode->prev=tail;
     tail->next=newnode;
     tail=tail->next;
    }
    void pop()
    {
        if(!empty())
        {
            sz--;
            node1*deletnode=tail;
            tail=tail->prev;
            if(tail==NULL)
            {
                head=NULL;
            }
            else{
            tail->next=NULL;
            }
            delete deletnode;
        }
       
        
    }
    bool empty()
    {
        return sz==0;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }

};
class my_queue
{
    public:
    node*head=NULL;
    node*tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        node*newnode=new node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
       tail->next=newnode;
       tail=tail->next;
    } 
    void pop()
    {
        if(!empty())
        {
            sz--;
        node* deletenode=head;
         head=head->next;
         delete deletenode;
         if(head==NULL)
         {
            tail=NULL;
         }
        }
    }  
    bool empty()
    {
        return sz==0;
    }
    int size()
    {
        return sz;
    }
    int top()
    {
        return head->val;
    }
};
using namespace std;
int main()
{
    my_stack s;
    my_queue q;
    int x,y;
    cin>>x>>y;
    for(int i=0;i<x;i++)
    {
        int val;
        cin>>val;
        s.push(val);
    }
    for(int i=0;i<y;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    bool flag=true;
    if(s.size()!=q.size())
    {
      
     cout<<"NO"<<endl;
     return 0;
    }
    else{
        while(!s.empty())
        {
            if(s.top()!=q.top())
            {
                flag=false;
                break;
            }
            else
            {
             s.pop();
             q.pop();
            }
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