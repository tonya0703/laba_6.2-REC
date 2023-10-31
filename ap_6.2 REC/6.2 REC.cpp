#include <iostream>

using namespace std;

void create(int* a, const int n, const int HIGH, const int LOW);
void print(int* a, const int n, const int i);

int FindMinIndex(int* elements, const int size, int& min, int minIndex = -1, int i = 0)
{

	if (i < size)
	{
		if (elements[i] <= min)
		{
			min = elements[i];
			minIndex = i;
		}

		return FindMinIndex(elements, size, min, minIndex, ++i);
	}

	else return minIndex;
}
int FindMaxIndex(int* elements, const int size, int& max, int maxIndex = -1, int i = 0)
{

	if (i < size)
	{
		if (elements[i] >= max)
		{
			max = elements[i];
			maxIndex = i;
		}

		return FindMaxIndex(elements, size, max, maxIndex, ++i);
	}

	else return maxIndex;
}

int main()
{
	srand(time(NULL));
	const int n = 22;
	int a[n];
	const int HIGH = 40;
	const int LOW = 10;
	int i = 0;
	create(a, n, HIGH, LOW);
	print(a, n, i);
	cout << endl;
	int min = a[0];
	int max = a[0];
	cout << "Min index: ";
	cout << FindMinIndex(a, n, min) << endl;
	cout << "Max index: ";
	cout << FindMaxIndex(a, n, max) << endl;
	print(a, n, i);
}

void create(int* a, const int n, const int HIGH, const int LOW)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = LOW + rand() % (HIGH - LOW + 1);
	}
}

void print(int* a, const int n, const int i)
{
	if (i < n)
	{
		cout << a[i] << ", ";
		print(a, n, i + 1);
	}

}