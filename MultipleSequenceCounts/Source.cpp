#include <iostream>
#include <string>
#include <conio.h>
#include "getSequenceCount.h"
using namespace std;

// function declaration

int* getSequenceCounts(string, char[], const int);

int length; 

int main()
{
	// variables declare with definition
	
	string sequence = "AGCTTTTCATTCTGACTGCAACGGGCAATATGTCTCTGTGTGGATTAAAAAAAGAGTGTCTGATAGCAGC";

	char character[] = {'A', 'C', 'G', 'T'};
	
	// find length of the array

	length = sizeof(character);

	// get return value from function

	int *result = getSequenceCounts(sequence, character, length);

	// displaying

	cout<<"======================= DNA Sequence ======================="<<endl<<endl;
	
	for (int i = 0; i < length; i++)
	{
		cout<<"Number of characters in "<<character[i]<<" is: "<<*(result + i)<<endl;
	}

	cout<<endl;

	cout<<"============================================================"<<endl<<endl;

	getch();
}