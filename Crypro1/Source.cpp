#include "my_func.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    char chr;
    bool bMenu = true;
    while (bMenu)
    {

        cout << "***�������� ��������***\n";
        cout << "1 - ����������� ������ �������\n";
        cout << "2 - ������������ ���� �������\n";
        cout << "3 - � ���������\n";
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
            cout << "�������� ������� ������� ��-31\n������������ ������ 1. ������������ ����������. ���� �������\n\n\n";
            break;
        default:
            cout << "Unsupported key is pressed\n";
            break;
        }
        cout << "������� 0 ��� ����������� ������\n";
        cout << "��� ������ ������� ����� ������ ������\n";
        cout << (chr = _getch()) << endl;
        if (chr != '0')
            bMenu = false;
        system("cls");
    }
}

