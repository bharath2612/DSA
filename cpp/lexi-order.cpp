// C++ program for the above approach 
#include<iostream>
#include<vector> 
using namespace std; 

// Function to print the vector 
void Print(vector<string> v) 
{ 
	for (auto i : v) 
		cout << i << endl; 
} 

// Comparator function to sort the 
// array of string wrt given conditions 
bool my_compare(string a, string b) 
{ 
	// Check if a string is present as 
	// prefix in another string, then 
	// compare the size of the string 
	// and return the larger size 
	if (a.compare(0, b.size(), b) == 0 
		|| b.compare(0, a.size(), a) == 0) 

		return a.size() > b.size(); 

	// Else return lexicographically 
	// smallest string 
	else
		return a < b; 
} 

// Driver Code 
int main() 
{ 
	// GIven vector of strings 
	vector<string> v = { "batman", "bat", "apple" }; 

	// Calling Sort STL with my_compare 
	// function passed as third parameter 
	sort(v.begin(), v.end(), my_compare); 

	// Function call to print the vector 
	Print(v); 
	return 0; 
}
