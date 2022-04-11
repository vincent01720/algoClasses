#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
using namespace std;

const int HEIGHT = 60;
const int WIDTH = 5;

int main(){
    int maxpixval;
    string line;
    int size = HEIGHT*WIDTH;
    unsigned short* data = new unsigned short[size];

    ifstream instr ("IMG-3400.pgm", ios::binary);
    getline(instr,line);
    cout << line << endl;
    getline(instr,line);
    cout << line << endl;
    getline(instr,line);
    maxpixval = stoi(line);
    cout << maxpixval << endl;
    cout << "*********" << endl;
    static unsigned short array[HEIGHT][WIDTH] = {};

    for(int row=0; row< HEIGHT; row++){
        for(int col =0; col<WIDTH; col++){
            instr.read(reinterpret_cast<char*>(&array[row][col]), 1);
        }
    }

    for(int i=0; i < HEIGHT; i++){
        cout << array[i][0] <<": "<<i <<endl;
    }

    instr.close();
}
