#include <bits/stdc++.h> 
using namespace std;
struct Point{
    int y, x;
    Point(int y, int x ) : y(y), x(x){}
    Point(){y = -1; x = -1;}
    Point operator + (const Point & a) const{
        Point p1;
        p1.y = y + a.y;
        p1.x = x + a.x;
        return Point(y, x);
    };
};
    
int main(){
    const p1 = Point(10,10);
    cout << p1 << "\n";
    return 0;
}