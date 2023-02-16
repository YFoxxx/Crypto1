#include "my_func.h"
using namespace std;

bool VernamCipher(string inputPath, string encryptedFile, string key) 
{   
    ifstream file(inputPath.c_str(), ios::binary | ios::in);
    ofstream cipherfile(encryptedFile.c_str(), ios::binary | ios::out);
    ifstream keyfile(key, ios::binary | ios::in);
    if ((!file.is_open()) || (!cipherfile.is_open()) || (!keyfile.is_open()))
        return false;
    char byte;
    char keybyte;
    while (file.read(&byte, sizeof(char))) 
    {
        keyfile.read(&keybyte, sizeof(char));
        char resbyte = keybyte ^ byte;
        cipherfile.write(&resbyte, sizeof(char));
    }
    file.close();
    cipherfile.close();
    keyfile.close();
    return true;
}

long long getSize(string inputPath)
{
    ifstream ifs(inputPath.c_str(), ios::binary);
    ifs.seekg(0, ifs.end);
    long long res = ifs.tellg();
    ifs.seekg(0, ifs.beg);
    ifs.close();
    return res;
}

void generateKey(string keyPath, long long size)
{
    ofstream keyfile(keyPath.c_str(), ios::binary | ios::out);
    while (size > 0) 
    {
        char byte = rand() % 255;
        keyfile.write(&byte, sizeof(char));
        size--;
    }
    keyfile.close();
}
