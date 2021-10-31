#include <iostream>

using namespace std;

int partition(int*a ,int b,int e)
{
    int ctr=0,x=b+1;
    while(x<=e)
    {
        if(a[x]<a[b])
        ctr++;

        x++;
    }

    int temp = a[b];
    a[b]= a[b+ctr];
    a[b+ctr] = temp;

    int i=b,j=e;

    while(i<=b+ctr or j>=b+ctr)
    {
        if(a[i]<a[b+ctr])
        {
            i++;
        }else if(a[j]>a[b+ctr])
        {
            j--;
        }
        else
        {
            int t = a[i];
            a[i]=a[j];
            a[j]= t;

            i++;j--;
        }
    }
    
    return b+ctr;
}

void qs(int * a,int b,int e)
{
    if(b>=e)
    {
        return;
    }
    int i = partition(a,b,e);
    
    qs(a,b,i-1);
    qs(a,i+1,e);
}

int main()
{
    int a[]{1,8,3,0,2,6,4,7};
    
    qs(a,0,7);
    for(int i=0;i<8;i++)
    {
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}