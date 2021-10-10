#include <iostream>
using namespace std;
void bubble(int arr[],int a){
    int temp=0;
    for(int i=0;i<a-1;i++){
        for(int j=0;j<a-1;j++){
            if(arr[j]>arr[j+1]){
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp; 
            }
        }
    }
    for(int k=0;k<a;k++){
        cout<<arr[k]<<endl;
    }
}

int main(){
    int arr[8]={4,3,5,2,5,19,10,1};
    bubble(arr,8);
    return 0;
}