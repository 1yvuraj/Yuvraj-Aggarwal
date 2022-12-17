#include<iostream>
using namespace std;
class node
{
public:
    node*next;
    int data;
    node(int d)
    {
        data=d;
        next=NULL;
    }
}
void insertionEnd(node*&head,node*&tail,int data)
{
    if(head==NULL)
    {
        node*n=new node(data);
        head=tail=n;
    }
    else
    {
        node*n=new node(data);
        tail->next=n;
        tail=n;
    }
}
node*mergeSort(node*head1,node*head2)
{
    node*nH;
    if(head1==NULL)return head2;
    if(head2==NULL)return head1;

    if(head1->data>head2->data)
    {
        nH->next=head2;
        mergeSort(head1,head2->next);
    }
    else
    {
        nH->next=head1;
        mergeSort(head1->next,head2);
    }
    return nH;
}
int main()
{
    node*head1,*head2;
    head1=head2=NULL;
    node*tail1=*tail2;
    tail=tail2=NULL;

    int data1,data2;

    int n1,n2;

    for(int i=0;i<n1;i++)
    {
        cin>>data1;
        insertionEnd(head1,tail1,data1);
    }

    for(int i=0;i<n2;i++)
    {
        cin>>data2;
        insertionEnd(head2,tail2,data2);
    }
    node*newHead;
    newHead=mergeSort(head1,head2);
    
}

