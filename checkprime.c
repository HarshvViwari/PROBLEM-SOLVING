#include <stdio.h>

int main() {
    int num, temp;
    printf("entre num to check ");
    scanf("%d",&num);
    for (int i=2; i< num; i++){
        if (num % i == 0){
            printf("it is not a prime number  ");
        return 0;
        }
        
    }
    printf("its a prime ");
    
    return 0;
}