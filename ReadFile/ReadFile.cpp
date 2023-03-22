#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
#include <Windows.h>

using namespace std;

int main()
{   
    setlocale(LC_ALL, "Russian");
    ifstream fin;
    fin.open("file.txt");
    string strh;
    string str;

    while (!fin.eof()) {
        getline(fin, strh);
        str += strh;
        if (!fin.eof()) {
            str += '\n';
        }
    }

    cout << str;
    fin.close();
    return 0;
}