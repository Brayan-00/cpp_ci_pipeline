#include <iostream>

using namespace std;

#include "calculator.h"

int calculator::add(int a, int b) {
    return a + b;
}
int calculator::substract(int a, int b) {
    return a - b;
}
float calculator::divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero not possible";
    }
    return (1.0*a) / (1.0*b);
}
int calculator::multiply(int a, int b) {
    return a*b;
}

