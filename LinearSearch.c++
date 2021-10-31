#include<iostream>

using namespace std;

int main()
{
    int ctr1=1,ctr2=1;
    int a[]{1,4,6,2,3,5,7};
    int n=7;

    int i,j;
    for(i=0;i<7;i++)
    {
        if(a[i]==n)
        {
            break;
        }
        ctr1++;
    }
    for(j=6;j>=0;j--)
    {
        if(a[j]==n)
        {
            break;
        }
        ctr2++;
    }
    cout<<ctr1<<" "<<ctr2;

    return 0;
}