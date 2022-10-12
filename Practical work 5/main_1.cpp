/*
 * Описать функцию Swap(X, Y), меняющую содержимое переменных X и Y (X и Y - вещественные параметры, являющиеся одновременно входными и выходными).
 * С ее помощью для данных переменных A, B, C, D последовательно поменять содержимое следующих пар: A и B, C и D, B и C и вывести новые значения A, B, C, D.
 */

#include <iostream>

using namespace std;

void Swap(double &X, double &Y)
{
    double temp = X;
    X = Y;
    Y = temp;
}

int main()
{
    double A, B, C, D;
    cout << "Enter A:";
    cin >> A;
    cout << "Enter B:";
    cin >> B;
    cout << "Enter C:";
    cin >> C;
    cout << "Enter D:";
    cin >> D;
    Swap(A, B);
    Swap(C, D);
    Swap(B, C);
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;
    cout << "D = " << D << endl;
    return 0;
}