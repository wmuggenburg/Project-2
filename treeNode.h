/**
treeNode.h
Wilhelm Muggenburg
COSC 2030 Fall 2018
Project 2, Tracking Tree:
Declaration of Node

Tree will be represented in an Array (sequential Representation)

**/

#pragma once

#ifndef _TREE_NODE_H
#define _TREE_NODE_H

#include <iostream>
#include <vector>
#include<string>
using std::string;
using std::vector;
using namespace std;

class treeNode 
{
private:

	string id;
	string parentID;
	string rawEvent;
	string leftHash;
	string rightHash;

	//https://www.geeksforgeeks.org/vector-in-cpp-stl/
	vector<string> rHshHist;
	vector<string> lHshHist;

public:

	void setID(string input);
	void setPID(string input);
	void setrHASH(string input);
	void setlHASH(string input);
	void setEvent(string input);
	
	string retID(void);
	string retPID(void);
	string retLHASH(void);
	string retRHASH(void);
	string retRAWEV(void);
	
	
	void lhashHist(void);
	void rhashHist(void);



};
#endif