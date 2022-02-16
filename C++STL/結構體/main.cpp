#include <bits/stdc++.h>

using namespace std;

struct node{
    int a, b, c;
    bool operator<(const node &_) const { return this->c > _.c; }
};

/*bool cmp(node a, node b){
    return a.c > b.c;
}*/

int main()
{
    int n;

    cin >> n;
    node a[n];
    for(int i = 0; i < n; ++i){
        a[i] = { rand()%100, rand()%100, rand()%100};
    }
    sort(a, a+n);

    for(int i = 0; i< n; ++i){
        cout << a[i].a << ' ' << a[i].b  << ' '<< a[i].c << '\n';
    }
    return 0;
}
