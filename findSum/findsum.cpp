#include <iostream>
//# include <bits/stdc++.h>

using namespace std;
long long arr[1005],P;
int ok, T, N;

int binarySearch(int left, int right, long long X)
{
    while (left <= right)
    {
        long mid = (left + right) / 2;
        if (arr[mid] == X)
        {
            return 1;
        }
        else if (arr[mid] < X)
        {
            left = mid + 1;
        }
        else if (arr[mid] > X)
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        for (int j = 0; j < N; j++)
        {
            // cin >> arr[j];
            scanf("%lld", &arr[j]);
        }
        scanf("%lld", &P);
        sort(arr, arr + N);
        int ok = -1;
        for (int k = 0; k < N; k++)
        {
            for (int m = k + 1; m < N; m++)
            {
                long long aurx = P - arr[k] - arr[m];
                //cout<<"aux"<<aurx;
                //cout<<"m"<<m;
                if (binarySearch(m + 1, N - 1, aurx) == 1)
                {
                    ok = 1;
                };
            }
        }
        if (ok == 1)
        {
            // cout << "YES" << endl;
            printf("YES\n");
        }
        else
        {
            // cout << "NO" << endl;
            printf("NO\n");
        }
    }

    return 0;
}