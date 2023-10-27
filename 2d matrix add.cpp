#include<iostream>
using namespace std;

int main()
{
    int i, j;
    int arr [3][2];
    int arr1 [3][2], add[i][j];
    cout<<"Enter elements for 1st matrix: ";
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }  
    }
    cout<<"Enter elements for 2nd matrix: ";
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<2;j++)
        {
            cin>>arr1[i][j];
        }  
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<2;j++)
        {
            add[i][j]=arr[i][j]+arr1[i][j];
        }  
    }
    cout<<"the addition is :"<<endl;
    for (int i=0;i<3;i++)
    {
        cout<<endl;
        for (int j=0;j<2;j++)
        {
            cout<<"\t"<<add[i][j];
        }  
    }
    return 0;
}