

#include <cstdlib> 
#include <iostream>
using namespace std;
int main() 
{ 
    int random_integer, i;

    cout << "C++ performance test..." << endl;

    for (i = 0; i <= 100000000; i++) {
       random_integer = rand(); 
    }
}
