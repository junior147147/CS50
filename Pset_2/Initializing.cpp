	#include <string.h>
	#include <stdio.h>
	#include <iostream>
	using namespace std;



	string sentence;

	int main(int argc, char const *argv[])
	{
		cout << "Input your name!" << endl;
		getline(cin, sentence);
		

		//Uppercase the first letter
		char c = toupper(sentence[0]);

		//Print
		cout << c;

		//output the rest of first characters in words
		for(int i = 0; i < sentence.length(); i++){
			if (sentence[i] == ' ' && sentence[i+1]!= '\0'){
				char remaining = toupper(sentence[i+1]);
				cout << remaining << endl;
			}
		}
		
		return 0;
	}