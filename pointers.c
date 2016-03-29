#include <stdio.h>

int main() {
  //pointer_example_one();

  int x = 5;

  int* ptr = &x;
  *ptr = 15;
  pointer_example_two(ptr);
  printf("x is now %d", x);
}

void pointer_example_two(int* y) {
  *y = 10;
}

void pointer_example_one() {
  int x[5] = {1, 7, 3, 4, 5};

  printf("the size of int is %lu\n", sizeof(int));

  printf("x[0] is %d\n", x[0]);

  for (int i = 0; i < 5; i++) {
    printf("x[%d]'s address is %p and the value is %d\n", i, &x[i], x[i]);
  }

  int* ptr = &x[0];
  printf("ptr's value is %p and it points to a value of %d\n", ptr, *ptr);

  ptr = ptr + 5;
  printf("ptr's value is %p and it points to a value of %d\n", ptr, *ptr);
}
