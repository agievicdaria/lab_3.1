//lab-3.1.cpp
// Агієвич Дар'я 
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 0.1
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу

    cout << "x = "; cin >> x;

    A = 1 + 9 * x;

    // спосіб 1: розгалуження в скороченій формі
    if (x <= 0) {
        // Обчислення виразу ln|sin(x)| + x^7
        double sinX = sin(x);

        if (sinX < 0) {
            sinX = -sinX; // якщо sin(x) від'ємний, змінити його знак на додатній
        }

        B = log(sinX) + pow(x, 7);
    } 

    if (x > 0 && x <= 3) {
        // Обчислення виразу ctg(|x + 1|) / 2
        double sum = x + 1;

        if(sum < 0) {
            sum = -sum; // якщо значення (x + 1) від'ємне, змінити його на додатнє
        }

        B = (1.0 / tan(sum)) / 2;
    }

    if(x > 3) {
        // Обчислення виразу 3x - x^5
        B = 3 * x - pow(x, 5);
    }

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;


    //  спосіб 2: розгалуження в повній формі
    if(x <= 0) {
        // Обчислення виразу ln|sin(x)| + x^7
        double sinX = sin(x);

        if (sinX < 0) {
            sinX = -sinX; // якщо sin(x) від'ємний, змінити його знак на додатній
        }

        B = log(sinX) + pow(x, 7);
    }

    else {
        if (x > 0 && x <= 3) {
            // Обчислення виразу ctg(|x + 1|) / 2
            double sum = x + 1;

            if(sum < 0) {
                sum = -sum;
            }

            B = (1.0 / tan(sum)) / 2;
        }

        else {
            // Обчислення виразу 3x - x^5
            B = 3 * x - pow(x, 5);
        }
    }

    cout << "2) y = " << y << endl;
    cin.get();

    return 0;
}
