#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    
    for(int i=0;i<=n-2;++i){
        for(int j=i+1;j<=n-1;++j){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[] = {2,5,3,1,4};
    int n = sizeof(a)/sizeof(a[0]);
    selectionSort(a,n);
    printArray(a,n);
    return 0;
}