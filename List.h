#pragma once

#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::ifstream;

struct Tree
{
	Tree* ptr[26];
	bool data = false;
	Tree()
	{
		for (int i = 0; i < 26; ++i) ptr[i] = nullptr;
	}
};

using pTree = Tree*;

void Add_words(pTree &root, string str, int i);
int Task(int len, int deep, pTree &root);
void print(pTree root, string str);