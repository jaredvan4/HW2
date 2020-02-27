//jared VanEnkevort
#include <iostream>
#include <string>
#include <cstdlib>
#include "LL.h"
#include "LLN.h"
#include "PG2.h"
using namespace std;

LL::LL() {
	head = NULL;
}

LL::~LL() {
	delete head;
}

LLN* LL::getLast()
//returns the last node 
{
	if (head) {
		head->getLast();
	}
	else {
		return NULL;
	}
}

void LL::add(string s) {
	//adds a new node to the list
	head = new LLN(s, head);
}

void LL::print() {
	//prints each node in the list
	if (head) head->print();
	cout << endl;
}


void LL::radixSort() {	
	//sorts strings alphabetically
	if (!head) {
		//exit programn when given empty list and give user informative message.
		cout << "Empty list!!!\n";
		exit(0);
	}
	for (int i = head->longest() - 1; i >= 0; i--) {
		LLN** collection = new LLN* [27];
		for (int b = 0; b < 27; b++) {
			collection[b] = NULL;
		}
		head->split(i, collection);
		head = paste(collection);
		
		delete[] collection;
	 }
	head->print();
	
}
int LL::longest() {
	//finds the longest string in the list and returns the size of it
	if (!head) {
		return 0;

	}else{
		head->longest();
	}
}