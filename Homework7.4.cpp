#include <iostream>
#include <cstring>

using namespace std;

void charChange(char* st, char symb)
{
    st[0] = symb;
    st[strlen(st) - 1] = symb;
}

void trim(char* str) {
    int len = strlen(str);
    int start = 0, end = len - 1;

    while (start <= end && isspace(str[start])) {
        start++;
    }

    while (end >= start && isspace(str[end])) {
        end--;
    }

    for (int i = start; i <= end; i++) {
        str[i - start] = str[i];
    }

    str[end - start + 1] = '\0';
}

int main()
{
    setlocale(0, "rus");

    char st[100];
    char symb;

    cout << "Задание 1" << endl;
    cout << "Введите текст: " << endl;
    gets_s(st);
    cout << "Введите символ: " << endl;
    cin >> symb;
    cin.ignore();

    charChange(st, symb);

    cout << "Новый текст: " << st << endl << endl;
    cout << "Задание 2: " << endl;
    cout << "Введите текст: " << endl;
    gets_s(st);
    trim(st);
    cout << "Новая строка: " << st << endl;
}