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
void insert_head(node *&head, node *&tail, int v)
{
    node *newnode = new node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head->prev = newnode;
    head = newnode; 
}

void insert_any_position(node*head,node*tail, int p,int v)
{
  if(head==NULL)
  {
    return;
  }    
    node *newnode=new node(v);

    node *temp=head;
   
    for(int i=1;i<=p-1;i++)
    {
        temp=temp->next;
       
    }

    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
    temp->next->prev=newnode;


}
void inseertposition(node*&head,node*&tail,int p,int v)
{
    node *newnode=new node(v);
 int l=cnt(head);
    if(head==NULL)
    {
    head=newnode;
    tail=newnode;
    return;
    }
   
    if(p==1)
    {
        node*temp=head;
      if(temp==NULL)
      {
        cout<<"Invalid"<<endl;
        return;
      }
      if(temp->next==NULL)
      {
        temp->next=newnode;
        newnode->prev=temp;
        return;
      }
      newnode->next=temp->next;
      temp->next=newnode;
      newnode->prev=temp;
    }
   else if(1<p && p<l)
    {
      node *temp=head;
   
    for(int i=1;i<=p-1;i++)
    {
        temp=temp->next;
       
    }

    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
    temp->next->prev=newnode;  
    return;
    }
   else if(p==l)
    {
       
  
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail,
     tail=tail->next;
    return;
 
    }
    else
    {
        cout<<"invalid"<<endl;
    }

}
void insert_tail(node*&head,node *&tail,int val)
{
    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail,
     tail=tail->next;

}
void display_reverse(node*tail)
{
    node* temp=tail;
    while(temp!=NULL)
    {
     cout<<temp->val<<" ";
     temp=temp->prev;
    }
    cout<<endl;
}
void display(node *head)
{
    node*temp=head;
    while (temp!=NULL)
    {
     cout<<temp->val<<" ";
     temp=temp->next;
    }
    cout<<endl;
    
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
    node*head=NULL;
    node*tail=NULL;
    int t;
    cin>>t;
      int v,x;

    while(t--)
    {
      
        cin>>v>>x;
        // if(v==0)
        // {
        //     insert_head(head,tail,x);
        //      display(head);
        //     display_reverse(tail);
         
        // }
        // else if(v==1)
        // {
        //     insert_tail(head,tail,x);
        //        display(head);
        //     display_reverse(tail);
        // }
        // else{
        //     if(cnt(head)>v)
        //     {
        //     cout<<"invalid"<<endl;
        //      display(head);
        //     display_reverse(tail);;
        //     }
        //     else if(x==cnt(head))
        //     {
        //         insert_tail(head,tail,x);
        //          display(head);
        //     display_reverse(tail);
        //     }
        //    else if(cnt(head)>v){
            
        //      insert_any_position(head,tail,v,x);
        //       display(head);
        //     display_reverse(tail);
        //    }
        // }
    inseertposition(head,tail,v,x);
display(head);
display_reverse(tail);

    }
    
       
          return 0;
}