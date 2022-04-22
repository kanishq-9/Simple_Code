#include <iostream>
#include <cmath>
int binary(int a){
    int x=0,num=0;
    int i=0;
    while(a!=0){
        x+=((a%2)*pow(10,i));
        a=a/2;
        i++;
    }
    // while(x!=0){
    //   num=(num*10)+(x%10);
    //   x=x/10;
    // }
    return x;
}

int main() {
    // Write C++ code here
    int a=-100;
    std::cout << binary(a);

    return 0;
}
