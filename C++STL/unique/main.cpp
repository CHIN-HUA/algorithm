#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = {1,1,1,2,1,1,4,3};
    int n = sizeof a / sizeof *a;

    sort(a, a+n);

    int nums = unique(a, a+n) -a;

    for(int i = 0; i< nums; ++i){
        cout << a[i] << " \n"[(i+1) % n == 0];
    }
    return 0;
}
