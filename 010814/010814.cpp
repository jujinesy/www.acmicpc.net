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

//bool operator<(point a, point b)
//{
//    if (a.x != b.x)
//        return a.x < b.x;
//    return a.y < b.y;
//}

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
vector<int> vArr;
vector<pair<int, string>> vpisArr;

int main(void) {
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        pair<int, string> tmp;
        cin >> tmp.first >> tmp.second;
        vpisArr.push_back(tmp);
    }
    stable_sort(vpisArr.begin(), vpisArr.end(), vpiscompare);

    for (int i = 0; i < vpisArr.size(); i++)
        cout << vpisArr[i].first << ' ' << vpisArr[i].second << '\n';
    return 0;
}