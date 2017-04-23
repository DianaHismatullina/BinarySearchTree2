// BinarySearchTree.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

int number = 0;
int ht = 0;
bool k = 1, n = 1, deleted = 1;

template <class Type>
class BinarySearchTree
{
private:
		Type value;
		BinarySearchTree *parent;
		BinarySearchTree *left;
		BinarySearchTree *right;
		
public:

	void Add(Type new_value, BinarySearchTree *&root)
	{
		if (!root)
		{
			root = new BinarySearchTree;
			root->value = new_value;
			root->left = nullptr;
			root->right = nullptr;
			return;
		}
		if (root->value > new_value)
		{
			Add(new_value, root->right);
		}
		if (root->value < new_value)
		{
			Add(new_value, root->left);
		}
		else return;
	}

	void  Search(BinarySearchTree *root)
	{
		if (!root)return;
		if (k == 0)
		{
			cout << "Enter the number:" << endl;
			cin >> number;
		}
		if (root->value == number) 
		{
			n = 0;
			cout << "You number" << number << "was found!" << endl;
		}
		Search(root->right);
		Search(root->left);
	}

	void print_line(BinarySearchTree *root, bool ptr)
	{
		if (!root) return;
		if (ptr)
		{
			print_line(root->left, 0);

			cout << root->value << " ";

			print_line(root->right, 0);
		}
		return;
	}

	void print(BinarySearchTree *root,bool ptr)
	{
		if (!root) return ;
		if (ptr)
		{
			ht++;
			print(root->left, 1);

			for (int i = 0; i < ht - 1; ++i) cout << "- ";
			cout << root->value << endl;

			print(root->right, 1);
			ht--;
		}

		return;
	}



	void Delete_value(BinarySearchTree *root)
	{
		if (!root) return;
		if (deleted)
		{
			if (root->left != NULL)
				if (root->left->value == number)
				{
					deleted = 0;
					FreeTree(root->left);
					root->left = NULL;
				}
			if (root->right != NULL)
				if (root->right->value == number)
				{
					deleted = 0;
					FreeTree(root->right);
					root->right = NULL;
				}
		}
		Delete_value(root->left);
		Delete_value(root->right);
		return;
	}

	void FreeTree(BinarySearchTree *&root)
	{
		if (!root) return;
		FreeTree(root->left);
		FreeTree(root->right);
		delete root;
		return;
	}

};

int main(void)
{
	BinarySearchTree<unsigned int> *root = 0;
	BinarySearchTree<unsigned int> *ptr=0;

	unsigned int* value;
	unsigned int size = 0;

	cout << "Enter the number of nodes: ";
	cin >>size;

	try
	{
		if (size < 0) throw size;
	}
	catch (int error)
	{
		cout << endl << "Error! " << error << ": The number of nodes can't be negative!!" << endl;
		return 0;
	}
	value = new unsigned int[size];

	for (unsigned int i = 0; i < size; ++i)
	{
		cout << "To add a node " << i + 1 << ": ";
		cin >> value[i];
	}
	for (unsigned int i = 0; i < size; ++i)
	{
		ptr->Add(value[i], root);
	}
	

	cout << endl << size << " ";
	ptr->print_line(root,0);
	cout << endl << endl << "Binary Search Tree:" << endl;
	ptr->print(root,1);
	ptr->Search(root);
	if (n)
	{
		cout << endl << " The number you searched for was not found!:";
	}

	cout << endl << endl << "Enter the number of the node you want to remove:";
	cin >> number;
	ptr->Delete_value(root);
	cout << endl << "The result of the removal: " << endl;
	ptr->print(root,1);

	ptr->FreeTree(root);
	delete[] value;
	cout << endl << endl << "Press any button to exit the program " << endl;
	_getch();
	return 0;
}
