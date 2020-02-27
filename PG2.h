#pragma once
#ifndef _PG2_
#define _PG2_
#include <iostream>
#include <string>
#include <cstdlib>
#include "PG2.h"
#include "LLN.h"
using namespace std;

/* main method.  Uses a loop to read in the strings */
int main(int argc, char* argv[]);

/* pastes all lists in the array of lists together and returns the head
   of the paste list.  Uses a loop to go through the array. */
LLN* paste(LLN** lists);

#endif