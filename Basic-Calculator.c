#include <stdio.h>

int main() {

  char calc;
  double first, second;

  printf("Choose Operator (+, -, *, /): ");
  scanf("%c", &calc);

  printf("First Value: ");
  scanf("%lf", &first);
  
  printf("Second Value: ");
  scanf("%lf", &second);

  switch (calc) {

    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;

    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;

    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;

    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;

    default:
      printf("Error! operator not found");

  }

  return 0;
}