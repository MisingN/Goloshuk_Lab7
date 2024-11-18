#include <iostream>
using namespace std;
#include <windows.h>
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size;
    cout << "������ ���������� ����� ������: ";
    cin >> size;

    int* arr = new int[size];

    cout << "������ �������� ������: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    int position, newElement;
    cout << "������ ������� ��� ������� ������ �������� (�� 0 �� " << size << "): ";
    cin >> position;

    if (position < 0 || position > size) {
        cout << "������ �������! �������� ������� ������." << endl;
        delete[] arr;
        return 1;
    }

    cout << "������ ����� �������: ";
    cin >> newElement;


    int* newArr = new int[size + 1];

    for (int i = 0; i < position; i++) {
        newArr[i] = arr[i];
    }

    newArr[position] = newElement;

    for (int i = position; i < size; i++) {
        newArr[i + 1] = arr[i];
    }

    delete[] arr;

    arr = newArr;
    size++;

    cout << "��������� �����: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
