#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,3,4,21,5,0};
    int min =arr[0];
    
    for(int i=0;i<6;i++){
        if(min > arr[i]){
            min=arr[i];
        }
    }
    cout<<min;

    return 0;
}