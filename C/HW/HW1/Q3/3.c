#include <stdio.h>
int main(){
    int numOfActivities = 0;
    char firstCode = '0', secondCode = '0', thirdCode = '0';
    int arrivalToBank = 0, arrivalToCompany = 0, holdingTime = 0;
    char temp = '0';
    scanf("%d ", &numOfActivities);
    if (numOfActivities == 1){
        scanf("%c ", &firstCode);
        if (firstCode == '3'){
            holdingTime += (40 * 60) + 10;
        } else if (firstCode == '8'){
            holdingTime += (15 * 60) + 42;
        } else if (firstCode == 'c'){
            holdingTime += (25 * 60) + 13;
        }
        scanf("%c", &temp);
        arrivalToBank += ((int)temp - 48) * 10 * 3600;
        scanf("%c:", &temp);
        arrivalToBank += ((int)temp - 48) * 3600;
        scanf("%c", &temp);
        arrivalToBank += ((int)temp - 48) * 10 * 60;
        scanf("%c:", &temp);
        arrivalToBank += ((int) temp -48) * 60;
        scanf("%c", &temp);
        arrivalToBank += ((int)temp - 48) * 10;
        scanf("%c ", &temp);
        arrivalToBank += ((int)temp - 48);
        scanf("%c", &temp);
        arrivalToCompany += ((int)temp - 48) * 10 * 3600;
        scanf("%c:", &temp);
        arrivalToCompany += ((int)temp - 48) * 3600;
        scanf("%c", &temp);
        arrivalToCompany += ((int)temp - 48) * 10 * 60;
        scanf("%c:", &temp);
        arrivalToCompany += ((int) temp -48) * 60;
        scanf("%c", &temp);
        arrivalToCompany += ((int)temp - 48) * 10;
        scanf("%c", &temp);
        arrivalToCompany += ((int)temp - 48);
        if (arrivalToBank + holdingTime + 10 * 60 <= arrivalToCompany){
            printf("Be quick!!");
        } else{
            printf("Ishala next day!");
        }
    } else if (numOfActivities == 2){
        scanf("%c ", &firstCode);
        scanf("%c ", &secondCode);
        if (firstCode == '3'){
            holdingTime += (40 * 60) + 10;
        } else if (firstCode == '8'){
            holdingTime += (15 * 60) + 42;
        } else if (firstCode == 'c'){
            holdingTime += (25 * 60) + 13;
        }
        if (secondCode == '3'){
            holdingTime += (40 * 60) + 10;
        } else if (secondCode == '8'){
            holdingTime += (15 * 60) + 42;
        } else if (secondCode == 'c'){
            holdingTime += (25 * 60) + 13;
        }
        scanf("%c", &temp);
        arrivalToBank += ((int)temp - 48) * 10 * 3600;
        scanf("%c:", &temp);
        arrivalToBank += ((int)temp - 48) * 3600;
        scanf("%c", &temp);
        arrivalToBank += ((int)temp - 48) * 10 * 60;
        scanf("%c:", &temp);
        arrivalToBank += ((int) temp -48) * 60;
        scanf("%c", &temp);
        arrivalToBank += ((int)temp - 48) * 10;
        scanf("%c ", &temp);
        arrivalToBank += ((int)temp - 48);
        scanf("%c", &temp);
        arrivalToCompany += ((int)temp - 48) * 10 * 3600;
        scanf("%c:", &temp);
        arrivalToCompany += ((int)temp - 48) * 3600;
        scanf("%c", &temp);
        arrivalToCompany += ((int)temp - 48) * 10 * 60;
        scanf("%c:", &temp);
        arrivalToCompany += ((int) temp -48) * 60;
        scanf("%c", &temp);
        arrivalToCompany += ((int)temp - 48) * 10;
        scanf("%c", &temp);
        arrivalToCompany += ((int)temp - 48);
        if (arrivalToBank + holdingTime + 10 * 60 <= arrivalToCompany){
            printf("Be quick!!");
        } else{
            printf("Ishala next day!");
        }
    } else if (numOfActivities == 3){
        scanf("%c ", &firstCode);
        scanf("%c ", &secondCode);
        scanf("%c ", &thirdCode);
        if (firstCode == '3'){
            holdingTime += (40 * 60) + 10;
        } else if (firstCode == '8'){
            holdingTime += (15 * 60) + 42;
        } else if (firstCode == 'c'){
            holdingTime += (25 * 60) + 13;
        }
        if (secondCode == '3'){
            holdingTime += (40 * 60) + 10;
        } else if (secondCode == '8'){
            holdingTime += (15 * 60) + 42;
        } else if (secondCode == 'c'){
            holdingTime += (25 * 60) + 13;
        }
        if (thirdCode == '3'){
            holdingTime += (40 * 60) + 10;
        } else if (thirdCode == '8'){
            holdingTime += (15 * 60) + 42;
        } else if (thirdCode == 'c'){
            holdingTime += (25 * 60) + 13;
        }
        scanf("%c", &temp);
        arrivalToBank += ((int)temp - 48) * 10 * 3600;
        scanf("%c:", &temp);
        arrivalToBank += ((int)temp - 48) * 3600;
        scanf("%c", &temp);
        arrivalToBank += ((int)temp - 48) * 10 * 60;
        scanf("%c:", &temp);
        arrivalToBank += ((int) temp -48) * 60;
        scanf("%c", &temp);
        arrivalToBank += ((int)temp - 48) * 10;
        scanf("%c ", &temp);
        arrivalToBank += ((int)temp - 48);
        scanf("%c", &temp);
        arrivalToCompany += ((int)temp - 48) * 10 * 3600;
        scanf("%c:", &temp);
        arrivalToCompany += ((int)temp - 48) * 3600;
        scanf("%c", &temp);
        arrivalToCompany += ((int)temp - 48) * 10 * 60;
        scanf("%c:", &temp);
        arrivalToCompany += ((int) temp -48) * 60;
        scanf("%c", &temp);
        arrivalToCompany += ((int)temp - 48) * 10;
        scanf("%c", &temp);
        arrivalToCompany += ((int)temp - 48);
        if (arrivalToBank + holdingTime + 10 * 60 <= arrivalToCompany){
            printf("Be quick!!");
        } else{
            printf("Ishala next day!");
        }
    }
}
