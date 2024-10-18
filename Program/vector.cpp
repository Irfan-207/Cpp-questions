#include <iostream> 
#include <vector> 
using namespace std; 
int main() 
{ 
	// Create an empty vector 
	vector<int> numbers; 

	// push_back() 
	numbers.push_back(10); 
	numbers.push_back(20); 
	numbers.push_back(30); 

	// Accessing elements using at() 
	cout << "Element at index 0: " << numbers.at(0) << endl; // Output: 10  
	
	cout << "Element at index 1: " << numbers.at(1) << endl; // Output: 20  

	// front() and back() 
	cout << "First element: " << numbers.front() << endl; // Output: 10 
	
	cout << "Last element: " << numbers.back() << endl; // Output: 30 

	// pop_back() 
	// Remove the last element 
	numbers.pop_back(); 

	// erase() 
	// Remove the element at index 1 
	numbers.erase(numbers.begin() + 1); 

	// empty() 
	if (numbers.empty()) { 
		cout << "Vector is empty" << endl; 
	} 
	else { 
		cout << "Vector is not empty" << endl; 
	} 

	// clear() 
	// Remove all elements 
	numbers.clear(); 

	if (numbers.empty()) { 
		cout << "Vector is empty" << endl; 
	} 
	else { 
		cout << "Vector is not empty" << endl; 
	} 

	return 0; 
}
