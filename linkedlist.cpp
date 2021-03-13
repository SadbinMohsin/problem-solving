#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* link;
};
node nodeinsert(int* x,node**head)
{


    node* temp=new node();//heap memory for new node
    temp->data=*x;
     if(*head!=NULL)
        temp->link=*head;
     *head=temp;


}
void printnode(node**head)
{
    node* temp=*head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}

int main()
{
    node* head=NULL;
    int n,x;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>i;
        nodeinsert(&x,&head);
        printnode(&head);
    }


}
