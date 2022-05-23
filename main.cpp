#include <iostream>
#include "ccustomstack.h"

using namespace std;

int main()
{
    CCustomStack<int> testStack;
    testStack.push(11);
    cout << "top1: " << testStack.top() << endl;
    cout << "min1: " << testStack.min() << endl;
    testStack.push(6);
    cout << "top2: " << testStack.top() << endl;
    cout << "min2: " << testStack.min() << endl;
    testStack.push(7);
    cout << "top3: " << testStack.top() << endl;
    cout << "min3: " << testStack.min() << endl;
    testStack.push(8);
    cout << "top4: " << testStack.top() << endl;
    cout << "min4: " << testStack.min() << endl;
    testStack.push(4);
    cout << "top5: " << testStack.top() << endl;
    cout << "min5: " << testStack.min() << endl;
    testStack.push(6);
    cout << "top6: " << testStack.top() << endl;
    cout << "min6: " << testStack.min() << endl;
    testStack.push(1);
    cout << "top7: " << testStack.top() << endl;
    cout << "min7: " << testStack.min() << endl;


    cout << "================================================" << endl;
    while (!testStack.empty()) {
        cout << "top: " << testStack.top() << endl;
        cout << "min: " << testStack.min() << endl;
        testStack.pop();
        cout << "+++" << endl;
    }

    return 0;
}
