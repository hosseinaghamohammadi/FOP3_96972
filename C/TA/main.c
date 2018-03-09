#include <stdio.h>
int main(){
    int input = 0;
    int element = 0;
    int counter = 0;
    scanf("%d", &input);
    for(element = 2; element <= input; element++){
        int done = 0;
        int j = 0;
        for ( j = 2; j < (element) / 2; j ++) {
//            if (element % 2 == 0){
//                done = 1;
//                break;
//            }
            if (element % j == 0){
                done = 1;
                break;
            }
        }
        if (done == 0){
            printf("%d\n", element);
            counter++;

        }
    }
}