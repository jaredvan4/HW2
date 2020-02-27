//Jared VanEnkevort
//contains the method prototypes that appear in LLN.cpp
#ifndef _LLN_
#define _LLN_

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class LLN {
private:
	string contents;
	LLN* next;
public:
	LLN* getLast();
	int longest();
	LLN(string s, LLN* n);
	~LLN();
	void print();
	LLN* reverse();
	void setnext(LLN* n);
	void split(int pos, LLN** lists);
	LLN* merge(LLN* b);
	string getS();
	LLN* getnext();
	void paste(LLN* b);
	int ct();
};

#endif
