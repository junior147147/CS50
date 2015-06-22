#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <ctype.h>
using namespace std;

int main(int argc, char const *argv[])
{

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
		
	

	//Prompt the user to input strings and k
	string sentence;
	cout << "Please input a string please!";
	getline(cin,sentence);


	//output with each alphabetical character rotated by argument "k" positions
	//Cipher[i] = (i + k) % 26

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