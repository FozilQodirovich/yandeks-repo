#include <iostream>
using namespace std;

int main()
{
int a, b, c, d, e;
cin >> a >> b >> c >> d >> e;
if (a > c) swap(a, c);
if (b > c) swap(b, c);
if (a > b) swap(a, b);
if (d > e) swap(d, e);
cout << (a <= d && b <= e ? "Yes" : "No");
}

