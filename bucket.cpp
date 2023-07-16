#include <iostream>
using namespace std;
#define N 50
struct node
{
    float data;
    struct node *next;
};
struct node *B[N];
float A[N],Arr[N];
int n;

void insertionSort(float Arr[],int x)
{
    float hold;
    for(int i=2;i<=x;i++)
    {
        hold=Arr[i];
        int j=i-1;
        while(j>=1 && Arr[j]>hold)
        {
            Arr[j+1]=Arr[j];
            j--;
        }
        Arr[j+1]=hold;
    }
}

void display()
{
    struct node *tmp;
    for(int i=0;i<=n-1;i++)
    {
        if(B[i]!=NULL)
        {
            for(tmp=B[i];tmp!=NULL;tmp=tmp->next)
            {
                cout<<tmp->data<<"\t";
            }
        }
    }
}

void BucketSort()
{
    struct node *t,*temp,*curr;
    int i,j,k;
    for(i=0;i<=n-1;i++)
        B[i]=NULL;
    for(i=1;i<=n;i++)
    {
        temp=new node;
        temp->data=A[i];
        temp->next=NULL;
        k=n*A[i];
        
        if(B[k]==NULL)
            B[k]=temp;

        else
        {
            for(curr=B[k];curr->next!=NULL;curr=curr->next);
                curr->next=temp;
        }
    }
    cout<<"\nAfter insertion : ";
    display();
    for(i=0;i<=n-1;i++)
    {
        if(B[i]!=NULL)
        {
            for(t=B[i],j=1;t!=NULL;t=t->next,j++)
                Arr[j]=t->data;
            insertionSort(Arr,j-1);
            for(t=B[i],j=1;t!=NULL;t=t->next,j++)
                t->data=Arr[j];
        }
    }
    cout<<"\nAfter sorting : ";
    display();
}

int main()
{
    cout<<"Enter no. of elements :";cin>>n;
    cout<<"Enter the elements one by one :";
    for(int i=1;i<=n;i++) cin>>A[i];
    BucketSort();
}
