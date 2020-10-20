#include <iostream>
#include<conio.h>
#include<Windows.h>
#include "SDeq.h"

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Введіть розмір дека->";
    cin >> n;
    SDeq fifo(n);
    char punkt;

    dataa S;

label1:
    system("cls");
    cout << "0-Конструктор копіювання" << endl;
    cout << "1-Заштовхнути зліва" << endl << "2-Заштовхнути зправа" << endl;
    cout << "3-Витягнути зліва" << endl << "4-Витягнути зліва" << endl;
    cout << "5-Розмір дека" << endl << "6-Вивід" << endl << "7-Очищення" << endl << "8-Вихід" << endl << endl << "ЗРОБІТЬ ВИБІР->";
    punkt = _getch();
    switch (punkt)
    {
    /*case '0':
    {system("cls");
    cout << "\tKOHCTPYKTOP КОПІЮВАННЯ\n";
    SDaq fifo1(fifo);
    cout << "Оригінал" << endl;
    fifo.List();
    cout << "копія" << endl;
    fifo1.List();
    system("pause ");
    goto label1; }*/
    case '1':
    {
        system("cls");
        cout << "ПУНКТ 1" << endl;
        cout << "Введіть значення елемента зліва->";
        S = _getch();
        fifo.Push_Left(S);
        system("pause");
        goto label1;
    }
    case '2':
    {
        system("cls");
        cout << "ПУНКТ 2" << endl;
        cout << "Введіть значення елемента справа->";
        S = _getch();
        fifo.Push_Right(S);
        system("pause");
        goto label1;
    }
    case '3':
    {
        system("cls");
        cout << "ПУНКТ 3" << endl;
        if (!fifo.Empty())
        {
            S = fifo.Pop_Left();
            cout << "З черги витягнуто зліва " << S << endl;
        }
        system("pause");
        goto label1;
    }
    case '4':
    {
        system("cls");
        cout << "ПУНКТ 4" << endl;
        if (!fifo.Empty())
        {
            S = fifo.Pop_Right();
            cout << "З черги витягнуто зліва " << S << endl;
        }
        system("pause");
        goto label1;
    }
    case '5':
    {
        system("cls");
        cout << "ПУНКТ 5" << endl;
        cout << "Розмір дека" << fifo.Size() << endl;
        system("pause");
        goto label1;
    }
    case '6':
    {
        system("cls");
        cout << "ПУНКТ 6" << endl;
        fifo.List();
        system("pause");
        goto label1;
    }
    case '7':
    {
        system("cls");
        cout << "ПУНКТ 7" << endl;
        fifo.Clear();
        system("pause");
        goto label1;
    }

    case '8':
    {
        system("cls");
        cout << "До побачення" << endl;
        system("pause");
        return 0;
    }
    default:
    {
        cout << endl << "Невірна кнопка" << endl;
        system("pause");
        goto label1;
    }
    }
    return 0;
}