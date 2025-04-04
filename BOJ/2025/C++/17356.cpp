#include <iostream>
#include <string>
#include <deque>
#include <vector>
#include <cmath>
using namespace std; 

int main() {

    double a, b;
    cin >> a >> b; 
    double m = (b - a) / 400;
    printf("%.20f", 1 / (1 + pow(10, m)));

}
