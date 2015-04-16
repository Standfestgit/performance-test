

#include <cstdlib> 
#include <iostream>
using namespace std;
int main() 
{ 
    int random_integer, i;

    cout << "Performance test from C++..." << endl;

    for (i = 0; i <= 100000000; i++) {
       random_integer = rand(); 
    }
}
