#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a,j;
    cout<<"Enter Number of Days : ";
    cin>>a;
    int arr[a];
    cout<<"Enter Stock Prices : ";
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

    int min=arr[0];
    for(int i=0;i<a;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            j=i;
        }
    }

    int max;
    if(j==a-1)
    {
        max=arr[j];
    }
    else
    {
        max=arr[j+1];
    }

    for(int i=j+1;i<a;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }

    if(max<min)
    {
        cout<<"0";
    }
    else
    {
        cout<<max-min;
    }

    return 0;
}