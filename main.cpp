#include <iostream>
#include "SuperArray.h"
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int low = 5;
    int capacity = 15;
    int high = low + capacity -1;
    SuperArray sa(low, capacity);
    for (int i = low; i <= high; i++)
    {
        sa[i] = i + 100;
    }
    // Test Resize now
    low = -4;
    capacity = 23;
    high = low + capacity -1;

    cout << sa.length() << endl;

    cout << "length before resize: " << sa.length() << endl;

    sa.resize(low, capacity);

    //cout << sa.getLowIndex() << endl;
    cout << arrayToString(sa) << endl;
    cout << "low: " << sa.getLowIndex() << endl;
    cout << "sa[5]: " << sa[5] << endl;
    cout << "sa[14]: " << sa[14] << endl;
    cout << "length after resize: " << sa.length() << endl;
}