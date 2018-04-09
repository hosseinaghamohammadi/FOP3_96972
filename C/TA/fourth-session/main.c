#include <stdio.h>
int main(){
    int input = 0, i = 0;
    int fallSeen = 0, raiseSeen = 0, raisingFirst = 0, fallingFirst = 0;
    int no = 0;
    int previous = 0;
    scanf("%d", &input);
    for(i = 0; i < input; i++){
        int income = 0;
        scanf("%d", &income);
        if (i == 0){
            previous = income;
            continue;
        }
        if (previous < income && fallSeen == 0){
            raiseSeen = 1;
            raisingFirst = 1;
        }
        if (previous > income && raiseSeen == 0){
            fallSeen = 1;
            fallingFirst = 1;
        }
        if (fallingFirst && previous < income){
            raiseSeen = 1;
        }
        if (raisingFirst && previous > income){
            fallSeen = 1;
        }
        if ((fallingFirst && raiseSeen && previous > income) || (raisingFirst && fallSeen && previous < income)){
            printf(income);
            no = 1;
        }
        if ((fallingFirst && raiseSeen && previous == income) || (raisingFirst && fallSeen && previous == income)){
            printf(income);
            no = 1;
        }
        previous = income;
    }
    if (no){
        printf("Ishala next year!");
        return 0;
    }
    printf("yes");
//    int input = 0;
//    scanf("%d", &input);
//    if (input < 10){
//        printf("%d", input);
//        return 0;
//    } else if (input <= (9 + 90 * 2)){
//        input -= 9;
//        int index = (input+1) / 2;
//        int theNumberContaining_k_th_digit = 9 + index;
//        switch (input % 2){
//            case 0:
//                printf("%d", theNumberContaining_k_th_digit % 10);
//                return 0;
//            case 1:
//                printf("%d", theNumberContaining_k_th_digit / 10);
//                return 0;
//        }
//    } else if (input <= (9 + 90 * 2 + 900 * 3)){
//        input -= (9 + 2 * 90);
//        int index = (input + 2) / 3;
//        int theNumberContaining_k_th_digit = 99 + index;
//        switch (input % 3){
//            case 0:
//                printf("%d", theNumberContaining_k_th_digit % 10);
//                return 0;
//            case 1:
//                printf("%d", theNumberContaining_k_th_digit / 100);
//                return 0;
//            case 2:
//                printf("%d", (theNumberContaining_k_th_digit / 10) % 10);
//                return 0;
//        }
//    } else if (input <= (9 + 90 * 2 + 900 * 3 + 9000 * 4)){
//        input -= (9 + 90 * 2 + 900 * 3);
//        int index = (input + 3) / 4;
//        int theNumberContaining_k_th_digit = 999 + index;
//        switch (input % 4){
//            case 0:
//                printf("%d", theNumberContaining_k_th_digit % 10);
//                return  0;
//            case 1:
//                printf("%d", theNumberContaining_k_th_digit / 1000);
//                return 0;
//            case 2:
//                printf("%d", (theNumberContaining_k_th_digit / 100) % 10);
//                return 0;
//            case 3:
//                printf("%d", (theNumberContaining_k_th_digit / 10) % 10);
//        }
//    } else if (input <= (9 + 90 * 2 + 900 * 3 + 9000 * 4 + 90000 * 5)){
//        input -= (9 + 90 * 2 + 900 * 3 + 9000 * 4);
//        int index = (input + 4) / 5;
//        int theNumberContaining_k_th_digit = 9999 + index;
//        switch (input % 5){
//            case 1:
//                printf("%d", theNumberContaining_k_th_digit / 10000);
//                return 0;
//            case 2:
//                printf("%d", (theNumberContaining_k_th_digit / 1000) % 10);
//                return 0;
//            case 3:
//                printf("%d", (theNumberContaining_k_th_digit / 100) % 10);
//                return 0;
//            case 4:
//                printf("%d", (theNumberContaining_k_th_digit / 10) % 10);
//                return 0;
//            case 0:
//                printf("%d", theNumberContaining_k_th_digit % 10);
//                return 0;
//        }
//    } else if (input <= (9 + 90 * 2 + 900 * 3 + 9000 * 4 + 90000 * 5 + 900000 * 6)){
//        input -= (9 + 90 * 2 + 900 * 3 + 9000 * 4 + 90000 * 5);
//        int index = (input + 5) / 6;
//        int theNumberContaining_k_th_digit = 99999 + index;
//        switch (input % 6){
//            case 1:
//                printf("%d", theNumberContaining_k_th_digit / 100000);
//                return 0;
//            case 2:
//                printf("%d", (theNumberContaining_k_th_digit / 10000) % 10);
//                return 0;
//            case 3:
//                printf("%d", (theNumberContaining_k_th_digit / 1000) % 10);
//                return 0;
//            case 4:
//                printf("%d", (theNumberContaining_k_th_digit / 100) % 10);
//                return 0;
//            case 5:
//                printf("%d", (theNumberContaining_k_th_digit / 10)% 10);
//                return 0;
//            case 0:
//                printf("%d", theNumberContaining_k_th_digit % 10);
//                return 0;
//        }
//    }
//    int input = 0;
//    scanf("%d", &input);
//    int i, sum = 0, income = 0;
//    for (i = 0; i < input; i++) {
//        scanf("%d", &income);
//        if (income < 0){
//            sum += (-income);
//        } else{
//            sum += income;
//        }
//    }
//    printf("%d", sum);

    int input = 0;
    scanf("%d", &input);
    int first = 0, second = 0, third = 0;
    int counter = 0;
    for (first = 1; first <= input/3; first++) {
        for(second = first; second <= (input-1)/2; second++){
            third = input - first - second;
            if (third >= second && first + second > third){
                counter++;
            }
        }
    }
    printf("%d\n", counter);

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