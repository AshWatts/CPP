#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int w[n];
        for(int i=0;i<n;i++)
        {
            cin>>w[i];
        }

        sort(w,w+n);

        for(int i=0;i<n;i++)
        {
            cout<<w[i]<<endl;
        }
    }
}
