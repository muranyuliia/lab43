#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, xp, xk, dx, B, y, a, b, c;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << fixed;
    cout << "-------------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "-------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {

        if (x + 10 < 0 && b != 0)
            B = a * (x * x) - c * x + b;
        else if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
            B = (-x) / (a - c);
        else
            B = (x - a) / (x - c);

        y = B;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "-------------------------------" << endl;
    return 0;
}
