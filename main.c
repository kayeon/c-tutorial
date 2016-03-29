
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

  printf("hello world");
  return 0;
}
