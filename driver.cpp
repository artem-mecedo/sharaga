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
    cout << "������ ����� ����->";
    cin >> n;
    SDeq fifo(n);
    char punkt;

    dataa S;

label1:
    system("cls");
    cout << "0-����������� ���������" << endl;
    cout << "1-����������� ����" << endl << "2-����������� ������" << endl;
    cout << "3-��������� ����" << endl << "4-��������� ����" << endl;
    cout << "5-����� ����" << endl << "6-����" << endl << "7-��������" << endl << "8-�����" << endl << endl << "������� �����->";
    punkt = _getch();
    switch (punkt)
    {
    /*case '0':
    {system("cls");
    cout << "\tKOHCTPYKTOP ��ϲ������\n";
    SDaq fifo1(fifo);
    cout << "�������" << endl;
    fifo.List();
    cout << "����" << endl;
    fifo1.List();
    system("pause ");
    goto label1; }*/
    case '1':
    {
        system("cls");
        cout << "����� 1" << endl;
        cout << "������ �������� �������� ����->";
        S = _getch();
        fifo.Push_Left(S);
        system("pause");
        goto label1;
    }
    case '2':
    {
        system("cls");
        cout << "����� 2" << endl;
        cout << "������ �������� �������� ������->";
        S = _getch();
        fifo.Push_Right(S);
        system("pause");
        goto label1;
    }
    case '3':
    {
        system("cls");
        cout << "����� 3" << endl;
        if (!fifo.Empty())
        {
            S = fifo.Pop_Left();
            cout << "� ����� ��������� ���� " << S << endl;
        }
        system("pause");
        goto label1;
    }
    case '4':
    {
        system("cls");
        cout << "����� 4" << endl;
        if (!fifo.Empty())
        {
            S = fifo.Pop_Right();
            cout << "� ����� ��������� ���� " << S << endl;
        }
        system("pause");
        goto label1;
    }
    case '5':
    {
        system("cls");
        cout << "����� 5" << endl;
        cout << "����� ����" << fifo.Size() << endl;
        system("pause");
        goto label1;
    }
    case '6':
    {
        system("cls");
        cout << "����� 6" << endl;
        fifo.List();
        system("pause");
        goto label1;
    }
    case '7':
    {
        system("cls");
        cout << "����� 7" << endl;
        fifo.Clear();
        system("pause");
        goto label1;
    }

    case '8':
    {
        system("cls");
        cout << "�� ���������" << endl;
        system("pause");
        return 0;
    }
    default:
    {
        cout << endl << "������ ������" << endl;
        system("pause");
        goto label1;
    }
    }
    return 0;
}