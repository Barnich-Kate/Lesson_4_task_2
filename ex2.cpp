#include <iostream>
#include <math.h>

using namespace std;

void PowerA234(int a, int b, int c, int d) {
    b = pow(a,2);
    c = pow(a,3);
    d = pow(a,4);
    cout << b << ", " << c << ", " << d << endl;
}

int main()
{
    PowerA234(2, 2, 2, 2);
    PowerA234(3, 3, 2, 1);
    PowerA234(4, 1, 2, 3);

    return 0;
}
