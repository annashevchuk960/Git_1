#include <iostream> 
#include <ctime> 

using namespace std;
int main() {
    std::cout << "Input first: ";
    int a;
    std::cin >> a;

    std::cout << "Input second: ";
    int b;
    std::cin >> b;
        int summ = 0;
        for (int i = a ; i <= b; i++)
        {
            summ = summ + i;
        }
    cout << "Sum = " << summ << "\n\n";
    return 0;
}