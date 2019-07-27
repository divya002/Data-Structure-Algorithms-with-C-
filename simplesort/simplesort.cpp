#include "../stdc++.h"

using namespace std;
int* simpleSort (int arr[],int n){
    for(int j=0;j<n;j++) {
        for(int z=j+1;z<n;z++){
         if(arr[j]<arr[z]){
           int temp=arr[j];
           arr[j]=arr[z];
           arr[z]=temp;
}
        }
    }
    return arr;
}

int main(){
    int n;
    scanf("%d",&n);
    int *arr;
    arr=new int(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int* ptr=simpleSort(arr,n); 
    for(int d=0;d<n;d++)
    printf("%d ", ptr[d]); 
    return 0;
}
