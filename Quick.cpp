#include<iostream>
using namespace std;
static int c=1,swapcount=0;
int Partition(int A[],int p, int r)
{
    int x=A[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++)
    {
        if(A[j]<=x)
        {
            i=i+1;
            swap(A[i],A[j]);
            swapcount++;
            cout<<"\nCurrent array status for pivot x="<<x<<":\n";
            for(int i=0;i<=r;i++)
            {
                cout<<A[i]<<"\t";
            }
        }
    }
    swap(A[i+1],A[r]);swapcount++;
    cout<<"\nArray status after pass "<<c++<<":\n";
    for(int i=0;i<=r;i++)
    {
        cout<<A[i]<<"\t";
    }
    return i+1;
}

void QuickSort(int A[],int p,int r)
{
    if(p<r)
    {
        int q=Partition(A,p,r);
        QuickSort(A,p,q-1);
        QuickSort(A,q+1,r);
    }
}

int main()
{
    int A[]={2,8,7,1,3,5,6,4};
    int n=8;
    QuickSort(A,0,n-1);
    cout<<"\n\nFinal status of array:\n";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<"\t";
    }
    cout<<"\n\nTotal no. of partitions :"<<c<<endl;
    cout<<"Total no. of swaps :"<<swapcount<<endl;
}
