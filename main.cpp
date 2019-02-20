/*	Project:    NAME OF PROJECT GOES HERE
	Name:       YOUR NAME GOES HERE
    Partner:    PARTNER'S NAME IF ANY
    Class:      example: CSC 1810 - Section 1
*/

#include <iostream>
#include <list>
#include <fstream>
#include <ctype.h>

using namespace std;

int main(int argc, char *argv[])
{
	list<list<int> *> outer_list; //This is a list of pointers to lists of integers.

	//cout << "This is argc: " << argc << endl;
	//cout << "This is argv[1] :  ";

	char *tester = nullptr;
	tester = argv[1];
	//cout << "tester is: " << tester << endl;

	/*if (tester == nullptr)
	{
		cout << "Must provide name of input file." << endl;
	}*/

	//cout << argv[1] << endl;

	// ^ Working

	cout << "end" << endl;

	ifstream instream;

	string filename;
	char checker = 'a';
	list<int> *listptr = nullptr;
	int index = 0;
	int entrynum = 0;
	//bool breakval = 0;
	int listcounter = 0;

	cout << "enter filename: " << endl;
	getline(cin, filename);

	instream.open(filename);

	if (!instream.is_open())
	{
		cout << "Could not open " << filename << endl;
		return 1;
	}
	else if (instream.is_open())
	{
		cout << filename << " opened successfully. " << endl;
	}

	// ^ Working

	while (!instream.eof()) //Check vimeo for parsing
	{
		listptr = new list<int>;
		cout << "list created" << endl;
		listcounter++;

		while (checker != '\n')
		{
			instream >> entrynum;
			(*listptr).push_back(entrynum);
			index++;
			checker = instream.peek();
			if (checker == '\n' || checker == -1)
			{
				break;
			}
		}

		outer_list.push_back(listptr);
		//checker = instream.peek();
		checker = 'a';
		if (instream.eof())
		{
			break;
		}
	}

	cout << outer_list.size();

	//Print Checks and sums

	unsigned int outputindex = 0;
	list<int> outlist;
	cout << "List counter: " << listcounter << endl;
	cout << "Size of outer list: " << outer_list.size() << endl;

	while (outputindex < outer_list.size())
	{

		outputindex++;
	}

	//deallocates memory

	for (list<int> *listdelptr : outer_list)
	{
		delete listdelptr;
	}

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
