#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "FileHandler.h"
#include "PerfNum.h"
#include "IteratorC.h"


using namespace std;
int main() {
    unsigned t0,t1;

    t0 = clock();

    cout<<"IMPORTANTE: EL ARCHIVO DEBE TENER UN SOLO NUMERO ENTERO POR CADA LINEA"<<endl;
    cout<<"Introduce la ruta del archivo: "<<endl;
    string path; //= const_cast<char *>(R"()");

    cin >> path;

    vector<int> list = fileToArray(path);
    IteratorC it = IteratorC(list);

    while(it.hasNext()){
        vector<int> index = it.next();
        int sum = list[index[0]] + list[index[1]];
        if(isPerfect(sum)){
            cout<<"La combinacion de las posiciones: ["<<index[0]<<","<<index[1]<<"] genera el numero perfecto: "<<sum<<endl;
        }
    }

    t1 = clock();

    double time = (double(t1 - t0)/CLOCKS_PER_SEC);
    cout<<"Ejecución terminada en "<<time<<"s"<<endl;
}