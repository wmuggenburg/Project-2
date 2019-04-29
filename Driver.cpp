
/**
Driver.cpp
Wilhelm Muggenburg
COSC 2030 Fall 2018
Project 2, Tracking Tree:
Driver for Project 2
**/
#include "treeNode.h"
#include<iostream>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <cstdlib>
//http://www.cplusplus.com/reference/cstdlib/

int main()
{
	treeNode* tree = new treeNode[2];
	//Root node needs a random ParentID
	tree[1].setPID(rootRandom());

	bool quit = false;
	string input;


	cout << "\nEnter 'A'/'Add' to add a new record to the Tree"
		<< "\nEnter 'V'/'Visualize' to view the Tree ID values"
		<<"\nEnter 'D'/'Display' to display the contents of a single record"
		<<"\nEnter 'U'/'Update' to update a record in the Tree"
		<<"\nEnter 'Q'/'Quit' to exit the program" << endl;





	while (quit == false)
	{

		cin >> input;
		std::transform(input.begin(), input.end(), input.begin(), ::tolower); //https://stackoverflow.com/questions/313970/how-to-convert-stdstring-to-lower-case
		
		if(input == "q" || input == "quit")
		{
			quit = true;
		}

		if(input == "v" || input == "visualize")
		{
			//print ID for each node
		}
		if(input == "a" || input =="add")
		{
			cout << "Please enter a new raw event:"

		}
		if(input == "u" || input == "update")
		{
			string updateID;
			cout << "\nPlease enter the ID of the record you would like to update: ";
			cin >> updateID;

			//Next need to check this exists
		}

		if(input == "d" || input == "display")
		{
			string disID;
			cout << "\nPlease enter the ID of the record you would like to display: ";
			cin >> disID;
			//Next need to check this exists

		}
	}

	/*cout << "\nThe ID is: " << 
			 << "\nThe ParentID is: " << 
			 << "\nThe Right Hash is: " << 
			 << "\nThe Left Hash is: " << 
			 << "\nThe ID is: " << ;	*/


}

//http://www.cplusplus.com/forum/windows/88843/
//https://stackoverflow.com/questions/440133/how-do-i-create-a-random-alpha-numeric-string-in-c

string rootRandom(void)
{
const int length = 8;
char pID[length];
static const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

    for(int i=0; i < length; i++)
    {
       pID[i] = alphanum[rand() % (sizeof(alphanum) - 1)];

    }
	pID[length] = 0;
    return pID;


}