#include <iostream>
#include "stdc++.h"

using namespace std;
ifstream input("data.in");
ofstream output("data.out");

int A[10];

int main()
{
    int n;
    input >> n;
    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        input >> x;
        ++A[x];
        maximum = max(x, maximum);
    }
    for (int j = 0; j <= maximum; j++)
    {
        if (A[j] > 0)
        {
            for (int z = 0; z < A[j]; z++)
            {
                cout << j << " ";
            }
        }
    }
    return 0;
}