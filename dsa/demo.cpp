#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("demo/input.txt");
    ofstream fout("demo/output.txt");

    int a, b;
    fin >> a >> b;
    fout << "Sum is: " << (a + b) << endl;

    fin.close();
    fout.close();
    return 0;
}