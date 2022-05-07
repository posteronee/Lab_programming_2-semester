#include <iostream>
#include "pow.h"
#include "array.h"
using namespace std;
int main() {
    int a, n;
    cout << "Enter your number: \n";
    cin >> a;
    cout << "Enter your pow: \n";
    cin >> n;
    cout << powN(a, n) << endl;


    int N;
    cin >> N;
    Array<int> arr(N);
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
