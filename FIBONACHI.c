#include <stdio.h>
int main(){
    int num,fib=0;
    int n1=0,n2=1;
    printf("entre num to find fibonachi ");
    scanf("%d",&num);
    // 0 1 1 2 3 5 8 13 ...
    
    if (num == 1){
        printf("fib = 0");
    }else if (num == 2){
        printf("fib = 1");
    }else{
    for(int i =2; i<num; i++){
    fib = n1 + n2;
    n1 =n2;
    n2 = fib;
    }
    }
    printf("fib = %d",fib);
    
    return 0;
}