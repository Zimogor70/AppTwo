
#include <iostream>
#include "Two.h";

int main()
{
    OneAndHalf* oneAndAHalf = new OneAndHalf(10);
    cout << oneAndAHalf->getNum() << "\n";
    Two* two = new Two(10);
    cout << two->getNum() << "\n";
    N* n = new N(10);
    cout << n->getNum() << "\n";
}
