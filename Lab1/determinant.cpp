/******************************************************************************************
** Program name:  Lab 1 - determinant.cpp
** Author:  Jacob Burton
** Date:  04/07/2019
** Description:  Contains determinant function.  determinant takes as parameters a pointer
**               to a 2d array and an integer indicating the size of the array (2x2 or 3x3).
**               Function calculates and returns the determinant of the array matrix.
*******************************************************************************************/

#include "determinant.hpp"

int determinant(int** arr, int size) {
	int dValue;
	
	if (size == 2) {  // calculate determinant of 2x2 array matrix
		dValue = arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
	} else {  // calculate determinant of 3x3 array matrix
		dValue = arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1])
			- arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0])
			+ arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);
	}
	return dValue;  // return determinant
}