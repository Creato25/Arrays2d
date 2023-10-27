#include<iostream>
using namespace std;

int main()
{
    int i, j;
    int flag=0;
    int check;
    int arr [3][2];
    cout<<"Enter elements: ";
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }  
    }
    cout<<"the elements are :"<<endl;
    for (int i=0;i<3;i++)
    {
        cout<<endl;
        for (int j=0;j<2;j++)
        {
            cout<<"\t"<<arr[i][j];
        }  
    }
    return 0;
}