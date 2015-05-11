#include <iostream>
#include "string"
using namespace std;

bool gotValidInput = false;

const float Quaters = 0.25;
const float Dimes = 0.1;
const float Nickel = 0.05;
const float Pennis = 0.01;


int main(int argc, char const *argv[])
{
	// input, do while
	float changes;
	do{
		cout << "Give me your changes: ";
		cin >> changes;

			if(cin.fail()){
			   cin.clear();
			   cin.ignore();
			   cout <<"Bad input , boy"<< endl;
			}

			else{
				gotValidInput = true;
			}


    	}while(gotValidInput == false);
	


	//Algorithm
    	//Quater count:
    	int quaters_count = int(changes/Quaters);
    	float remainder_after_quater = changes - quaters_count * Quaters;

    	//Dime count:
    	int dime_count = int(remainder_after_quater/Dimes);
    	float remainder_after_dime = remainder_after_quater - dime_count * Dimes;

    	//Nickel count:
    	int nickel_count = int(remainder_after_dime/Nickel);
    	float remainder_after_nickel = remainder_after_dime - nickel_count * Nickel;

    	//Pennis count:
    	int pennis_count = int(remainder_after_nickel/Pennis);

    	//Total count:
    	int total_count = quaters_count + dime_count + nickel_count + pennis_count;

    	cout <<"Your total count is: " << total_count << endl;








	return 0;
}