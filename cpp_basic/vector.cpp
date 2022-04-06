#include <bits/stdc++.h> 
using namespace std;
vector<int> v;
int main(){
    cout << "push_back : " << "\n";
    for(int i = 1; i <= 10; i++)v.push_back(i);
    for(int a : v) cout << a << " ";
    cout << "\n";
    cout << "\n";

    cout << "pop_back : " << "\n";
    v.pop_back();
    for(int a : v) cout << a << " ";
    cout << "\n";
    cout << "\n";

    cout << "erase(v.begin(), v.begin()+1) : " << "\n";
    v.erase(v.begin(), v.begin()+1);
    for(int a : v) cout << a << " ";
    cout << "\n";
    cout << "\n";

    cout << "find(v.begin(), v.end(), 100) : " << "\n";    
    auto a = find(v.begin(), v.end(), 100);
    if(a == v.end()) cout << "not found" << "\n";
    cout << "\n";
    cout << "\n";

    cout << "fill(v.begin(), v.end(), 45) : " << "\n";    
    fill(v.begin(), v.end(), 45);
    for(int a : v) cout << a << " ";
    cout << "\n";
    cout << "\n";

    cout << "v.clear() : " << "\n";    
    v.clear();
    for(int a : v) cout << a << " ";
    cout << "\n";
    cout << "\n";

    return 0;
}