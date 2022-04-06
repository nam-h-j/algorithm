#include <bits/stdc++.h>
using namespace std;
int arr[10];
int main(){
    cout << "for(int i = i; i<=10; i++) = arr : 값을 할당" << "\n";
    for(int i = 1; i<=10; i++)arr[i-1] = i;
    for(int arrItem : arr) cout << arrItem << " ";
    cout << "\n";
    cout << "\n";

    cout << "find(arr, arr + 10, 100)" << "\n";
    auto a = find(arr, arr + 10, 100);
    if(a == arr+10) cout << "not found" << "\n";
    cout << "\n";
    cout << "\n";

    cout << "fill(arr, arr+10, 4514)" << "\n";
    fill(arr, arr+10, 4514);
    for(int arrItem : arr) cout << arrItem << " ";
    cout << "\n";
    cout << "\n";

    cout << "memset(arr, 0, sizeof(arr));" << "\n";
    memset(arr, 0, sizeof(arr));
    for(int arrItem : arr) cout << arrItem << " ";
    cout << "\n";
    cout << "\n";

    cout << "memcpy(temp, arr, sizeof(arr));" << "\n";
    int temp[10];
    memcpy(temp, arr, sizeof(arr));
    for(int tempItem : temp) cout << tempItem << " ";
    cout << "\n";
    cout << "\n";
}