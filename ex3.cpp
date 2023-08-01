#include <iostream>
#include <math.h>

using namespace std;

double Mean(double x, double y) {
    double AMean, GMean;
    AMean = (x+y)/2;
    GMean = sqrt(x*y);
    cout << AMean << ", " << GMean << endl;
    return AMean, GMean;
}

int main()
{
    double a, b, c, d;
    a = 2;
    b = 3; 
    c = 4; 
    d = 5;
    Mean(a, b);
    Mean(a, c);
    Mean(a, d);
    

    return 0;
}
