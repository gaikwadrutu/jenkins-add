#include<stdio.h>

int add(int n1, int n2){    
    int sum;
    sum = n1 + n2;
    printf("Addition = %d\n", sum);    
}

void main(){  
  int n1, n2;
  printf("Enter first value: ");
  scanf("%d", &n1);
  
  printf("Enter second value: ");
  scanf("%d", &n2);
  
  add(n1, n2);
}
