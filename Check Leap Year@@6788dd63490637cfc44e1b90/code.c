#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int year;
    scanf("%d", year);

    if (year%400==0){
        if (year%100==0){
            if y(year%4==0) {
                printf("Leap Year");
            }
            else {
                printf("Not a Leap year");
            }
        }
        else {
            printf("Not a Leap Year");
        }
    } else {
        printf("Not a Leap Year");
    }

    return 0;
}