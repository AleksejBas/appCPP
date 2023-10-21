// Игра угадай число

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
        cout << "Попыток - " << trials << endl;
        cout << "Введите число от 0 до 100: ";
        trials--;
        cin >> your_number;
        if(number == your_number){
            cout << "Угадали!\n" << "Загаданное число: " << number << endl;
        }else{
            if(number > your_number){
                cout << "Загаданное число больше!\n";
            }else if(number < your_number){
                cout << "Загаданное число меньше!\n";
            }
            goto START;
            }
        }
        else{
            cout << "Попытки закончились, ты проиграл!" << endl;
    }
    return 0;
}