// ���� ������ �����

#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    int number = rand() % 100;
    int your_number;
    int trials = 6;

START:
    if(trials > 0){
        cout << "������� - " << trials << endl;
        cout << "������� ����� �� 0 �� 100: ";
        trials--;
        cin >> your_number;
        if(number == your_number){
            cout << "�������!\n" << "���������� �����: " << number << endl;
        }else{
            if(number > your_number){
                cout << "���������� ����� ������!\n";
            }else if(number < your_number){
                cout << "���������� ����� ������!\n";
            }
            goto START;
            }
        }
        else{
            cout << "������� �����������, �� ��������!" << endl;
    }
    return 0;
}