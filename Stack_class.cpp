#include <iostream>
#include <cstring>
using namespace std;
#include "stack.h"


int main(){

    stack stack1;
    int i=0;
    for(i=0;i<=maxsize;i++){
        stack1.push(i);
    }
    for(i=0;i<=maxsize;i++){
        stack1.pop();
    }


    return 0;
}
