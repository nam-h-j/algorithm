#include <bits/stdc++.h>
using namespace std;
deque<string> dq;
int dqLen;
int main(){
    cout << "push_back deque to 'DEQUE' pop_front" << "\n";
    dq.push_back("D");
    dq.push_back("E");
    dq.push_back("Q");
    dq.push_back("U");
    dq.push_back("E");
    dqLen = dq.size();
    for (int i = 1; i <= dqLen; i++){
        cout << dq.front() <<"";
        dq.pop_front();
    }
    cout<<"\n";  
    cout<<"\n";

    cout << "push_front deque to 'DEQUE' pop_front" << "\n";
    dq.push_front("D");
    dq.push_front("E");
    dq.push_front("Q");
    dq.push_front("U");
    dq.push_front("E");
    dqLen = dq.size();
    for (int i = 1; i <= dqLen; i++){
        cout << dq.front() <<"";
        dq.pop_front();
    }
    cout<<"\n";  
    cout<<"\n";  

    cout << "push_back deque to 'DEQUE' pop_back" << "\n";
    dq.push_back("D");
    dq.push_back("E");
    dq.push_back("Q");
    dq.push_back("U");
    dq.push_back("E");
    dqLen = dq.size();
    for (int i = 1; i <= dqLen; i++){
        cout << dq.front() <<"";
        dq.pop_back();
    }
    cout<<"\n";  
    cout<<"\n";

    cout << "push_front deque to 'DEQUE' pop_back" << "\n";
    dq.push_front("D");
    dq.push_front("E");
    dq.push_front("Q");
    dq.push_front("U");
    dq.push_front("E");
    dqLen = dq.size();
    for (int i = 1; i <= dqLen; i++){
        cout << dq.front() <<"";
        dq.pop_back();
    }
    cout<<"\n";  
}