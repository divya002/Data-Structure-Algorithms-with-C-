#include <iostream>
#include "../stdc++.h"

using namespace std;

ifstream input("data.in");
ofstream output("data.out");
int arr[200], n;

int BinarySearch(int X)
{
    int left = 1, right = n, mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if(arr[mid]==X){
            return mid;
        }
        else if(arr[mid]<X){
            left=mid+1;
        }
        else if(arr[mid]>X){
            right=mid-1;
        }
    }
    return -1;
}

int main()
{
    input>>n;
    for(int i=1;i<=n;i++){
        input>>arr[i];
        cout<<arr[i]<<endl;
    }
    int x=BinarySearch(3190);
    output<<x;
    cout<<"Output Position "<<x<<endl;
    return 0;
}
