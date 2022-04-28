#include <bits/stdc++.h>
using namespace std;
int main(){
    // &로 메모리 주소 가져오기
    string a = "abcda";//할당
    cout << "a의 값(a) :"<< a << "\n";
    cout << "a의 주소값(&a) :" << &a << "\n";
    int var_num = 10;// 변수를 하나 선언, 할당 한다
    int *pointer_var;// 포인터 변수를 하나 선언한다
    pointer_var = &var_num;// 포인터 변수에 위 변수의 메모리 주소를 할당한다
    cout << *pointer_var;// 포인터 변수를 역참조연산자를 통해서 값을 취득한다
}