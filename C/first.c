#include <stdio.h>
int main(){
	int input = 0;
	scanf("%d", &input);
	if(input > 7){
		if(input % 2 != 0 && input % 3 != 0 && input % 5 != 0 && input % 7 != 0){
			printf("%d is a prime number!\n\n", input);
		}
		else{
			printf("%d is not a prime number!\n\n", input);
		}
	}
	else{
		if(input == 2 || input == 3 || input ==  5 || input == 7){
			printf("%d is a prime number!\n\n", input);
		}
		else{
			printf("%d is not a prime number!\n\n", input);		
		}
	}
}



/*



*/
