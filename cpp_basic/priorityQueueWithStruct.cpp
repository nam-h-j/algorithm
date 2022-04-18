#include <bits/stdc++.h>
using namespace std;
struct orderStruct{
    int y, x;
    orderStruct(int y, int x) : y(y), x(x){}
    orderStruct(){y = -1; x = -1; }
    bool operator < (const orderStruct & a) const{
        return x > a.x;
    }
};
struct orderStructDesc{
    int y, x;
    orderStructDesc(int y, int x) : y(y), x(x){}
    orderStructDesc(){y = -1; x = -1; }
    bool operator < (const orderStructDesc & a) const{
        return x < a.x;
    }
};
priority_queue<orderStruct> pq;
priority_queue<orderStructDesc> pq_desc;
int main(){
    //DESC
    pq.push({1, 1});
    pq.push({2, 2});
    pq.push({3, 3});
    pq.push({4, 4});
    pq.push({5, 5});
    pq.push({6, 6});
    cout << "* Struct정렬 ASC 반대로 정렬 됨" << "\n";
    int pq_len = pq.size();
    for(int i = 0; i < pq_len; i++){
        cout << pq.top().x << " ";
        pq.pop();
    } 
    cout<< "\n\n";
    //ASC
    pq_desc.push({1, 1});
    pq_desc.push({2, 2});
    pq_desc.push({3, 3});
    pq_desc.push({4, 4});
    pq_desc.push({5, 5});
    pq_desc.push({6, 6}); 
    cout << "* Struct정렬 DESC 반대로 정렬 됨" << "\n";
    int pq_asc_len = pq_desc.size();
    for(int i = 0; i < pq_asc_len; i++){
        cout << pq_desc.top().x << " ";
        pq_desc.pop();
    } 
    cout<< "\n";
    return 0;
}