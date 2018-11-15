//
// Created by Néstor Ojeda on 15/11/2018.
//
#include <vector>
#include "Iterator.h"

using namespace std;

Node front, aux, rear;
bool end = true;
Iterator::Iterator(vector<int> &list){
    front.valid = false;
    aux.valid= false;
    rear.valid = false;
    for (int &it : list) {
        insert(it);
    }
}
void Iterator::insert(int v){
    if(!rear.valid){
        rear.valid = true;
        front = rear;
    } else {
        rear.next->valid = true;
        rear = *rear.next;
        aux = *aux.next;
    }
    rear.info = v;
}
int Iterator::next(){
    int pos [2] = {front.info, aux.info};
    return *pos;
}





