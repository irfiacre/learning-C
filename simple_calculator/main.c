#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get_number(){
  int numb;
  printf("Enter The Number: ");
  scanf("%d",&numb);
  return numb;
}

char validate_operator(char operation){
  if (strcmp(operation,"+") == 0){
    return operation;
  }else if(strcmp(operation,"-") == 0){
    return operation;
  } else if(strcmp(operation,"*") == 0){
    return operation;
  } else if(strcmp(operation,"/") == 0){
    return operation;
  } else{
    printf("Invalid Operator");
    exit(0);
  }
}

int main() {
  char operation_char;
  printf("Choose an operator between `+, -, *, /` :");
  scanf("%c",&operation_char);

char valid_operator = validate_operator(operation_char);

  int numb1 = get_number();
  int numb2 = get_number();
  float result;
  switch (valid_operator) {
    case '+':
      result = numb1 + numb2;
      printf("The Result is %f \n", result);
      break;
    case '-':
      result = numb1 - numb2;
      printf("The Result is %f \n", result);
      break;
    case '*':
      result = numb1 * numb2;
      printf("The Result is %f \n", result);
      break;
    case '/':
      result = numb1 / numb2;
      printf("The Result is %f \n", result);
      break;
    default:
      printf("Please select a specified operator \n");
      break;
  }
  return 0;
}
