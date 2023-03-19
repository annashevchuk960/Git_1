#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int size = 12;
    int sum = 0;
    int pributok[size];
    int max = 0, min = 0;
    int max_month = 1, min_month = 1;

    for (int i = 0; i < size; i++)
    {
        cout << "month[" << i + 1 << "] = ";
        cin >> pributok[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << pributok[i] << "\t";
    }

    for (int i = 0; i < size; i++)
    {
        if (pributok[i] > 0) {
            sum += pributok[i];
        }
        if (pributok[i] > max) {
            max = pributok[i];
            max_month = i + 1;
        }
        if (pributok[i] < min || i == 0) {
            min = pributok[i];
            min_month = i + 1;
        }
    }
    cout << "Sum = " << sum << "\n\n";
    cout << "Max pributok is " << max << " in month " << max_month << endl;
    cout << "Min pributok is " << min << " in month " << min_month << endl;
    return 0;
}