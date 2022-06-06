#include <stdio.h>
#include <string.h>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <iostream>
#define INF 987654321
#define MOD 1000000007
#define ZERO 1.0e-10
using namespace std;
typedef long long ll;

struct point {
    int x, y;
};

bool operator<(point a, point b) // a < b
{
    if (a.x != b.x)
        return a.x < b.x;
    return a.y < b.y;
}

bool compare(point a, point b)
{
    if (a.x != b.x)
        return a.x < b.x;
    return a.y < b.y;
}

point pointarr[100005];
int arr[1000006];

int main()
{
    int n, tmp;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        arr[tmp]++;
    }
        
   // sort(arr, arr + n);

    for (int i = 0; i < 10001; i++)
        for (int j = 0; j < arr[i]; j++)
            printf("%d\n", i);
    return 0;
}