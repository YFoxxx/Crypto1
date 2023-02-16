#include "my_func.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    char chr;
    bool bMenu = true;
    while (bMenu)
    {

        cout << "***Выберите действие***\n";
        cout << "1 - зашифровать шифром Вернама\n";
        cout << "2 - расшифровать шифр Вернама\n";
        cout << "3 - о программе\n";
        cout << (chr = _getch()) << endl;
        switch (chr)
        {
        case '1':
            generateKey("key.txt", getSize("input.txt"));
            printBinaryFile("input.txt", "bin.txt");
            VernamCipher("input.txt", "encrypted.txt", "key.txt");
            break;
        case '2':
            VernamCipher("encrypted.txt", "decrypted.txt", "key.txt");
            break;
        case '3':
            cout << "Выполнил Семенов Алексей БИ-31\nЛабораторная работа 1. Симметричное шифрование. Шифр Вернама\n\n\n";
            break;
        default:
            cout << "Unsupported key is pressed\n";
            break;
        }
        cout << "Нажмите 0 для продолжения работы\n";
        cout << "Для выхода нажмите любую другую кнопку\n";
        cout << (chr = _getch()) << endl;
        if (chr != '0')
            bMenu = false;
        system("cls");
    }
}

