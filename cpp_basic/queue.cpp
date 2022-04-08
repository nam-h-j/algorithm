#include <bits/stdc++.h>
using namespace std;
queue<string> q;
int main(){
    cout << "push queue to 'QUEUE'" << "\n";
    q.push("Q");
    q.push("U");
    q.push("E");
    q.push("U");
    q.push("E");
    int strLen = q.size();
    for (int i = 1; i <= strLen; i++){
        cout << q.front() <<"";
        q.pop();
    }
    cout<<"\n";  
}