#include <bits/stdc++.h>
using namespace std;
int main(){
    // &로 메모리 주소 가져오기
    string a = "abcda";//할당
    cout << "a의 값(a) :"<< a << "\n";
    cout << "a의 주소값(&a) :" << &a << "\n";

    string *b = &a;
    cout << "포인터 변수 b :" << b << "\n";
    cout << "역참조 연산자 *b : "<< *b << "\n";
}