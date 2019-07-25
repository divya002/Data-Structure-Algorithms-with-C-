#include <iostream>
#include "../stdc++.h"

using namespace std;
ifstream input("data.in");
ifstream output("data.out");

int firstOccurLeft(int arr[], int n, int x)
{
    int result = -1;
    int left = 0;
    int right = n-1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
        {
            result = mid;
            right = mid - 1;
        }
        else if (arr[mid] > x)
        {
            right = mid - 1;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
    }
    return result+1;
}
int firstOccurRight(int arr[], int n, int x){
    int result = -1;
    int left = 0;
    int right = n-1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
        {
            result = mid;
            left = mid + 1;
        }
        else if (arr[mid] > x)
        {
            right = mid - 1;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
    }
    return (n-result);
}

int main()
{
    cout << "Hello" << endl;
    int arr[9]={10,14,17,20,20,20,25,37,45};
    int result1=firstOccurLeft(arr,9,20);
    int result2=firstOccurRight(arr,9,20);

    cout<<"Result from left "<<result1<<endl;
    cout<<"Result from Right "<<result2<<endl;
 
    return 0;
}
