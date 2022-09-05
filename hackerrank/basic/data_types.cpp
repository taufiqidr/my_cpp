#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int int_num;
    long long_num;
    char karakter;
    float float_num;
    double double_num;
    
    scanf("%d %ld %c %f %lf", &int_num, &long_num, &karakter, &float_num,&double_num);
    
    printf("%d\n%ld\n%c\n%f\n%lf", int_num, long_num, karakter, float_num,double_num);
    return 0;
}