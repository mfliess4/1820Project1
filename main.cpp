/*	Project:    NAME OF PROJECT GOES HERE
	Name:       YOUR NAME GOES HERE
    Partner:    PARTNER'S NAME IF ANY
    Class:      example: CSC 1810 - Section 1
*/

#include <iostream>
#include <list>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	list<list<int> *> outer_list; //This is a list of pointers to lists of integers.

	/*
	while(rest of input file != empty) {

	 listptr = new list<int> ;
	 
		 while(rest of line is not empty) 
		 {
		 (*listptr).at(x) = first list value
		 x++;
		 move to next value;
		 }
	 
	 outerlist.push_back(listptr);

	}
	
	
	--Print Checks and sums
	
	
	for (&outer_list : listbeingdeleted) 
	{
	delete listbeingdeleted;
	}




	*/

	// This causes the program to pause at its completion.
	{
		char c;
		cout << "Hit enter to exit:";
		cin.get(c);
	}
	return 0;
}

//Problems - inputting filename from outside main and assinging it to argv[0], assiging different ints from file to different list spots and different lists,
//
