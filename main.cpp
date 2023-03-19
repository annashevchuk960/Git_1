#include <iostream>
#include <ctime> 
using namespace std; 
int main() 
{ 
	srand(time(0)); 
	const int size = 5; 
	int sum = 0; 
	int perimetr[size]; 
	for (size_t i = 0; 
		i < size; i++) 
	{ 
		cout << "side[" << i << "] = "; 
		cin >> perimetr[i]; 
	} 
	for (size_t i = 0; 
		i < size; i++) 
	{
		cout << perimetr[i] << "\t"; 
	}
	for (int i = 0; i < size; i++) 
	{ 
		if (perimetr[i] > 0) sum += perimetr[i];
	} 
	cout << "Sum = " << sum << "\n\n"; 
	return 0; 
}