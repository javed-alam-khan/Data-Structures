#include<iostream>
#include<vector>
using namespace std;

void buildHeap(int arr[], int size)
{
	int CI;
	int PI;
	for(int i = 1; i < size; i++)
	{
		CI = i;
		PI = (i-1)/2;
		while(CI > 0)
		{
			if(arr[CI] < arr[PI])
			{
				swap(arr[CI], arr[PI]);
				CI = PI;
				PI = (PI-1)/2;
			}
			else
				break;
		}
	}
}

void inplaceHeapSort(int arr[], int size)
{
	// cout << "inplaceHeapSort" << endl;
	buildHeap(arr, size);
	int lc = size;
	for(int i = 0; i < lc-1; i++)
	{
		// for(int i=0; i<5; i++)
			// cout << arr[i] << " ";
		// cout << endl;
		// cout << "i " << i << endl;
		// cout << "to be swapped ";
		// cout << arr[0] << " " << arr[size-1] << endl;
		swap(arr[0], arr[size-1]);
		size--;
		// cout << "size " << size << endl; 
		int PI = 0; 
		int minInd = 0;
		int LCI = 2 * PI + 1;
		int RCI = 2 * PI + 2;
		while(LCI < size)
		{	
			// cout << "while LC is valid" << endl;
			// cout << "PI " << PI << endl;
			// cout << "minInd " << minInd << endl;
			// cout << "LCI " << LCI << endl;
			// cout << "RCI " << RCI << endl;
			if(RCI < size)
			{
				// cout << "if RC is valid" << endl;
				// cout << "arr[LCI] " << arr[LCI] << " arr[RCI] " << arr[RCI] << endl;
				if(arr[LCI] < arr[RCI])
				{
					// cout << "if letf child value < rigth child value" << endl;
					// cout << "arr[minInd] " << arr[minInd] << endl;
					if(arr[LCI] < arr[minInd])
					{
						// cout << "if left child value < minInd value" << endl;
						swap(arr[LCI], arr[minInd]);
						minInd = LCI;
					}
				}
				else
				{
					// cout << "else rigth child value < left child value" << endl;
					// cout << "arr[RCI] " << arr[RCI] << endl;
					// cout << "arr[minInd] " << arr[minInd] << endl;
					if(arr[RCI] < arr[minInd])
					{
						// cout << "if right child value < minInd value" << endl;
						swap(arr[RCI], arr[minInd]);
						minInd = RCI;
					}
				}
			}
			else
			{
				// cout << "else RC not valid" << endl;
				// cout << "arr[LCI] " << arr[LCI] << endl;
				// cout << "arr[minInd] " << arr[minInd] << endl;
				if(arr[LCI] < arr[minInd])
				{
					// cout << "if left child value < minInd value" << endl;
					swap(arr[LCI], arr[minInd]);
					minInd = LCI;
				}
			}
			// cout << "PI " << PI << endl;
			// cout << "minInd " << minInd << endl;
			// cout << "i " << i << endl;
			// cout << "size " << size << endl;
			if(PI == minInd)
			{
				// for(int i=0; i<5; i++)
				// 	cout << arr[i] << " ";
				// cout << endl;
				// cout << endl;
				break;
			}
			PI = minInd;
			LCI = 2 * PI + 1;
			RCI = 2 * PI + 2;

			// for(int i=0; i<5; i++)
			// 	cout << arr[i] << " ";
			// cout << endl;
			// cout << endl;
		}
		// cout << "entered for loop" << endl;
	}
}

int main()
{
	int size;
	cin >> size;
	int* arr = new int[size];
	for(int i=0; i<size; i++)
	{
		cin >> arr[i];
	}
	// buildHeap(arr, size);
	// for(int i=0; i<size; i++)
	// 	cout << arr[i] << " ";
	// cout << endl;
	inplaceHeapSort(arr, size);
	for(int i=0; i<size; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}