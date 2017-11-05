////////////////
//Task 1
//Check if point
//is in a shape
////////////////

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;
    double rectLeftX = 1, rectRightX = 2, rectDownY = 0, rectUpY = 4;
    double circleCenterX = 2, circleCenterY = 2, circleRadius = 2;
    cout << "Enter values for x and y: ";
    cin >> x >> y;
    
    // check for rectangle
    bool isInRect = x >= rectLeftX && x <= rectRightX && y >= rectDownY && y <= rectUpY;
    // check for halfcircle
    bool isInHalfCircle = x >= rectRightX &&(sqrt(pow(x-circleCenterX,2) + pow(y-circleCenterY,2))) <= circleRadius;
    
    if (isInRect || isInHalfCircle) {
        cout << "Point (" << x << ", " << y << ") is inside the shape";
    } else {
        cout << "Point (" << x << ", " << y << ") is outside the shape";
    }
    return 0;
}
