#include <iostream>
#include "pair.h"
#include "rational.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    // Пример использования класса Pair
    Pair pair1(1, 2);
    Pair pair2(3, 4);

    // Использование операторов ввода и вывода для класса Pair
    cout << "Введите значения для pair1:" << endl;
    cin >> pair1;
    cout << "pair1: " << pair1 << endl;
    cout << "Введите значения для pair2:" << endl;
    cin >> pair2;
    cout << "pair2: " << pair2 << endl;

    // Использование операторов сложения, вычитания и умножения для класса Pair
    Pair sum = pair1 + pair2;
    Pair difference = pair1 - pair2;
    Pair product = pair1 * pair2;

    cout << "Сумма: " << sum << endl;
    cout << "Разность: " << difference << endl;
    cout << "Произведение: " << product << endl;

    // Пример использования класса Rational
    Rational rational1(1, 2);
    Rational rational2(3, 4);

    // Использование операторов ввода и вывода для класса Rational
    cout << "Введите значения для rational1:" << endl;
    cin >> rational1;
    cout << "rational1: " << rational1 << endl;
    cout << "Введите значения для rational2:" << endl;
    cin >> rational2;
    cout << "rational2: " << rational2 << endl;

    // Использование операторов сложения, вычитания и умножения для класса Rational
    Rational sumRational = rational1 + rational2;
    Rational differenceRational = rational1 - rational2;
    Rational productRational = rational1 * rational2;

    cout << "Сумма: " << sumRational << endl;
    cout << "Разность: " << differenceRational << endl;
    cout << "Произведение: " << productRational << endl;

    return 0;
}
