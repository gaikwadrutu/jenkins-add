#include<stdio.h>

int add(int n1, int n2){    
    int sum;
    sum = n1 + n2;
    printf("First value: 64 & Second value: 89");
    printf("\nAddition = %d\n", sum);    
}

void main(){  
  int n1 = 64, n2 = 89;
  add(n1, n2);
}
