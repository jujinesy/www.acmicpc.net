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

int iarr[1000006];
point sarr[100005];
vector<int> varr;

int main(void) {
    int n;
    vector<string> vs;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin >> tmp;
        if (find(vs.begin(), vs.end(), tmp) == vs.end())
            vs.push_back(tmp);
    }
    sort(vs.begin(), vs.end(), vscompare);

    for (int i = 0; i < vs.size(); i++)
        cout << vs[i] << '\n';
    return 0;
}