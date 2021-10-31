#include<iostream>

using namespace std;

int main()
{
    int a[]{1,6,9,2,4,5,0};
    int max=a[0];

    for(int i=0;i<7;i++)
    {
        if(max<a[i])
        {
            max= a[i];
        }
    }
    cout<<max;

    return 0;
}
