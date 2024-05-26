#include<fstream>
#include<iostream>
using namespace std;

int main (int argc, char* argv[]) {
    fstream file;
    file.open(argv[1]);
    string line;
    while ( getline(file, line) ) {
        cout << line;
    }
}
