//Jared VanEnkevort
//Contains the function prototypes for the functions present in LL.cpp
#ifndef _LL_
#define _LL_

#include <iostream>
#include <string>
#include <cstdlib>
#include "LLN.h"
using namespace std;

class LLN;

class LL {
private:
	LLN* head;
public:
	LL();
	~LL();
	LLN* getLast();
	int longest();
	void add(string s);
	void print();
	void radixSort();
};

#endif