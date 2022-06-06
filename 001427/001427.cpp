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

bool operator<(point a, point b)
{
    if (a.x != b.x)
        return a.x < b.x;
    return a.y < b.y;
}

bool icompare(int a, int b)
{
    return a < b;
}

bool scompare(point a, point b)
{
    if (a.x != b.x)
        return a.x < b.x;
    return a.y < b.y;
}

bool vcompare(vector<int> a, vector<int> b)
{
    return a < b;
}

int iarr[1000006];
point sarr[100005];
vector<int> varr;

int main(void) {
    string str;
    cin >> str;
    sort(str.begin(), str.end(), greater<char>());
    cout << str;
    return 0;
}