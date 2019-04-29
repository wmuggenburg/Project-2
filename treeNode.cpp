
/**
treeNode.cpp
Wilhelm Muggenburg
COSC 2030 Fall 2018
Project 2, Tracking Tree
Node Class Functions
**/
#include "treeNode.h"
#include <iostream>


	void treeNode::setPID(string input)
	{
		//http://www.cplusplus.com/reference/string/string/resize/
		input.resize(8);//limiting size to paramaters given
		parentID = input;
	}
	void treeNode::setID(string input)
	{
		input.resize(8);//limiting size to paramaters given
		id = input;
	}
	void treeNode::setrHASH(string input)
	{
		input.resize(8);//limiting size to paramaters given
		rightHash = input;
		rHshHist.push_back(rightHash);//commits hash to the history vector for right	
	}
	void treeNode::setlHASH(string input)
	{
		
		input.resize(8);//limiting size to paramaters given
		leftHash = input;
		lHshHist.push_back(leftHash);//commits hash to the history vector for left 
	}
	void treeNode::setEvent(string input)
	{
		input.resize(1024); //limiting size to paramaters given
		rawEvent = input;
	}

	void treeNode::lhashHist(void)

	{
		cout << "\nThe left hash history is as follows: "<< endl;
		for(int i =0; i<lHshHist.size(); i++)
		{
			cout << lHshHist[i] << endl;
		}
	}
	void treeNode::rhashHist(void)

	{
		cout << "\nThe right hash history is as follows: "<< endl;
		for(int i =0; i<rHshHist.size(); i++)
		{
			cout << rHshHist[i] << endl;
		}
	}
	
	string treeNode::retID(void)
	{
		return id;
	}
	
	string treeNode::retPID(void)
	{
		return parentID;	
	}
	string treeNode::retLHASH(void)
	{
		return leftHash;
	}
	string treeNode::retRHASH(void)
	{
		return rightHash;
	}
	string treeNode::retRAWEV(void)
	{
		return rawEvent;
	}

