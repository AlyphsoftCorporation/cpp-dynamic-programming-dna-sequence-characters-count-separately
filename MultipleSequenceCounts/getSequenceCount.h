#include <iostream>
#include <string>
using namespace std;

int *allCount = NULL;

// function definition

int* getSequenceCounts(string sequence, char character[], const int length)
{
	// variable for count characters

	int* c;

	allCount = new int[length];

	c = allCount;

	// variable for character initiate
	
	char currentCharacter;
	
	// looping

	for(int j = 0; j < length; j++)
	{
		int count = 0;
		
		// assigning character
		
		currentCharacter = character[j];
				
     	for(int i = 0; i < sequence.size(); i++)
	    {
	    	
		// check if specific character exist in the sequence
		
	     	if(sequence[i] == currentCharacter)
    		{
    			
				// increment by 1

   				count++;
   		  
		    }
		
    	}
       
       // assigning each counts

      *(c + j) = count;
       
	}

	
	// return value
	
	return c;
}
