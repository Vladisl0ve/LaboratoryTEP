#include "Exercises.h"
#include <iostream>
using namespace std;


bool show(int* pTable, int iSize)
{
	if (iSize <= 0 || pTable == nullptr) {
		cout << "Error, wrong argument(s)" << endl;
		return false;
	}
	for (int ii = 0; ii < iSize; ii++)
	{
		cout << ii << ": " << pTable[ii] << endl;
	}
	return true;
}
int* alloc1(int iSize) {
	if (iSize <= 0 || iSize > 100000) {
		cout << "Error, wrong argument(s)" << endl;
		return NULL;
	}
	int* pTable = new int[iSize];
	for (int ii = 0; ii < iSize; ii++)
	{
		pTable[ii] = ii;
	}
	return pTable;
}
bool alloc2(int** piTable, int iSize)
{
	if (iSize <= 0 || piTable == nullptr) {
		cout << "Error, wrong argument(s)" << endl;
		return false;
	}
	for (int ii = 0; ii < iSize; ii++)
	{
		piTable[ii] = new int(ii * 2);
	}
	return true;
}
void dealloc(int** piTable)
{
	delete* piTable;
	*piTable = nullptr;
}