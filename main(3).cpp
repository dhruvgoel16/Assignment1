#include <iostream>
using namespace std;

   
// Step 1: Define type aliases
using VEC = int*;         // VEC is an alias for a pointer to an int
using MATRIX = VEC*;     // MATRIX is an alias for a pointer to a VEC

int main() {
    // Step 2: Define variable a
    int a = 5;

    // Step 3: Create a VEC and point it to a
    VEC v = &a;           // v points to a

    // Step 4: Create a MATRIX and point it to v
    MATRIX m = &v;       // m points to v

    // Step 5: Display the value of a using v and m
    cout << "Value of a using v: " << *v << endl;           // Dereferencing v to get the value of a
    cout << "Value of a using m: " << **m << endl;         // Dereferencing m to get v, then dereferencing v to get a

    return 0; // Exit successfully

    
    
    
}