#include<bits/stdc++.h>
using namespace std;

/*  --- Selection Sort ---
         O(n^2)
  Find minimum element in unsorted array & swap it with beginning element
*/
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

/* --- Bubble Sort ---
          O(n^2)
Repeatedly swap two adjacent elements if they are in wrong order
*/

void bubbleSort(int arr[],int n){

    for(int i=0;i<=n-2;++i){
        for(int j=0;j<=n-2;++j){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

/* --- Insertion Sort ---
          O(n^2)
  Insert an element from unsorted array to its correct position in sorted array
*/

void insertionSort(int arr[],int n){
    for(int i=1;i<n;++i){
        int cur = arr[i];
        int j;
        for( j=i-1;j>=0;--j){
            if(cur<arr[j]){
                arr[j+1] = arr[j];
            }
            else break;
        }
        arr[j+1] = cur;
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
    insertionSort(a,n);
    printArray(a,n);
    return 0;
}