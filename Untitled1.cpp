#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int value;
    ofstream file("numbers.txt");

    if (!file.is_open()) {
        cerr << "Error opening the file for writing." << endl;
        return 1; 
    }

    int i = 0;
    while (i < 100) {
        value = rand() % 100 + 1; 
        file << value <<",";   
        i++;
    }

    file.close();
    cout << "Random numbers in the range 1-1000 written to numbers.txt" << endl;

    return 0;
}

