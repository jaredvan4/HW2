//Jared VanEnkevort
//contains the main program we enter from and exit out of and (obviously) the function definitions for the delcleartions presesnt in PG2.cpp.
#include <iostream>
#include "PG2.h"
#include "LL.h"

//main function program executes into, here we gather the input from the user, put it into a likned list then sort it.
int main(int argc, char* argv[]) {
	LL list;
	string input = " ";
	while (true) {
		cout << "enter a string:\n";
		getline(cin, input);
		if (input.compare("") != 0) {
			//put string into linked list
			list.add(input);
		}
		else {
			break;
		}

	}
	list.radixSort();
	exit(0);
}

LLN* paste(LLN** lists) {
	/*pastes all lists in the array of lists together and returns the head
   of the paste list. While the LLN in the current list has a next, we set our current to its getNext.
   Once we have reached the end of our current list, we set the tail's next to the head of the next list in the array*/

   //creates a list node to hold the sorted lists
	//LLN* list = nullptr;
    LLN* list = NULL;
	//below loops through all sorted lists, then "pastes" them together in the sorted list.
	for (int i = 0; i < 27; i++) {
		if (lists[i] != NULL)  {
			if (list == NULL) {
				list = lists[i];
			}
			else {
				list->paste(lists[i]);
			}
		}
	}
	return list;


	}
