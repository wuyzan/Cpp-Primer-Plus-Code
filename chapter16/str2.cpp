#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("abc.txt");

    if(fin.is_open() == false)
    {
        cerr << "Can't open file, bye." << endl;
        exit(EXIT_FAILURE);
    }

    string item;
    int count = 0;
    getline(fin, item, ':');
    while(fin)
    {
        ++count;
        cout << count << ": " << item << endl;
        getline(fin, item, ':');
    }

    fin.close();

    return 0;
}