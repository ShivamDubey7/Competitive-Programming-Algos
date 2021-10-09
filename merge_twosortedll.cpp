#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
node *takeinput_better()
{
    int data;

    cin >> data;
    node *head = NULL;
    node *tail = NULL;

    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }

        cin >> data;
    }
    return head;
}
node *merge_twosortedlist(node *x, node *y)
{
    node *finalhead = NULL;
    node *finaltail = NULL;
   
    if (x->data < y->data)
    {
        finalhead = x;
        finaltail = x;
        x = x->next;
        while (x != NULL && y != NULL)
        {
            if (x->data > y->data)
            {
                finaltail->next = y;
                finaltail = finaltail->next;

                y = y->next;
            }
            else
            {
                finaltail->next = x;
                finaltail = finaltail->next;
                x = x->next;
            }
        }
       
    }
   
    else if (x->data > y->data)
    {
        finalhead = y;
        finaltail = y;
        y = y->next;
        while (x != NULL && y != NULL)
        {
            if (x->data > y->data)
            {
                finaltail->next = y;
                finaltail = finaltail->next;

                y = y->next;
            }
            else
            {
                finaltail->next = x;
                finaltail = finaltail->next;

                x = x->next;
            }
        }
    }
    

    if (y == NULL)
    {
        finaltail->next = x;
    }
    else
    {
        finaltail->next = y;
    }
    return finalhead;
}
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    node *x = takeinput_better();
    print(x);
    cout<<endl;
    node *y = takeinput_better();
    print(y);
    cout<<endl;
    node *z = merge_twosortedlist(x, y);
    print(z);
}