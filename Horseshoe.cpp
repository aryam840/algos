#include<bits/stdc++.h>
using namespace std;

map<int,int> m;
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }

    for(int i=0;i<4;i++){
        if(m[arr[i]]==0){
            m[arr[i]]=0;
        }
      m[arr[i]] += 1;
    }
    // int sum=0;
    // for(auto i=m.begin();i!=m.end();i++){
    //      sum+=1;
    // }
    cout<<4-m.size();
    return 0;
}