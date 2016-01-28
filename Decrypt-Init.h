#ifndef __DECRYPT_INIT_H
#define __DECRYPT_INIT_H
#include<iostream>
#include<vector>
#include<string>
#include <ctime>
#include <cmath>
#include <fstream>
using namespace std;
vector<int> generateCodedtext(double key[3][3], vector<double>text);
vector<string> inputFile();
int* extractKey(vector<string>words, int key[3][3]);
vector<double> extractCode(vector<string>words);
double* keyInverse(int key[3][3], double key2[3][3]);
void print();
#endif
