// Лабораторна 10 завдання 1 варіант 8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x;
    int y;
    cout << "1) \nКількість прийомів їжі: ";
    cin >> x;
    cout << "Тривалість прийому їжі: ";
    cin >> y;
    int b = 365 * 75 * x * y;
    cout << "Часу за все життя людина витрачає на приймання їжі: " << b << " хвилин\n";

    int j;
    cout << "2)\nВік людини: ";
    cin >> j;
    double g;
    g = 2.0 / 24 * j;
    cout << "Часу за все життя який людина витрачає на паління: " << g << " років";





}

