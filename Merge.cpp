#include<iostream>
using namespace std;
static int divs=0,merge=0;
void Merge(int A[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+2],R[n2+2];
    
    //left array
    for(int i=1;i<=n1;i++)
    {
        L[i]=A[p+i-1];
    }
    L[n1+1]=9999;
    cout<<"\nLeft array:\n";
    for(int x=1;x<=n1;x++)
    {
        cout<<L[x]<<"\t";
    }
    
    //right array
    for(int j=1;j<=n2;j++)
    {
        R[j]=A[q+j];
    }
    R[n2+1]=9999;
    cout<<"\nRight array:\n";
    for(int x=1;x<=n2;x++)
    {
        cout<<R[x]<<"\t";
    }
    
    int i=1,j=1;
    //merge of two arrays
    for(int k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
    }
    merge++;
}

void MergeSort(int A[],int p,int r)
{   
    if(p<r)
    {
        int q=(p+r)/2;
        divs++;
        MergeSort(A,p,q);
        MergeSort(A,q+1,r);
        Merge(A,p,q,r);
    }
}

int main()
{
    int A[]={12,43,18,-5,6,15,20,45};
    int n=8;
    MergeSort(A,0,n-1);
    cout<<"\nFinal array after merge sort:\n";
    for(int x=0;x<n;x++)
    {
        cout<<A[x]<<"\t";
    }
    cout<<"\n\nNo. of divisions :"<<divs<<endl;
    cout<<"\nNo. of merges :"<<merge<<endl;
}
