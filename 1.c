#include <stdio.h>

int main() {
    float principle,rate,time,SI;
    printf("enter principle amount:");
    scanf("%f",&principle);
    
    printf("enter rate of intrest:");
    scanf("%f", &rate);
    printf("enter time:");
    scanf("%f", &time);
    SI=(principle*rate*time)/100;
    printf("SI is %f", SI);
    return 0;
    
}
