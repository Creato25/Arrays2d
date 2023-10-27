#include<iostream>
using namespace std;

int main()
{
    int i, j,a,b,c,d,k;
    int flag=0;
    int check;
    int arr [a][b];
    int arr1 [c][d], mul[b][c];
    
    cout<<"enter size of 1st matrix: "<<endl;
    cin>>a;
    cin>>b;
    cout<<"enter size of 2nd matrix: "<<endl;
    cin>>c;
    cin>>d;
    
    if(b==c)
    {
        cout<<"Enter elements for 1st matrix: ";
        for (int i=0;i<a;i++)
        {
             for (int j=0;j<b;j++)
            {
                cin>>arr[i][j];
            }  
        }
        cout<<"Enter elements for 2nd matrix: ";
        for (int i=0;i<c;i++)
        {
            for (int j=0;j<d;j++)
            {
                cin>>arr1[i][j];
            }  
        }

       for(i=0;i<b;i++)    
        {    
            for(j=0;j<c;j++)    
            {    
                mul[i][j] =arr[i][j]*arr1[i][j];    
            }    
        }    

        cout<<"the multiplication is :"<<endl;
        for (int i=0;i<b;i++)
        {
            cout<<endl;
            for (int j=0;j<c;j++)
            {
                cout<<"\t"<<mul[i][j];
            }  
        }
    }
    else
    {
        cout<<"the matrices cannot be multiplied"<<endl;
    }
}