#include <iostream>
#include "pow.h"
#include "array.h"
using namespace std;

int main() {
    cout << "_______________PART1________________" << endl;
    const int POW_ = 2;
    cout << powN<int,POW_>(3) << endl;

    cout << "_______________PART2________________" << endl;
    const int SIZE_ = 3;
    Array<SIZE_,int> arr;
    cout << "Please fill your array" << endl;
    arr.fillArray();
    cout << "Our array is :" << endl;
    arr.showArray();
    cout << endl;
    int index;
    cout << "Please enter your index which you want to find" << endl;
    cin >> index;
    arr.tryIndex(index);
    return 0;
}