#include<iostream>
using namespace std;

int subset_sum(int *arr,int size,int* output,int o_size,int k){
        if(size==0){
              int sum = 0;
              for(int i=0;i<o_size;i++){
                  sum += output[i];
              }
              if(sum==k){
                  for(int i=0;i<o_size;i++){
                      cout<<output[i];
                   }
                   cout<<endl;
                   return 1;
              }
                 return 0;
        }
        int a =subset_sum(arr+1,size-1,output,o_size,k);
        output[o_size]=arr[0];
        int b = subset_sum(arr+1,size-1,output,o_size+1,k);
        return a+b;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int k=5;
    int output[5];
   cout <<  subset_sum(arr,5,output,0,k);
   
}