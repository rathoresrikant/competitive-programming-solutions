// Given an array of numbers, program to arrange the numbers to form the 
// largest number 
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
using namespace std; 

// A comparison function which is used by sort() in printLargest() 
int myCompare(string X, string Y) 
{ 
	// first append Y at the end of X 
	string XY = X.append(Y); 

	// then append X at the end of Y 
	string YX = Y.append(X); 

	// Now see which of the two formed numbers is greater 
	return XY.compare(YX) > 0 ? 1: 0; 
} 

// The main function that prints the arrangement with the largest value. 
// The function accepts a vector of strings 
void printLargest(vector<string> arr) 
{ 
	// Sort the numbers using library sort function. The function uses 
	// our comparison function myCompare() to compare two strings. 
	// See http://www.cplusplus.com/reference/algorithm/sort/ for details 
	sort(arr.begin(), arr.end(), myCompare); 

	for (int i=0; i < arr.size() ; i++ ) 
		cout << arr[i]; 
} 

// Driver program to test above functions 
int main() 
{ 
	vector<string> arr; 

	//output should be 6054854654 
	arr.push_back("54"); 
	arr.push_back("546"); 
	arr.push_back("548"); 
	arr.push_back("60"); 
	printLargest(arr); 

return 0; 
} 

