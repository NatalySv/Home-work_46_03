#include <QCoreApplication>
#include <iostream>
#include <windows.h>

double perc(double x)
{
    double result;
    result = x / 100;

    return result;
}

double term(double y)
{
    double result;
    result = y / 12;

    return result;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    while (true)
    {
        double prof, sum, tax, p, t;
        qDebug() << "Введіть суму вкладу в грн: ";
        std::cin >> sum;
        qDebug() << "Введіть процентну ставку: ";
        std::cin >> p;
        qDebug() << "Введіть термін у місяцях: ";
        std::cin >> t;
        qDebug() << "Введіть коефіцієнт оподаткування в межах 0,75-0,85: ";
        std::cin >> tax;

        prof = sum * perc(p) * term(t) * tax;
        qDebug() << "Прибуток від депозита становить: " << prof << " грн " << "\n\n";


    }
    return a.exec();
}
