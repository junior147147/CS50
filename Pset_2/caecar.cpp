/***********************************************************************************
 * FILENAME: caecar.cpp
 * 
 * Mon 21 June, 3:00 PM, 2015
 *
 * Author: Yu Zhou
 * 
 * Pset 2 - 2 of 3
 *
 * Program encrypts messages using Caesar's cipher.
 * Formula:	Ci = (Pi + K) % 26
 * C1 = New, changed character
 * P1 = First letter of original phrase
 * K = Number the user provides (the key)
 * 26 = Number of letters in the alphabet
 *
 * New = (Original + Key) % 26
 ***********************************************************************************/


#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctype.h>
using namespace std;

int main(int argc, char const *argv[])
{

/***********************************************************************************
Step 1 : Check validation of command-line arguments input

* atoi: convert the character(s) to an integer 

***********************************************************************************/
	bool is_two_argc = false;
	int k;
	//Check validation of arguments input
	do{
		if (argc != 2){ 
			cout << "Don't forget to input your key with a number";
			return 1;
			}

		else{
			k = atoi(argv[1]);
			is_two_argc = true;
			}
		}while(!is_two_argc);
		
/***********************************************************************************
Step 2: Asking for message

* make sure to use getline for a string

***********************************************************************************/

	string sentence;
	cout << "Please input a string please!";
	getline(cin,sentence);


/***********************************************************************************
Step 3: Implementing encoding algorithm

* Output with each alphabetical character rotated by argument "k" positions
* Cipher[i] = (i + k) % 26
* 'a' = 97
* 'A' = 65

***********************************************************************************/

	string output_sentence;

	for (int i = 0; i <= sentence.length(); i++){		
		//print the character
		if (isalpha(sentence[i])){
			if (islower(sentence[i])){
				output_sentence[i] = (sentence[i] + k - 97) % 26 + 97;
				cout << output_sentence[i];
				}	
			else {
				output_sentence[i] = (sentence[i] + k - 65) % 26 + 65;
				cout << output_sentence[i];
				}
			}
		//print the space
		else {
			cout << sentence[i];
		}
	}
	return 0;
}