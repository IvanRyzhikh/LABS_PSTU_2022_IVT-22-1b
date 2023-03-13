
#include <iostream>
using namespace std;
const int N = 17;

int InterpolSearch(int A[], int key)
{
	int mid, left = 0, right = N - 1;
	while (A[left] <= key && A[right] >= key)
	{
		mid = left + ((key - A[left]) * (right - left)) / (A[right] - A[left]);
		if (A[mid] < key) {
			left = mid + 1;
		}
		else if (A[mid] > key) {
			right = mid - 1;
		}
		else {
			return mid;
		}
	}
	if (A[left] == key) {
		return left;
	}
	else {
		return -1;
	}
}

void main()
{
	int i, key;
	int A[N] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59 };
	cout << "element to be found ";
	cin >> key;
	cout << "array: ";
	for (i = 0; i < N; i++) {
		cout << A[i] << " ";
	}
	if (InterpolSearch(A, key) == -1) {
		cout << "\nelement not found";
	}
	else {
		cout << "\nnumber of element: " << InterpolSearch(A, key) + 1;
	}
}