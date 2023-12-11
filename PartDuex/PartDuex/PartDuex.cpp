#include<iostream>
#include<vector>
#include "TriangleStack.h"
#include "TriangleHeap.h"



using namespace std;

int AddNumbersReturnInt(int* a, int* b) 
{
	return (*a + *b);
}

void AddNumbersReturnVoid(int a, int b, int* sum) 
{
	*sum = a + b;
}

void SwapValues(int* a, int* b) 
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{
	vector<TriangleStack> T1;
	vector<TriangleHeap>* T2 = new vector<TriangleHeap>(); // make new because your pointing to an object ?
	vector<TriangleStack>* T3 = new vector<TriangleStack>();
	vector<TriangleHeap> T4;







	system("pause");

	delete T2, T3;
}

