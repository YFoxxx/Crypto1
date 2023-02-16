#ifndef MY_FUNC_H
#define MY_FUNC_H

#include <iostream>
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>
#include <conio.h>
#include <array>
#include <vector>
#include <locale>
#include <fstream>
#include <streambuf>

bool VernamCipher(std::string inputPath, std::string encryptedFile, std::string key);
long long getSize(std::string fPath);
void generateKey(std::string keyPath, long long size);
void printBinaryFile(std::string inputPath, std::string binPath);

#endif