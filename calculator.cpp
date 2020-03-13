#include <iostream>
using namespace std;

class calculator{
    int sum(int a, int b){
        return a+b;
    }
    int substract(int a, int b){
        return a-b;
    }
    int multiply(int a, int b){
        return a*b;
    }
    float divide(int a, int b){
        if(b == 0){
            cout<<"Can't divide by 0" << endl;
        }
        return a/b;
    }
};

