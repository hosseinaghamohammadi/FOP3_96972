#include <stdio.h>
int main(){
    int input = 0;
    scanf("%d", &input);
    int counter = 0, zeroFlag = 1;

    zeroFlag = (input % 2)*(zeroFlag);
    counter += zeroFlag;
    input = input >> 1;

    zeroFlag = (input % 2)*(zeroFlag);
    counter += zeroFlag;
    input = input >> 1;

    zeroFlag = (input % 2)*(zeroFlag);
    counter += zeroFlag;
    input = input >> 1;

    zeroFlag = (input % 2)*(zeroFlag);
    counter += zeroFlag;
    input = input >> 1;

    zeroFlag = (input % 2)*(zeroFlag);
    counter += zeroFlag;
    input = input >> 1;

    zeroFlag = (input % 2)*(zeroFlag);
    counter += zeroFlag;
    input = input >> 1;

    zeroFlag = (input % 2)*(zeroFlag);
    counter += zeroFlag;
    input = input >> 1;

    zeroFlag = (input % 2)*(zeroFlag);
    counter += zeroFlag;
    input = input >> 1;

    zeroFlag = (input % 2)*(zeroFlag);
    counter += zeroFlag;
    input = input >> 1;

    printf("%d", counter+1);
}
