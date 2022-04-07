#include <bits/stdc++.h>
using namespace std;
int main(){
    set<pair<string,int>> _set;
    //할당
    cout << "할당" << "\n";
    _set.insert({"test1",1});
    _set.insert({"test2",2});
    _set.insert({"test3",3});
    for(pair<string, int> elem : _set) cout << elem.first << " : " << elem.second << "\n";
    cout << "\n";

    //중복값 넣기
    cout << "중복값 넣기" << "\n";
    _set.insert({"test2",2});
    for(pair<string, int> elem : _set) cout << elem.first << " : " << elem.second << "\n";
    cout << "\n";
}