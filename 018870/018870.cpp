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
#include <cmath>
#include <set>
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
    if (a.y == b.y)
        return a.x < b.x;
    return a.y < b.y;
}

bool vicompare(vector<int> a, vector<int> b)
{
    return a < b;
}

bool vscompare(string a, string b) {
    if (a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

bool vpiscompare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int iArr[1000006];
point sArr[100005];
vector<int> viArr;
vector<pair<int, string>> vpisArr;

int main(void) {
    int n;

    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int iTmp;
        cin >> iTmp;
        viArr.push_back(iTmp);
    }

    set<int> s(viArr.begin(), viArr.end());
    vector<int> v(s.begin(), s.end());

    for (int i : viArr) 
    {
        //find로 찾으면, 시간 초과가 난다고 한다.(참고해)
        auto it = lower_bound(v.begin(), v.end(), i);
        cout << it - v.begin() << " ";
    }
    return 0;
}
