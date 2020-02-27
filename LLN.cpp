//Jared VanEnkevort
#include <iostream>
#include <string>
#include <cstdlib>
#include "LLN.h"
using namespace std;

LLN* LLN::getLast()
//returns the last LLN  in the LL
{
	if (next) {
		next->getLast();
	}
	else {
		return this;
	}
}

int LLN::longest() {

	//finds the longest string in the entire linked list and returns its length

	int max = 0;
	if (next) {
		max = next->longest();
	}
	if (contents.length() > max ) {
		max = contents.length();
	}
	return max;

}

LLN::LLN(string s, LLN* n) {
	contents = s; next = n;
}

LLN::~LLN() {
	cout << "About to delete" << contents << endl;
	delete next;
}

void LLN::print(){
	//recursive funtions that prints the node's contents
	cout << contents << endl;
	if (next){
		next->print(); 
	}
}

LLN* LLN::reverse() { 
	//This reverses the list and returns the new head of the reversed list.

	if (!next) return this;
	LLN* nh = next->reverse();
	next->setnext(this);
	next = NULL;
	return nh;
}

void LLN::setnext(LLN* n) {
	//sets the node's next node
	next = n;
}

void LLN::split(int pos, LLN** lists) { //Splits linked list into 27 list (stored in linked list) around position pos
	if (next) {
		next->split(pos, lists);
	}
	if (pos >= contents.length()) {
		next = lists[0];
		lists[0] = this;
	}
	else {
		int position = (contents[pos]-64);
		next = lists[position];
		lists[position] = this;
	}
	/*if (!next) return NULL;
	LLN* n = next;
	next = next->split();
	return n;*/
}


LLN* LLN::merge(LLN* b) {
	//This merges two lists together into a single list. ("this" and "b").
	//returns the head of the merged list
	if (!b) return this;
	if (contents <= b->getS()) {
		next = b->merge(next);
		return this;
	}
	b->setnext(merge(b->getnext()));
	return b;
}

string LLN::getS() {
	//returns the string the node is holding
	return contents;
}

LLN* LLN::getnext() {
	//return a pointer to the next node
	return next;
}
void LLN::paste(LLN* b) {

	//pastes linked list "b" to the end of linked list "this".

	if (!next) {
		next = b;
	}
	else {
		next->paste(b);
	}
}

int LLN::ct() {
	//returns the number of nodes in the linked list.

	if (!next) return 1;
	return 1 + next->ct();
}

