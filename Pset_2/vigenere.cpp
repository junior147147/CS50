/***********************************************************************************
 * FILENAME: vigenere.cpp
 * 
 * Mon 22 June, 5:12 PM, 2015
 *
 * Author: Yu Zhou
 * 
 * Pset 2 - 3 of 3
 * Write a program that encrypts messages using Vigenere's cipher. 
 * Must accept a single command-line argument: a keyword, k, composed
 * entirely of alphabetical characters.
 *
 * Ci = (Pi + Ki) % 26
 ***********************************************************************************/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctype.h>
#include <vector>
using namespace std;



int main(int argc, char const *argv[])
{

/***********************************************************************************
Step 1 : Check validation of command-line arguments input
***********************************************************************************/
	bool is_two_argc = false;
	do{
		if (argc != 2){ 
			cout << "Don't forget to input your key with a number";
			return 1;
			}

		else{
			is_two_argc = true;
			}
		}while(!is_two_argc);
		

/***********************************************************************************
Step 2: set key from characters to numbers (ex: a&A = 0  etcs)

* translating from a set of characters to a set of integers can be tricky
* Vector is helpful to construct a integer array since vector defines all types.

* std::vector<type> name(size); 

***********************************************************************************/

string key_char = argv[1];
std::vector<int> key_num(key_char.begin(), key_char.end());  

	for (int i = 0; i < key_char.length(); i++){
		if (isalpha(key_char[i])){
			if (islower(key_char[i])){
				key_num[i] = key_char[i] - 'a';
			}
			else{
				key_num[i] = key_char[i] - 'A';
			}
		}
	}

/***********************************************************************************
Step 3: Asking for message

* make sure to use getline for a string

***********************************************************************************/


	string sentence;
	string output_sentence;
	cout << "Please give me a string for encoding" << endl;
	getline(cin,sentence);


/***********************************************************************************
Step 4: Implementing encoding algorithm

* key counters wrap around and reset if its size is smaller than the encoded message
* using module can reset the counters: key index % size of key

***********************************************************************************/

	int j = 0;

	for(int i = 0; i < sentence.length(); i++){
		//
		j = j%key_num.size();
		if (isalpha(sentence[i])){
			if (islower(sentence[i])){
				output_sentence[i] = (sentence[i] + key_num[j] - 'a') % 26 + 'a';
				cout << output_sentence[i];
				j++;
			}
			else{
				output_sentence[i] = (sentence[i] + key_num[j] - 'A') % 26 + 'A';
				cout << output_sentence[i];
				j++;
			}
		}
		else cout << sentence[i];		
	}

}



	
