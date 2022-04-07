#include <bits/stdc++.h>
using namespace std;
int v[10];
int main(){
    //선언
    map<string, int> _map;
    unordered_map<string, int> umap;
    
    //할당1
    _map.insert({"test1", 1});
    umap.insert({"test1", 11});
    //할당2
    _map.emplace("test2", 2);
    umap.emplace("test2", 22);
    //할당3 및 수정
    _map["test3"] = 3;
    _map["test2"] = 2*2;
    umap["test3"] = 33;
    umap["test2"] = 22*2;
    
    //출력 : first = key, second = val
    cout << "print '_map' : " << "\n";
    for(auto elem : _map){
        cout << elem.first << " :: " << elem.second << '\n';
    }
    cout << "\n";

    //출력
    cout << "print 'umap' : " << "\n";
    for(auto elem : umap){
        cout << elem.first << " :: " << elem.second << '\n';
    }
    cout << "\n";
   
    //find
    //find는 찾지 못하면 end()이터레이터를 반환
    cout << "umap.find('test4') : " << "\n";
    auto search = umap.find("test4");
    if(search != umap.end()){
        cout << "found :" << search -> first << " " << (*search).second << '\n';
    }else{
        cout << "not found.." << '\n';
    }
    cout << "\n";

    //int형의 증감연산
    cout << "umap['test1']++ : " << "\n";
    umap["test1"]++;
    cout << umap["test1"] << "\n";
    cout << "\n";

    //size
    cout << "umap.size()" << "\n";  
    cout <<umap.size() <<"\n";
    cout << "\n";

    //erase
    cout << "umap.erase('test1');" << "\n";  
    umap.erase("test1");
    for(auto elem : umap){
        cout << elem.first << " :: " << elem.second << '\n';
    }
    cout << "\n";
return 0;
}