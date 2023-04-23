#include <iostream>
#include "pair.h"
#include "rational.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    // ������ ������������� ������ Pair
    Pair pair1(1, 2);
    Pair pair2(3, 4);

    // ������������� ���������� ����� � ������ ��� ������ Pair
    cout << "������� �������� ��� pair1:" << endl;
    cin >> pair1;
    cout << "pair1: " << pair1 << endl;
    cout << "������� �������� ��� pair2:" << endl;
    cin >> pair2;
    cout << "pair2: " << pair2 << endl;

    // ������������� ���������� ��������, ��������� � ��������� ��� ������ Pair
    Pair sum = pair1 + pair2;
    Pair difference = pair1 - pair2;
    Pair product = pair1 * pair2;

    cout << "�����: " << sum << endl;
    cout << "��������: " << difference << endl;
    cout << "������������: " << product << endl;

    // ������ ������������� ������ Rational
    Rational rational1(1, 2);
    Rational rational2(3, 4);

    // ������������� ���������� ����� � ������ ��� ������ Rational
    cout << "������� �������� ��� rational1:" << endl;
    cin >> rational1;
    cout << "rational1: " << rational1 << endl;
    cout << "������� �������� ��� rational2:" << endl;
    cin >> rational2;
    cout << "rational2: " << rational2 << endl;

    // ������������� ���������� ��������, ��������� � ��������� ��� ������ Rational
    Rational sumRational = rational1 + rational2;
    Rational differenceRational = rational1 - rational2;
    Rational productRational = rational1 * rational2;

    cout << "�����: " << sumRational << endl;
    cout << "��������: " << differenceRational << endl;
    cout << "������������: " << productRational << endl;

    return 0;
}
