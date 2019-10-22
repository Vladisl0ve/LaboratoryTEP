#include <iostream>
#include "LaboratoryTEP.h"
#include "Exercises.h"
using namespace std;

int main()
{
	v_alloc_table_add_5(10);
	int** piTestTable = NULL;
	b_alloc_table_2_dim(&piTestTable, 5, 3);
	b_dealloc_table_2_dim(&piTestTable, 5, 3);
	cout << "#########" << endl;
	show(alloc1(10), 10);
	cout << "#########" << endl;
	int** piTableTest = new int* [10];
	alloc2(piTableTest, 10);
	for (int ii = 0; ii < 10; ii++)
	{
		show(piTableTest[ii], 1);
	}
	dealloc(piTableTest);

	system("pause");
}