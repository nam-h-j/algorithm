#include <bits/stdc++.h> 
using namespace std;
struct Point{
    int y, x;
    Point(int y, int x ) : y(y), x(x){}
    Point(){y = -1; x = -1;}
    bool operator < (const Point & a) const{
        if(x == a.x) return y < a.y;
        return x < a.x;
    }
};
    
int main(){
    return 0;
}