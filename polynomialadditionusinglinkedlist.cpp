// this is a program to add two polynomials using linked list
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int coeff;
    int expo;
    struct node* next;
};
void create(struct node* poly)
{
    int data,pow,c;
    struct node* temp=poly;
    //int c=1;
    cout<<"ENTER COEFFICIENT : ";
    cin>>data;
    cout<<"ENTER EXPONENT: ";
    cin>>pow;
    temp->coeff=data;
    temp->expo=pow;
    temp->next=NULL;
    cout<<"IF THERE ARE MORE TERMS IN POLYNOMIAL ENTER 1 ELSE ENTER 0: ";
    cin>>c;
    while(c!=0)
    {
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        cout<<"ENTER COEFFICIENT : ";
        cin>>data;
        cout<<"ENTER EXPONENT: ";
        cin>>pow;
        ptr->coeff=data;
        ptr->expo=pow;
        temp->next=ptr;
        ptr->next=NULL;
        temp=ptr;
        cout<<"IF THERE ARE MORE TERMS IN POLYNOMIAL ENTER 1 ELSE ENTER 0: ";
        cin>>c;
    }
}
void addpoly(struct node* poly1,struct node* poly2,struct node* poly3)
{
    //struct node* poly3=(struct node*)malloc(sizeof(struct node));
    struct node* temp1=poly1;struct node* temp2=poly2;struct node* temp3=poly3;
    while(temp1!=NULL&&temp2!=NULL)
    {
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        if(temp1->expo>temp2->expo)
        {
            temp3->coeff=temp1->coeff;
            temp3->expo=temp1->expo;
            temp3->next=ptr;
            temp3=ptr;
            temp1=temp1->next;
        }
        else if(temp1->expo<temp2->expo)
        {
            temp3->coeff=temp2->coeff;
            temp3->expo=temp2->expo;
            temp3->next=ptr;
            temp3=ptr;
            temp2=temp2->next;
        }
        else if(temp1->expo==temp2->expo)
        {
            temp3->coeff=temp2->coeff+temp1->coeff;
            temp3->expo=temp2->expo;
            temp3->next=ptr;
            temp3=ptr;
            temp2=temp2->next;
            temp1=temp1->next;
        }
    }
    if(temp2==NULL)
    {
        temp3->coeff=temp1->coeff;
        temp3->expo=temp1->expo;
        temp1=temp1->next;
        while(temp1!=NULL)
        {
            struct node* ptr=(struct node*)malloc(sizeof(struct node));
            temp3->coeff=temp1->coeff;
            temp3->expo=temp1->expo;
            temp1=temp1->next;
            temp3->next=ptr;
            temp3=ptr;
        }
    }
    if(temp1==NULL)
    {
        temp3->coeff=temp2->coeff;
        temp3->expo=temp2->expo;
        temp2=temp2->next;
        while(temp2!=NULL)
        {
            struct node* ptr=(struct node*)malloc(sizeof(struct node));
            temp3->coeff=temp2->coeff;
            temp3->expo=temp2->expo;
            temp2=temp2->next;
            temp3->next=ptr;
            temp3=ptr;
        }
    }
    temp3=NULL;
}
void display(struct node* poly)
{
    struct node* temp=poly;
    while(temp->next!=NULL)
    {
        cout<<temp->coeff<<"x^"<<temp->expo<<"+";
        temp=temp->next;
    }
    cout<<temp->coeff<<"x^"<<temp->expo;
}
int main()
{
    struct node* poly1=(struct node*)malloc(sizeof(struct node));
    struct node* poly2=(struct node*)malloc(sizeof(struct node));
    cout<<"ENTER FIRST POLYNOMIAL:\n";
    create(poly1);
    cout<<"ENTER SECOND POLYNOMIAL:\n";
    create(poly2);
    cout<<"\nFIRST POLYNOMIAL IS: ";
    display(poly1);
    cout<<"\nSECOND POLYNOMIAL IS: ";
    display(poly2);
    struct node* poly3=(struct node*)malloc(sizeof(struct node));
    addpoly(poly1,poly2,poly3);
    cout<<"\nTHE RESULTANT POLYNOMIAL IS: ";
    display(poly3);
}
