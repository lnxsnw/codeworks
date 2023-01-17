#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
	int counter, key, past;
	for (counter = 1; counter < n; counter++)
	{
		key = arr[counter];
		past = counter - 1;

		while (past >= 0 && arr[past] > key)
		{
			arr[past + 1] = arr[past];
			past = past - 1;
		}
		arr[past + 1] = key;
	}
}

void printArray(int arr[], int n)
{
	int printer;
	for (printer = 0; printer < n; printer++)
		cout << arr[printer] << " ";
	cout << endl;
}

int main()
{
	int arr[] = { 9, 4, 6, 2 };
	int N = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, N);
	printArray(arr, N);

	return 0;
}
