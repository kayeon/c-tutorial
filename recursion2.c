
void recur(int);

int main() {
  int x = 5 + 4;
  recur(5);
}

void recur(int n) {
  if (n <= 0) {
    return;
  }

  printf("push %d onto stack\n", n);
  recur(n - 1);
  printf("pop %d off stack\n", n);
}
