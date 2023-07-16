#include <iostream>
using namespace std;
class sorting
{
    int a[10],n;
    public:
    sorting()
    {
        cout<<"Enter no. of elements:";
        cin>>n;
        cout<<"Enter the elements:";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void bubble();
    void display();
    
};
void sorting ::bubble()
{
    int i=0,j,sorted=0;
    while(i<n && sorted==0)
    {
        j=n-1;sorted=1;
        while(j>i)
        {
            if(a[j-1]>a[j])
            {
                sorted=0;
                swap(a[j-1],a[j]);
           }
           j--;
        }
        i++;
        cout<<"\nStatus of array after pass "<<i<<"\n";
                display();
    }
    
}
void sorting ::display()
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}

int main()
{
    sorting s;
    s.bubble();
    cout<<"\nFinal status of list after sorting:\n";
    s.display();
}
