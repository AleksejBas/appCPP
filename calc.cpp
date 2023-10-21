// Программа простейшего калькулятора

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string a = "";
    string b = "";
    int data = 0;
    string znak = "";
    string Chislo;
    cin >> Chislo;
    for(int i = 0; i < Chislo.length(); i++){
        if(Chislo[i] == '+' || Chislo[i] == '-'){
            data = i;
            znak = Chislo[i];
            break;
        }
    }
    for(int i = 0; i < data; i++){
        a += Chislo[i];
    }
    for(int i = data+1; i < Chislo.length(); i++){
        b += Chislo[i];
    }
    
    int Chislo_1 = atoi(a.c_str());
    int Chislo_2 = atoi(b.c_str());
    if(znak == "+"){
        cout << "Равно: " << Chislo_1 + Chislo_2 << endl;
    }
    if(znak == "-"){
        cout << "Равно: " << Chislo_1 - Chislo_2 << endl;
    }

    return 0;
}