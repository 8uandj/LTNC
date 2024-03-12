#include <iostream>
using namespace std;
struct Point{
    double x;
    double y;
};

int main()
{
    Point p;
    cin >> p.x >> p.y;
    cout << &p.x << endl << &p.y << endl << &p;
    return 0;
}
