#include <iostream>
using namespace std;

void selction(int a[],int n){
    int temp1;
    for(int i=0;i<n-1;i++){
        int temp=i;
        for(int j=i+1;j<n;j++){
            if (a[temp]>a[j]){
                temp=j;
            }
        }
       
        temp1=a[i];
        a[i]=a[temp];
        a[temp]=temp1;
        
    }

}
int main(){
    int a[]={2,5,3,4,1};
    int len=5;
    selction(a,len);
    for(int k=0;k<len;k++){
        cout<<a[k]<<endl;
    }
    return 0;
}