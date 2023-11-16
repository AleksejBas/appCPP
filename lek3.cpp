#include <iostream>
#include <Windows.h>
#include <time.h>
#include <vector> // ���������� ����������������� �������

using namespace std;

vector <string> logins(0);
vector <string> passwords(0);



bool CheckCapitalLetterEn(string text){
    // ��������� ��������� ����� ����������
    if(text.length() > 0 && (text[0] >= 'A' && text[0] <= 'Z')){
        return true;
    }
    return false;
}

bool LenText(string text, int len){ // ���������� ������ ������
    if(text.length() >= len){
        return true;
    }
    return false;
}

bool CheckSymbEng(string text){ // ��������� ���� (�������) �� ���������� ����� ��� ���

        for(int i = 0; i < text.length(); i++){
            if(!(text[i] >= 'A' && text[i] <= 'z') && !(text[i] > 'a' && text[i] <= 'z')){ // ���� ������� �� eng
                return false;
            }
        }
        return true;
    }

bool CheckCapitalLetterEng(string text){
    for(int i = 0; i < text.length(); i++){
        if(text[i] >= 'A' && text[i] <= 'Z'){
            return true;
        }
    }
    return false;
}

bool CheckNumbers(string text){
    for(int i = 0; i < text.length(); i++){
        if(text[i] >= '0' && text[i] <= '9'){
            return true;
        }
    }
    return false;
}

bool CheckSpecialSymb(string text){
    string SpecialSymb = "!$#@*";
    for(int i =0; i <text.length(); i++){
        for(int j =0; j < SpecialSymb.length(); j++){
            if(text[i] == SpecialSymb[j]){
                return true;
            }
        }
    }
    return false;
}



bool Registration (string login, string pass) { // �������� �� ����-�������
    bool checkLogin = false;
    if((CheckCapitalLetterEn(login) && LenText(login, 4) && CheckSymbEng(login)))
    {
        return true;
    }
    bool checkPass = false;
    if(LenText(pass, 6) && CheckSpecialSymb(pass) && CheckNumbers(pass)){
        return true;
    }
    if(checkPass && checkLogin){
        logins.push_back(login);
        passwords.push_back(pass);
        return true;
    }
    return false;
}

int main (){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
// vector <int> mas (0); // �������� �������
// mas.push_back(5);
// mas.push_back(7); // ���������� �������� � ����� �������
// mas.push_back(9); 
// for(int i = 0; i < mas.size();i++){ // mas.size - ����������� ����������� �����
//     cout << mas[i] << " ";
// }
// int numberIndex = 2;
// mas.erase(mas.cbegin()+numberIndex);
// // mas.cbegin - ������� ����� ������� �������� � �������
// // mas.erase()+numberIndex - ����������� ����� �� ������ ������� ������� ��� ��������
// // mas.erase - ������� ������� ������� �� ��� ������
// cout << endl;
// for(int i = 0; i < mas.size(); i++){
//     cout << mas[i] << " ";
// }

    string login = "Vova";
    string pass = "12345";
    bool a = Registration(login, pass);
    if(a){
        cout << "�� �������� " << endl;
    }

}