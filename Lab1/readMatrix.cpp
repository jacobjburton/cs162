	/************************************************************************************
** Program name:  Lab 1 - readMatrix.cpp
** Author:  Jacob Burton
** Date:  04/07/2019
** Description:  Contains readMatrix function.  readMatrix takes as parameters a pointer
**               to a 2d array and an integer indicating the size of the array (2x2 or
**               3x3).  Prompts user for all the numbers in the matrix.
***************************************************************************************/

#include "readMatrix.hpp"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void readMatrix(int** arr, int size) {
	int input,
		rowCount = 0,
		columnCount = 0;
	while (rowCount < size) {  // keep asking for input until all spots in array have a value
		cout << "Please enter the number for " << rowCount << ", " << columnCount << ": ";
		cin >> input;
		cout << endl;
		if (cin.fail()) {
			cout << "Please enter integers only." << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		} else {
			arr[rowCount][columnCount] = input;
			if (columnCount == (size - 1)) {
				columnCount = 0;
				rowCount++;
			} else {
				columnCount++;
			}
		}
	}	
}
