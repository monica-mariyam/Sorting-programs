#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int A[]={7,6,5,4,3,2,1};
    int n=7,hold,j;
    for(int i=0;i<n;i++)
    {
        hold=A[i];
        j=i-1;
        while(j>=0 && A[j]>hold)
        {
            A[j+1]=A[j];
            j--;count++;
        }
        A[j+1]=hold;
    }
    cout<<"\nFinal array:\n";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<"\t";
    }
    cout<<"\nNo. of swaps :"<<count<<endl;
}
