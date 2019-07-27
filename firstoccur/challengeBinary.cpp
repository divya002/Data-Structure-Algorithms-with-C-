#include "../stdc++.h"
using namespace std;

int main()
{
    int n, q;
    scanf("%d%d", &n, &q);
    //cin >> n;
    int arr[n];
    //cin >> q;
    //int resultData[q];
    for (int i = 0; i < n; i++)
    {
        // cin >> arr[i];
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < q; j++)
    {
        int x;
        scanf("%d", &x);
        // cin >> input;
        int result = -1;
        int left = 0;
        int right = n - 1;

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
        printf("%d\n", result);
        //resultData[j]=result;
    }
    return 0;
}
