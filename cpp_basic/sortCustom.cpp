#include <bits/stdc++.h> 
using namespace std;
bool compair(int a, int b){
    return a > b;
}
int main(){
    int arr[10] = {0,1,9,2,8,3,7,4,6,5};
    sort(arr, arr+11, compair);
    for(int i=0; i < sizeof(arr) / sizeof(int); i++){
        cout << arr[i] << "\n";
    }
    return 0;
}