#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;


template <typename Type>
class BinarySearchTree
{

public: 
	Type value;
int Add(Type new_data, BinarySearchTree *&root)		
 {		
 	if (!root)		
 	{		
 		root = new BinarySearchTree;		
 		root->value = new_value;			
 		return root->value;		
 	}		
 	else if (root->value > new_value) Add(new_value, root);		
 	else if (root->value < new_value) Add(new_value, root); 		
 	else return root->value;		
 }	
int print(int check1, BinarySearchTree *root)		
 {		
 	if (!root) return check1; 		
 	if (root->value == 10 ) check1 = 12;		
 			
 	return check1;		
 }
int Search(int check2, BinarySearchTree *root)		
 {		
 	if (!root) return check2;		
 		
 	if(root->value >= 0) 		
 		{ 		
 			root->value = 1;		
 		}		
 			
 	return root->value;		
 		
 }
int Deletion(int check3, BinarySearchTree *root)
{
	if (!root) return check3;
	
	cout << endl << endl << "Type the node you want to delete: "; 

	if (root->value == check3) 
		{ 
			cout << endl << "[-] Error: You are trying to remove the root of the tree!" << endl;
			return 0;
		}	
}
int FreeTree(int check4, BinarySearchTree *&root)		
 {		
 	if (root != NULL)		
 	{		
 		delete root;		
		root = NULL;		
	}		
			
	return check4;		
}

};
