#include <stdio.h>

int main(void) {

  int num, remain, octal[5];
  int length = sizeof(octal) / sizeof(octal[0]);

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &num);

  for (int i=0; i<length; i++) {
    remain = num % 8;
    num = num / 8;
    octal[i] = remain;
  }

  printf("In octal, your number is: ");

  for (int j=length-1; j>=0; j--) {
    printf("%d", octal[j]);
  }

  printf("\n");

  return 0;

}
