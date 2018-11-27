#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <stdlib.h>
#include <iterator>
#include <sstream>
#include "FileHandler.h"
#include "PerfNum.h"
#include "IteratorC.h"


using namespace std;
int main(int argc, char *argv[]) {

    clock_t t0;
    clock_t t1;

    char *path = argv[1];
    int n = stoi(argv[2]);
    t0 = clock();

    vector<int> list = fileToArray(path);
    IteratorC it = IteratorC(list.size(), n);
    if (n <= list.size()) {
        while (it.hasNext()) {
            vector<int> index = it.next();
            int sum = 0;
            for (int i : index) {
                sum += list[i];
            }
            if (isPerfect(sum)) {
                ostringstream vts;
                if (!index.empty()) {
                    copy(index.begin(), index.end() - 1,
                         ostream_iterator<int>(vts, ", "));
                    vts << index.back();
                }
                cout << "La combinacion de las posiciones: [" << vts.str() << "] genera el numero perfecto: " << sum
                     << endl;
            }
        }
    }else{
        printf("No puede haber más valores a permutar que valores en la lista");
    }

    t1 = clock();

    double time = (double(t1 - t0)/CLOCKS_PER_SEC);
    cout<<"Ejecución terminada en "<<time<<"s"<<endl;
}