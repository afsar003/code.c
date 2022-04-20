#include <stdio.h>
void main()
{
  char operator;
  int num1,num2;
  printf(“\n Enter the operator (+, -, *, /):”);
  scanf(“%c”,&operator);
  printf(“\n Enter the Two numbers:”);
  scanf(“%d%d”,&num1,&num2);
  
  switch (operator)
  {
  
    case ‘+’:
    printf(“%d+%d=%d”,num1,num2,num1+num2);
    break;
    
    case ‘-‘:
    printf(“%d-%d=%d”,num1,num2,num1-num2);
    break;
    
    case ‘*’:
    printf(“%d*%d=%d”,num1,num2,num1*num2);
    break;
    
    case ‘/’:
    printf(“%d / %d = %d”,num1,num2,num1/num2);
    break;
    
    
    default:
    printf(“\n Enter the operator only”);
    break;
}
  return 0;
}
