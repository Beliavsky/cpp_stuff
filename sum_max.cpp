// derived from https://www.geeksforgeeks.org/c-magicians-stl-algorithms/
#include <algorithm> // max_element
#include <iostream>
#include <vector>
#include <numeric> // For accumulate operation
using namespace std;

const int sum(const vector<int> & v)
{
	return accumulate(v.begin(), v.end(), 0);
}

const int max(const vector<int> & v)
{
	return *max_element(v.begin(), v.end());
}

int main()
{
	// Initializing vector with array values
	int arr[] = {7,2,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	vector<int> vect(arr, arr+n);
	cout << "Vector is: ";
	for (int i=0; i<n; i++) cout << vect[i] << " ";
	cout << "\nMaximum element of vector is: ";
	cout << *max_element(vect.begin(), vect.end()) << " " << max(vect);
	// Starting the summation from 0
	cout << "\nThe summation of vector elements is: ";
	cout << accumulate(vect.begin(), vect.end(), 0) << " " << sum(vect);
	return 0;
}
