#include <iostream>
using namespace std;

class Point {
public:
    int x;
    int y;
    
    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // Tworzenie obiektu 1
    Point p1;
    p1.x = 5;
    p1.y = 10;
    cout << "Punkt 1: ";
    p1.print();
    
    // Tworzenie obiektu 2
    Point p2;
    p2.x = -3;
    p2.y = 7;
    cout << "Punkt 2: ";
    p2.print();
    
    // Tworzenie obiektu 3
    Point p3;
    p3.x = 0;
    p3.y = 0;
    cout << "Punkt 3: ";
    p3.print();
    
    return 0;
}
