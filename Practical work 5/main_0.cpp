#include <iostream>

using namespace std;

double PowerA3(double A)
{
    return A * A * A;
}

int main()
{
    double A, B;
    cout << "Enter A: ";
    cin >> A;
    B = PowerA3(A);
    cout << "B = " << B << endl;
    return 0;
}
