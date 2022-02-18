#include <bits/stdc++.h>

namespace Sequence{
    void testArray(){
        std::array<int, 7> arr{1, 2, 3};
        auto out = [&arr](){
            std::cout << "[";
            /* ? for(int i = 0; i < (int)(arr.size()); ++i){
                std::cout << arr[i] << ", ";
            }*/
            for(auto i : arr){
                std::cout<< i << ", ";
            }
            std::cout << "]\n";
        };
        out();
        std::sort(arr.begin(), arr.end());
        out();
        std::sort(arr.rbegin(), arr.rend());
        out();

        arr.front() = -1, arr.back() = 114514;
        out();

        //引用refernce
        arr.at(3) = 8, out();

        //異常補捉
        try{
            arr.at(7) = 8, out();
        }catch(...){
            out();
        }

    }

    void testVector(){
        std::vector<int> a(7, -1);
        /*for(int i = 0; i < 8; ++i){
            a.push_back(i);
            std::cout << a.size() << ' ' << a.capacity() << '\n';
        }*/

        auto out = [&a](){
            std::cout << "[";
            for(auto i : a){
                std::cout<< i << ", ";
            }
            std::cout << "]\n";
        };
        out();
        a.clear(), out();
        a.shrink_to_fit();//調整到一樣大小
        std::cout << a.capacity() << '\n';

        std::vector<int>(20).swap(a);
        std::iota(a.begin(), a.end(), 1), out();

        a.insert(a.begin(), {1, 2, 3, 4, }), out();
        a.erase(std::find(a.begin(), a.end(), 3), a.end()), out();
    }

    void testString(){
        std::string s(20, '*');
        //後面追加
        s.append("+++++");
        s.append(1, 'F');
        std::cout << s << '\n';

        std::cout << s.substr(1, 4) << '\n';
    }


}

int main()
{
    //Sequence::testArray();
    //Sequence::testVector();
    Sequence::testString();
    return 0;
}
