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
    int i,j;
    for(int i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
                cout<<"\nCurrent status of array:\n";
                display();
            }
        }
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
