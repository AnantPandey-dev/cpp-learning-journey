#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    
    if (a == 0) {
        if (b != 0) {
            cout << "Linear equation. One root: " << -c / b << "\n";
        } else {
            cout << "Invalid equation (a and b cannot both be zero).\n";
        }
        return 0;
    }

    double dis = b * b - 4 * a * c;


    if (dis == 0)
    {
        double r = -b / (2 * a);
        cout << "root1 = root2 = " << r << "\n";
    }
    else if (dis > 0)
    {
        double r1 = (-b + sqrt(dis)) / (2 * a);
        double r2 = (-b - sqrt(dis)) / (2 * a);
        cout << "root1 = " << r1 << " and root2 = " << r2 << "\n";
    }
    else
    {
        
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-dis) / (2 * a);
        cout << "Roots are imaginary:\n";
        cout << "root1 = " << realPart << " + " << imaginaryPart << "i\n";
        cout << "root2 = " << realPart << " - " << imaginaryPart << "i\n";
    }

    return 0;
}
