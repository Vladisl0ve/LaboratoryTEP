#include <iostream>
using namespace std;

void v_alloc_table_add_5(int iSize)
{
	cout << "###### Exercise 1 #######" << endl;
	if (iSize <= 0) {
		cout << "Error: size of table must be greater than zero" << endl;
		return;
	}

	int* pi_table = new int[iSize];
	cout << "Table after allocation:\n";
	for (int ii = 0; ii < iSize; ii++)
	{
		*(pi_table + ii) = ii + 5;
		cout << "\t" << ii << ": " << *(pi_table + ii) << endl;
	}
	delete pi_table;
	cout << "Table's memory address after deallocation: " << pi_table << "\n" << endl;
}

bool b_alloc_table_2_dim(int*** piTable, int iSizeX, int iSizeY)
{
	cout << "###### Exercise 2 #######" << endl;
	if (iSizeX <= 0 || iSizeY <= 0)
		return false;
	cout << "Table's memory address before allocation: " << *piTable << endl;
	*piTable = new int* [iSizeX];
	for (int ii = 0; ii < iSizeX; ii++)
		*(*piTable + ii) = new int[iSizeY];

	cout << "Table's memory address after allocation: " << *piTable << "\n" << endl;
	return true;
}
bool b_dealloc_table_2_dim(int*** piTable, int iSizeX, int iSizeY)
{
	cout << "###### Exercise 3 #######" << endl;
	if (iSizeX <= 0 || iSizeY <= 0)
		return false;

	cout << "Table's memory address before deallocation: " << *piTable << endl;

	for (int ii = 0; ii < iSizeX; ii++)
		delete (*(*piTable + ii));
	delete (*piTable);
	cout << "Table's memory address after deallocation: " << *piTable << endl;
	return true; //we can avoid using of iSizeY 'cause iSizeY shows size of domestic tables
}
int main()
{
	v_alloc_table_add_5(10);
	int** piTestTable = NULL;
	b_alloc_table_2_dim(&piTestTable, 5, 3);
	b_dealloc_table_2_dim(&piTestTable, 5, 3);


	system("pause");
}

