#include <iostream> 
#include <ctime> 
using namespace std;

int main()
{
    srand(time(0));
    const int size = 6;
    int numbers[size];
    for (size_t i = 0; i < size; i++)
    {
        cout << "number[" << i << "] = ";
        cin >> numbers[i];
    }
    cout << endl; 
    for (int i = size - 1; i >= 0; i--) {
        cout << numbers[i] << "\t";
    }
    cout << endl; 
    return 0;
}