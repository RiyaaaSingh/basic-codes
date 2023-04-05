#include<stdio.h>
int main() {
  double first, second, temp;
  printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);

  temp = first;

  first = second;

  second = temp;

  printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
  return 0;
}




OUTPUT
Enter first number: 1.2
Enter second number: 2.4

After swapping, first number = 2.40
After swapping, second number = 1.20
