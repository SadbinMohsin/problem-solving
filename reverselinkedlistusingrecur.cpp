#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* link;
};
void push(Node**head,int data)
{
    Node* temp=new Node();//Take node in heap
    temp->data=data;
    temp->link=*head;
    *head=temp;


}
void print(Node*head)
{

    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->link;
    }

}
Node*reverse1(Node* head)
    {
        if (head == NULL || head->link == NULL)
            return head;

        /* reverse the rest list and put
          the first element at the end */
        Node* rest = reverse1(head->link);
        head->link->link = head;

        /* tricky step -- see the diagram */
        head->link = NULL;

        /* fix the head pointer */
      return rest;
    }
int main()
{
    Node* head=NULL;
    push(&head,2);
    push(&head,45);
    push(&head,423);
    push(&head,34);
    print(head);
    reverse1(&head);
    cout<<endl;
     print(head);

}
