#include "string"
#include "iostream"
using namespace std;

int main(int argc, char const *argv[])
{
	int height;

	do{
		cout << "input a height: ";
		cin >> height;
	}while(height<=0||height>=23);




	for (int row = 0; row < height; row ++){
		for (int space = height; space > row + 1; space--){
			cout <<" ";
		}

		for(int star = 0; star < row + 2; star++){
			cout <<"#";
		}

		cout << endl;

	}
	
// outter loop:
// basically a counter for rows

// note on the two inner loop:
// try to print height - row spaces & row + 1 stars
// use loop to acheive that , and then print out the symbol



	return 0;	
}