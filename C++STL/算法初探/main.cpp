#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
    return abs(a) < abs(b);
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; ++i){
        a[i] = rand() % 100 -50;
    }

    sort(a, a+n, cmp);

    reverse(a, a+n);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " \n"[(i+1) % n == 0];
    }
    return 0;
}
