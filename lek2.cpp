#include <iostream>
#include <Windows.h>
#include <time.h>
#include <malloc.h>
using namespace std;
/* -------------------------------------------- */
int x = 10; // ���������� ���������� ����������
// ������ ������� ������ ���������� ����������
void fun(){
    cout << x << endl;
}
/* -------------------------------------------- */
/*------------------------------------------------*/
// ������� ��� ������ � ������������� ��������� //
// ������� ��������� �������� ������������� �������
int * CreateMas(int size){
    int *mas = new int[size];
    for(int i = 0; i < size; i++){
        mas[i] = rand() % 100;
    }
    return mas;
}
// ������� ��� ���������� �������� �������� ��������� �������
int CalcSum(int *m){
    int size = _msize(m) / sizeof(int);
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += m[i];
    }
    return sum;
}
// ������� ��� ������ ���������� ���������� � ������������ ������
void OutMas( int *m){
    int size = _msize(m) / sizeof(int);
    for(int i = 0; i  < size; i++) {
        cout << m[i] << " ";
    }
}
//  ������� �������� ������ ���������� �������� ������������� �������
int* DelElementMas(int *m, int numDel){
    int size = _msize(m) / sizeof(int);
    int *temp = new int[size -1];
    for(int i = 0, k = 0; i < size; i++){
        if(i!=numDel-1){
            temp[k++] = m[i];
        }
    }
    delete [] m;
    return temp;
}
/* ------------------------------------------------- */
/* ------------------------------------------------- */
// ������� ������� ��� ����������, ���������� ��� ����� (�������, ���������).
bool SerchPrime(int n){
    bool isPrime = true;
    for(int i = 0; i < n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
        if(isPrime){
            cout << "prostoe" << endl;
        }else{
            cout << "sostavnoe" << endl;
        }
    }
    return isPrime;
}
bool SerchPrime2(int n){
    bool isPrime = true;
    for(int i = 0; i < n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
bool SerchPrimeBast(int n){
    bool isPrime = true;
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
/* ----------------------------------------------- */
// ��� ����� ���� ����������� ��� �������
        // int n;
        // int data = 0;
        // cin >> n;
        // int *mas = new int[n]; // �������� �������
        // ���������� �������
        // int *mas = CreateMas(n);
        // int sum = CalcSum(mas);
        // OutMas(mas);
        // for(int i = 0; i < n; i++){
        //     mas[i] = rand() % 100; 
        // }
        // // ����� �� ����� ��� �������� �������
        // for(int i = 0; i < n; i++)
        //     cout << mas[i] << " ";
        // // ������������ ���������� ����������;
        // for(int i = 0; i < n; i++){
        //     data += mas[i];
        // }
        // cout << endl << data << endl;
/*  ---------------------------------------------- */
// ����� ���� ����������� � ���������� ���� ������
    int n;
    cin >> n;
    int *mas = CreateMas(n);
    OutMas(mas);
    int sum = CalcSum(mas);
    cout << endl << "����� ��������� �������: " << sum << endl;
    int numDel;
    cout << "Enter number del element: ";
    cin >> numDel;
    mas = DelElementMas(mas, numDel);
    OutMas(mas);
    /*  ----------------------------   */
// ������� � ��������� � ������� � ������� ������ ����������
    // for(int i = 2; i < 100; i++){
    //     if(SerchPrimeBast(i)){
    //         cout << i << " ";
    //     }
    // }
// ����� ���������� ����������
    // fun();

    return 0;
}