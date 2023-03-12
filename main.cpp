#include <iostream> 
#include <ctime> 

using namespace std;
int main() {
    std::cout << "Input a: ";
    int a;
    std::cin >> a;

    std::cout << "Input b: ";
    int b;
    std::cin >> b;
        int summ = 0;
    while (a <= b) std::cout << a++ << ' ';
    std::cout << std::endl;
    {
        summ =+ a;
    }
    cout << "Sum = " << summ << "\n\n";
    return 0;
}