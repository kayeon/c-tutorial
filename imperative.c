int main() {
  int x = add(2,4);
  printf("the answer is %d", x);
}

int add(int x, int y) {
  printf("adding %d and %d\n", x, y);
  return x + y;
}
