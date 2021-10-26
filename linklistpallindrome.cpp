#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(){}
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
node* insertlist(node* head)
{
    int c=1,i=1,val;node* temp=head;
    while(c!=0)
    {
        cout<<"ENTER DATA OF NODE "<<i<<" : ";
        cin>>val;
        node *newnode=new node(val);
        temp->next=newnode;
        temp=newnode;
        cout<<"ENTER 1 IF YOU WANT MORE NODES ELSE 0: ";
        cin>>c;
        i++;
    }
    head=head->next;
    return head;
}
node* reverselist(node* head,node* newlist)
{
    node* temp=head->next;node* prev=head;
    while(temp!=NULL)
    {
        node* head2=new node();
        head2->data=prev->data;
        head2->next=newlist;
        newlist=head2;
        prev=temp;
        temp=temp->next; 
    }
    node* head2=new node();
    head2->data=prev->data;
    head2->next=newlist;
    newlist=head2;
    return newlist;
}
void printlist(node* head)
{
    node* temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data;
}
void pallindromecheck(node* head,node* newlist)
{
    node* temp=head;node* temp2=newlist;int c=0;
    while(temp!=NULL&&c==0)
    {
        if(temp->data!=temp2->data)
        {
            c++;
        }
        temp=temp->next;
        temp2=temp2->next;
    }
    if(c==0)
    cout<<"THE NUMBER IS PALLINDROME";
    else
    cout<<"THE NUMBER IS NOT PALLINDROME";
}
int main()
{
    node* newlist=NULL;
    node *head=new node(0);
    head=insertlist(head);
    newlist=reverselist(head,newlist);
    //printlist(head);
    pallindromecheck(head,newlist);
}
