#include <iostream>
#include <math.h>

using namespace std;

int PowerA3(int a, int b) {
    b = pow(a,3);
    cout << b << endl;
}

int main()
{
    PowerA3(2,3);
    PowerA3(3,4);
    PowerA3(1,2);
    PowerA3(3,3);
    PowerA3(2,3);
    //cout<<b;

    return 0;
}
