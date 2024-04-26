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
void insert_tail(node *&head, int val)
{
    node *newnode = new node(val);

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void duplicate(node *head)
{
    for (node *i = head; i != NULL ; i = i->next)
    {
        node *j = i;
        while (j->next != NULL)
        {
            if (i->val == j->next->val)
            {
                node *deleteNode = j->next;
                j->next = j->next->next;
                delete deleteNode;
            }
            else
            {
                j = j->next;
            }
        }
    }
}


void display(node*head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}


int main()
{
     node *head=NULL;
  
    while(true)
    {
        int v;
        cin>>v;
        if(v==-1)
        {
            break;
        }
        insert_tail(head,v);
    }
  
    duplicate(head);
    display(head);
 


    
    return 0;
}
