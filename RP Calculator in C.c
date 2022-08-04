//RP Calculator in C

#include <stdio.h>

float points(char grade){
    switch(grade){
        case 'A':
        case 'a':
            return 20;
        case 'B':
        case 'b':
            return 17.5;
        case 'C':
        case 'c':
            return 15;
        case 'D':
        case 'd':
            return 12.5;
        case 'E':
        case 'e':
            return 10;
        case 'S':
        case 's':
            return 5;
        case 'U':
        case 'u':
            return 0;
    }
}

int main(){
    float sum = 0;
    char grade;
    for (int i = 1; i <= 6; i++){
        if (i <=4){
            switch(i){
                case 1:
                    printf("1st ");
                    break;
                case 2:
                    printf("2nd ");
                    break;
                case 3:
                    printf("3rd ");
                    break;
                case 4:
                    printf("H1/4th ");
                    break;
            }
            printf("H2: ");
        }
        else{
            switch(i){
                case 5:
                    printf("GP: ");
                    break;
                case 6:
                    printf("PW: ");
                    break;
            }
        }
        scanf(" %c", &grade);
        if (i > 3){
            sum += points(grade)/2;
        }
        else{
            sum += points(grade);
        }
    }
    
    printf("%.2f", sum);
    exit(0);
}