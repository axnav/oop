#include <iostream>
using namespace std;

class Rectangle {
    int width, height;

public:
    Rectangle(int w = 1, int h = 1):width(w),height(h){}
    friend void display(Rectangle &);
};

void display(Rectangle &r) {
    cout<<"The area is " << r.width * r.height << endl;
}

int main () {
    int l,b;
    cout<<"Enter the length of the rectangle :: ";
    cin>>l;
    cout<<"Enter the breadth of the rectangle :: ";
    cin>>b;
    Rectangle rect(l,b);
    display(rect);
    return 0;
}
