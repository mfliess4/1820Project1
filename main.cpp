/*	Project:    Pointers
	Name:       Michael Fliess
    Partner:    PARTNER'S NAME IF ANY
    Class:      CSC 1820 - MF Section
*/

#include <iostream>
#include <list>
#include <fstream>
#include <ctype.h>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	list<list<int> *> outer_list; //This is a list of pointers to lists of integers.

	//cout << "This is argc: " << argc << endl;
	//cout << "This is argv[1] :  ";

	char *tester = nullptr;
	tester = argv[1];

	if (argc < 2)
	{
		cout << "Must provide name of input file." << endl;
		return 1;
	}

	//cout << argv[1] << endl;

	// ^ Working

	ifstream instream;

	string filename;
	char checker = 'a';
	list<int> *listptr = nullptr;
	int index = 0;
	int entrynum = 0;
	//bool breakval = 0;
	int listcounter = 0;
	int listSum = 0;
	int elementCtr = 0;

	vector<int> listSizes;
	vector<int> listSums;

	instream.open(tester);

	if (!instream.is_open())
	{
		cout << "Unable to open " << tester << endl;
		return 1;
	}
	else if (instream.is_open())
	{
		//cout << filename << " opened successfully. " << endl;
	}

	// ^ Working

	while (!instream.eof())
	{
		listptr = new list<int>;
		//cout << "list created" << endl;
		listcounter++;

		while (checker != '\n')
		{
			instream >> entrynum;
			(*listptr).push_back(entrynum);
			listSum = listSum + entrynum;
			elementCtr++;
			checker = instream.peek();
			if (checker == '\n' || checker == -1)
			{
				break;
			}
		}

		outer_list.push_back(listptr);
		listSums.push_back(listSum);
		listSizes.push_back(elementCtr);
		index++;
		listSum = 0;
		elementCtr = 0;
		//checker = instream.peek();
		checker = 'a';
		if (instream.eof())
		{
			break;
		}
	}

	//Print Checks and sums

	unsigned int outputindex = 0;
	list<int> outlist;
	cout << "List counter: " << listcounter << endl;
	cout << "Size of outer list: " << outer_list.size() << endl;

	while (outputindex < listSizes.size())
	{
		cout << "List " << (outputindex + 1) << " has " << listSizes.at(outputindex) << " elements and sums to " << listSums.at(outputindex) << endl;
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
