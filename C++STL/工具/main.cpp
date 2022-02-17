#include <bits/stdc++.h>

std::ostream& operator<<(std::ostream& os, std::pair<int, int>& p){
    return os << "(" << p.first << ", " << p.second << ")";
}

namespace Utility{
    void testPair(){
        std::pair<int, int> p1{1, 2};
        std::cout << p1 << '\n';
        p1 = std::make_pair(1,1);

        std::pair<int, int> p2{1, 2};
        std::cout << std::boolalpha << (p1 < p2) << '\n';
    }

    void testTuple(){
        std::tuple<int, int, int64_t> t3{1, 2, 1LL << 40};
        // ? std::cout << std::get<2>(t3) << '\n';
        auto [x, y, z] = t3;
        std::cout<< z << '\n';
    }
    void testInitializerList(){
        std::initializer_list<int> l{1, 2, 3, 4};
        std::cout << std::max(l) << '\n';

        int a, b, c;
        std::tie(a, b, c) = std::make_tuple(-1, 2, 114514);
        std::cout << std::max({a, b, c});
    }
};

int main()
{
    //Utility::testPair();
    //Utility::testTuple();
    Utility::testInitializerList();
    return 0;
}
