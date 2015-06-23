/***********************************************************************************
 * FILENAME: Initializing.cpp
 * 
 * Mon 21 June, 2:00 PM, 2015
 *
 * Author: Yu Zhou
 * 
 * Pset 2 - 1 of 3
 *
 * A program that prompts a user for their name
 * Print their initials in uppercase letter

 ***********************************************************************************/

#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;



string sentence;

int main(int argc, char const *argv[])
{

/***********************************************************************************
Step 1: Prompts a user for their name

* make sure to use getline for a string

***********************************************************************************/

	cout << "Input your name!" << endl;
	getline(cin, sentence);
	
/***********************************************************************************
Step 2: Uppercase the first letter and print it

***********************************************************************************/
	
	char c = toupper(sentence[0]);
	cout << c;

/***********************************************************************************
Step 3: Output the rest of first characters in words

***********************************************************************************/

	for(int i = 0; i < sentence.length(); i++){
		if (sentence[i] == ' ' && sentence[i+1]!= '\0'){
			char remaining = toupper(sentence[i+1]);
			cout << remaining << endl;
		}
	}
	
	return 0;
}