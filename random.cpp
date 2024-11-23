#include <iostream>
#include <random>

using namespace std ;

int main() {
    // Random engine
    random_device rd;  // Non-deterministic random seed
    mt19937 gen(rd()); // Mersenne Twister engine initialized with seed
    
    // Distribution
    uniform_char_distribution<> distrib('!','Z'); 
    
    // Generate random numbers
    for (int i = 0; i < 2; ++i) {
        cout << distrib(gen) << " ";
    }

    return 0;
}

