#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans;
        cin>>n;
        int a[n];

        for(int i=0; i < n;i++)
        {
            cin>>a[i];
        }
        for(int i=0; i < n;i++)
        {
            ans ^= a[i]; 
        }
        cout<<ans;
    }
    return 0;
}
