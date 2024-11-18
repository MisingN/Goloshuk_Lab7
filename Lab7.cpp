#include <iostream>
using namespace std;
#include <windows.h>
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size;
    cout << "Введіть початковий розмір масиву: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Введіть елементи масиву: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    int position, newElement;
    cout << "Введіть позицію для вставки нового елемента (від 0 до " << size << "): ";
    cin >> position;

    if (position < 0 || position > size) {
        cout << "Невірна позиція! Програма завершує роботу." << endl;
        delete[] arr;
        return 1;
    }

    cout << "Введіть новий елемент: ";
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

    cout << "Оновлений масив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
