#include <iostream>
#include "src/lib/solution.h"


int main()
{
    vector<int> input= {3, 1, 2, 4, 5};
    BST t = (input);
    cout <<  "Max Depth = " << t.depth()<< endl;
    cout <<  "Outout for recursively: ";
    vector<int> v = t.inOrderRecur();
    cout <<  "Outout for non recursively: ";
    vector<int> ret = t.InOrderNonRecur();

    return EXIT_SUCCESS;
}