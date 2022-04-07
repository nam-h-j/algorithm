#include <bits/stdc++.h>
using namespace std;
int main(){
    multiset<pair<string,int>> _ms;
    //할당, 무작위로 넣어도 정렬이 됨
    cout << "할당" << "\n";
    _ms.insert({"test5",5});
    _ms.insert({"test2",2});
    _ms.insert({"test4",4});
    _ms.insert({"test1",1});
    _ms.insert({"test3",3});
    for(pair<string, int> elem : _ms) cout << elem.first << " : " << elem.second << "\n";
    cout << "\n";

    //find, erase
    cout << "find, erase" << "\n";
    auto test1 = _ms.find({"test1", 1});
    _ms.erase(test1);
    for(pair<string, int> elem : _ms) cout << elem.first << " : " << elem.second << "\n";
    cout << "\n";
}