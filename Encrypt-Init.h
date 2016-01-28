#ifndef __ENCRYPT_INIT_H
#define __ENCRYPT_INIT_H
#include<iostream>
#include<vector>
#include<string>
#include <ctime>
#include <cmath>
#include <fstream>
#include<windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
using namespace std;
void Intro();
vector<int> Alphabet(string x);
int generateKey(int array[3][3]);
bool checkKey(int key[3][3]);
vector<int> generateCiphertext(int key[3][3], vector<int>text);
string generateFilename();
void outputFile(int key[3][3], vector<int>code, string x);
#endif
