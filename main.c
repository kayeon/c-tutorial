
#include <stdio.h>

typedef int josh_int;

typedef struct {
  int x;
  int y;
} position;

int main() {

  position p;

  p.x = 5;
  p.y = 10;

  position* p_ptr = &p;

  (*p_ptr).x = 10; // dereference (star) and get the property (dot)
  p_ptr->x = 10;   // dereference and get property (arrow)

  int arr[5] = {1, 2, 3, 4, 5};

  arr[4] = 10;
  *(arr + 4) = 10;

  int* a_ptr = &arr[0];
  a_ptr[3] = 15;
  *(a_ptr + 3) = 15;

  if (a_ptr == arr) {
    printf("a_ptr and arr are both %p", arr);
  }

  printf("hello world");
  return 0;
}
