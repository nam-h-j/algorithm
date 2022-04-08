#include <bits/stdc++.h>
using namespace std;
stack<string> stk;
int main(){
    cout << "push stack to 'STACK'" << "\n";
    stk.push("S");
    stk.push("T");
    stk.push("A");
    stk.push("C");
    stk.push("K");
    int strLen = stk.size();
    for (int i = 1; i <= strLen; i++){
        cout << stk.top() <<"";
        stk.pop();
    }
    cout<<"\n";  
}