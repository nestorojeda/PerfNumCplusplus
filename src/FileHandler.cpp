#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "FileHandler.h"

using namespace std;
vector<int> fileToArray(const string &path){
    ifstream infile(path);
    string line;

    vector<int> res;
    vector<int>::iterator it;
    it = res.begin();

    while (getline(infile, line)) {
        int aux = stoi(line);
        res.push_back(aux);
    }
    return res;
}