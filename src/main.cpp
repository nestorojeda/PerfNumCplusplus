#include <iostream>
#include <string>
#include <vector>
#include "FileHandler.h"
#include "PerfNum.h"
#include "IteratorC.h"


using namespace std;
int main() {
    cout<<"IMPORTANTE: EL ARCHIVO DEBE TENER UN SOLO NUMERO ENTERO POR CADA LINEA"<<endl;
    cout<<"Introduce la ruta del archivo: "<<endl;
    char *path = const_cast<char *>(R"(./datafile)");
    //scanf("%s",path);
    vector<int> list = fileToArray(path);
    IteratorC it = IteratorC(list);
    return 0;
}