#include <iostream> 
#include <ctime> 
using namespace std; 
int main() 
{ 
	srand(time(0)); 
	const int size = 6; 
	int sum = 0; 
	int pributok[size]; 
	for (size_t i = 0; 
		i < size; i++) 
	{ 
		cout << "month[" << i << "] = "; 
		cin >> pributok[i]; 
	} 
	for (size_t i = 0; 
		i < size; i++) 
	{ 
		cout << pributok[i] << "\t"; 
	} 
	for (int i = 0; i < size; i++) 
	{ 
		if (pributok[i] > 0) sum += pributok[i]; 
	} 
	cout << "Sum = " << sum << "\n\n"; 
	return 0; 

}