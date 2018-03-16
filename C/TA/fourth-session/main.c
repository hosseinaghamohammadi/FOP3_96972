#include <stdio.h>
int main(){
    int input = 0;
    scanf("%d", &input);
    int i, sum = 0, income = 0;
    for (i = 0; i < input; i++) {
        scanf("%d", &income);
        if (income < 0){
            sum += (-income);
        } else{
            sum += income;
        }
    }
    printf("%d", sum);

//    int input = 0;
//    scanf("%d", &input);
//    int first = 0, second = 0, third = 0;
//    int counter = 0;
//    for (first = 1; first <= input/3; first++) {
//        for(second = first; second <= (input-1)/2; second++){
//            third = input - first - second;
//            if (third >= second && first + second > third){
//                counter++;
//            }
//        }
//    }
//    printf("%d\n", counter);

/* //    int numOfActivities = 0;
//    char firstCode = '0', secondCode = '0', thirdCode = '0';
//    int arrivalToBank = 0, arrivalToCompany = 0, holdingTime = 0;
//    char temp = '0';
//    scanf("%d ", &numOfActivities);
//    if (numOfActivities == 1){
//        scanf("%c ", &firstCode);
        printf("%d\n\n\n", firstCode);
//        if (firstCode == '3'){
//            holdingTime += (40 * 60) + 10;
//        } else if (firstCode == '8'){
//            holdingTime += (15 * 60) + 42;
//        } else if (firstCode == 'c'){
//            holdingTime += (25 * 60) + 13;
//        }
//        scanf("%c", &temp);
//        arrivalToBank += ((int)temp - 48) * 10 * 3600;
        printf("%d\n", temp);
//        scanf("%c:", &temp);
//        arrivalToBank += ((int)temp - 48) * 3600;
        printf("%d\n", temp);
//        scanf("%c", &temp);
//        arrivalToBank += ((int)temp - 48) * 10 * 60;
        printf("%d\n", temp);
//        scanf("%c:", &temp);
//        arrivalToBank += ((int) temp -48) * 60;
        printf("%d\n", temp);
//        scanf("%c", &temp);
//        arrivalToBank += ((int)temp - 48) * 10;
        printf("%d\n", temp);
//        scanf("%c ", &temp);
//        arrivalToBank += ((int)temp - 48);
        printf("%d\n", temp);
        printf("%d is arrivalToBank time from 00:00\n", arrivalToBank);
//
//
//        scanf("%c", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int)temp - 48) * 10 * 3600;
//        scanf("%c:", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int)temp - 48) * 3600;
//        scanf("%c", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int)temp - 48) * 10 * 60;
//        scanf("%c:", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int) temp -48) * 60;
//        scanf("%c", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int)temp - 48) * 10;
//        scanf("%c", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int)temp - 48);
        printf("%d is arrivalToCompany time from %d\n", arrivalToBank, arrivalToCompany);
        printf("%d is the holding time!", holdingTime);
//        if (arrivalToBank + holdingTime + 10 * 60 <= arrivalToCompany){
//            printf("Be quick!!");
//        } else{
//            printf("Ishala next day!");
//        }
//
//
//
//    } else if (numOfActivities == 2){
//        scanf("%c ", &firstCode);
//        scanf("%c ", &secondCode);
//        if (firstCode == '3'){
//            holdingTime += (40 * 60) + 10;
//        } else if (firstCode == '8'){
//            holdingTime += (15 * 60) + 42;
//        } else if (firstCode == 'c'){
//            holdingTime += (25 * 60) + 13;
//        }
//
//        if (secondCode == '3'){
//            holdingTime += (40 * 60) + 10;
//        } else if (secondCode == '8'){
//            holdingTime += (15 * 60) + 42;
//        } else if (secondCode == 'c'){
//            holdingTime += (25 * 60) + 13;
//        }
//
//        scanf("%c", &temp);
//        arrivalToBank += ((int)temp - 48) * 10 * 3600;
        printf("%d\n", temp);
//        scanf("%c:", &temp);
//        arrivalToBank += ((int)temp - 48) * 3600;
        printf("%d\n", temp);
//        scanf("%c", &temp);
//        arrivalToBank += ((int)temp - 48) * 10 * 60;
        printf("%d\n", temp);
//        scanf("%c:", &temp);
//        arrivalToBank += ((int) temp -48) * 60;
        printf("%d\n", temp);
//        scanf("%c", &temp);
//        arrivalToBank += ((int)temp - 48) * 10;
        printf("%d\n", temp);
//        scanf("%c ", &temp);
//        arrivalToBank += ((int)temp - 48);
        printf("%d\n", temp);
        printf("%d is arrivalToBank time from 00:00\n", arrivalToBank);
//
//
//        scanf("%c", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int)temp - 48) * 10 * 3600;
//        scanf("%c:", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int)temp - 48) * 3600;
//        scanf("%c", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int)temp - 48) * 10 * 60;
//        scanf("%c:", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int) temp -48) * 60;
//        scanf("%c", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int)temp - 48) * 10;
//        scanf("%c", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int)temp - 48);
        printf("%d is arrivalToCompany time from 00:00\n", arrivalToCompany);
//        if (arrivalToBank + holdingTime + 10 * 60 <= arrivalToCompany){
//            printf("Be quick!!");
//        } else{
//            printf("Ishala next day!");
//        }
//
//
//    } else if (numOfActivities == 3){
//        scanf("%c ", &firstCode);
//        scanf("%c ", &secondCode);
//        scanf("%c ", &thirdCode);
//        if (firstCode == '3'){
//            holdingTime += (40 * 60) + 10;
//        } else if (firstCode == '8'){
//            holdingTime += (15 * 60) + 42;
//        } else if (firstCode == 'c'){
//            holdingTime += (25 * 60) + 13;
//        }
//
//        if (secondCode == '3'){
//            holdingTime += (40 * 60) + 10;
//        } else if (secondCode == '8'){
//            holdingTime += (15 * 60) + 42;
//        } else if (secondCode == 'c'){
//            holdingTime += (25 * 60) + 13;
//        }
//
//        if (thirdCode == '3'){
//            holdingTime += (40 * 60) + 10;
//        } else if (thirdCode == '8'){
//            holdingTime += (15 * 60) + 42;
//        } else if (thirdCode == 'c'){
//            holdingTime += (25 * 60) + 13;
//        }
//
//        scanf("%c", &temp);
//        arrivalToBank += ((int)temp - 48) * 10 * 3600;
        printf("%d\n", temp);
//        scanf("%c:", &temp);
//        arrivalToBank += ((int)temp - 48) * 3600;
        printf("%d\n", temp);
//        scanf("%c", &temp);
//        arrivalToBank += ((int)temp - 48) * 10 * 60;
        printf("%d\n", temp);
//        scanf("%c:", &temp);
//        arrivalToBank += ((int) temp -48) * 60;
        printf("%d\n", temp);
//        scanf("%c", &temp);
//        arrivalToBank += ((int)temp - 48) * 10;
        printf("%d\n", temp);
//        scanf("%c ", &temp);
//        arrivalToBank += ((int)temp - 48);
        printf("%d\n", temp);
        printf("%d is arrivalToBank time from 00:00\n", arrivalToBank);
//
//
//        scanf("%c", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int)temp - 48) * 10 * 3600;
//        scanf("%c:", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int)temp - 48) * 3600;
//        scanf("%c", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int)temp - 48) * 10 * 60;
//        scanf("%c:", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int) temp -48) * 60;
//        scanf("%c", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int)temp - 48) * 10;
//        scanf("%c", &temp);
        printf("%d\n", temp);
//        arrivalToCompany += ((int)temp - 48);
        printf("%d is arrivalToCompany time from 00:00\n", arrivalToCompany);
        printf("%d the holdingTime\n", holdingTime);
//        if (arrivalToBank + holdingTime + 10 * 60 <= arrivalToCompany){
//            printf("Be quick!!");
//        } else{
//            printf("Ishala next day!");
//        }
//    } */
}