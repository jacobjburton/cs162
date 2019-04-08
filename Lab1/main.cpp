/************************************************************************************
** Program name:  Lab 1 - main.cpp
** Author:  Jacob Burton
** Date:  04/07/2019
** Description:  Main function for Lab 1.  Asks users to determine size of matrix 
**               (2x2 or 3x3).  Dynamically allocates memory space for the matrix.
**               Uses readMatrix function to prompt user for integers to fill matrix.
**               Uses determinant function to calculate determinant.  Displays both
**               the matrix and determinant.
*************************************************************************************/

#include "determinant.hpp"
#include "readMatrix.hpp"
#include <iostream>
#include <limits>

using std::cin;
using std::cout;
using std::endl;

int main() {
	int size,
		input,
		dValue;
  bool goodInput = false;

	while (goodInput == false) {
		cout << "Please enter the size of the matrix (2 or 3): ";
		cin >> input;
		cout << endl;
		if (input == 2 || input == 3) {
			goodInput = true;
		} else {
			cout << "This program only accepts matrices of size 2x2 or 3x3. \n" << endl;
			cin.clear();
			cin.ignore(1000, '\n');
		}
	}

	size = input;

	int** arr = new int*[size];
	for (int i = 0; i < size; i++) {
		arr[i] = new int[size];
	}

	readMatrix(arr, size);
	dValue = determinant(arr, size);	

	if (size == 2) {
		cout << arr[0][0] << " " << arr[0][1] << "\n";
		cout << arr[1][0] << " " << arr[1][1] << endl;
	} else {
		cout << arr[0][0] << " " << arr[0][1] << " " << arr[0][2] << "\n";
		cout << arr[1][0] << " " << arr[1][1] << " " << arr[1][2] << "\n";
		cout << arr[2][0] << " " << arr[2][1] << " " << arr[2][2] << endl;
	}

	cout << dValue << endl;
	
	for (int i = 0; i < size; i++) {
		delete [] arr[i];
	}
	delete [] arr;
	return 0;
}