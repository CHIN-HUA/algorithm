#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input, x;
    stack<int> user;
    cin >> input;
    while(input--)
    {
        int num;
        cin >> num;
        switch(num)
        {
            //delete
            case(1):
                user.pop();
                break;
            //deq
            case(2):
                cout<<user.top()<<endl;
                break;
            //input
            case(3):
                cin >> x;
                user.push(x);
                break;
        }
    }
    return 0;
}
