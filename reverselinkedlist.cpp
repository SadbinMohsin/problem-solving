#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
};
push(node**head,int data)
{
    node* newnode=new node();
    newnode->data= data;
    newnode->next=*head;
    *head=newnode;
}
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
/*void deletenode(node**head,int k)
{
    node*prev;
    node*temp;
    prev=NULL;
    temp=*head;
    if(temp->data==k&&temp==NULL)
    {
        *head=temp->next;
        delete temp;
    }
    else
    {
        while(temp!=NULL&& temp->data!=k)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete temp;
    }
}*/

int main()
{
  node* head=NULL;
  push(&head,74);
  push(&head,75);
  push(&head,76);
  push(&head,77);
  print(head);
  cout<<endl;
  //deletenode(&head,75);
  //print(head);
}

