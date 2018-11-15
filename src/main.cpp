#include <iostream>
#include <string>
#include <vector>
#include "FileHandler.h"
#include "PerfNum.h"

using namespace std;
int main() {
    printf("IMPORTANTE: EL ARCHIVO DEBE TENER UN SOLO NUMERO ENTERO POR CADA LINEA");
    printf("\nIntroduce la ruta del archivo: ");
    char *path = const_cast<char *>(R"(H:\git\PerfNumC\src\datafile)");
    //scanf("%s",path);
    vector<int> list = fileToArray(path);
    if(isPerfect(28)){
        printf("funsiona");
    }
    return 1;
}