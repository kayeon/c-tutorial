
int main() {
  int[] array = {1, 2, 3, 4};
  //int number = 10;
  //int x = factorial(number);
  //printf("The factorial of %d is %d\n", number, x);
  print_array(array, 4, 0);
}

void print_array(int array[], int size, int offset) {
  if (offset == size) {
    return;
  }

  printf("%d,", array[offset]);
  print_array(array, size, offset + 1);
}

// Factorial
// !5 = 5 * 4 * 3 * 2 * 1 = 5 * !4 = 120
// !4 =     4 * 3 * 2 * 1 = 24
// !1 = 1
int factorial(int n) {
  if (n == 1) {
    return 1;
  }

  return n * factorial(n - 1);
}

int factorial_imperative(int n) {
  int tmp = 1;
  for (int i = n; i > 1; i--) {
    tmp *= i;
  }
  return tmp;
}

// Stack
// factorial(10) =
// factorial(9) =
// factorial(8) =
// factorial(7) =
// factorial(6) =
// factorial(5) =
// factorial(4) =
// factorial(3) =
// factorial(2) =
// factorial(1) = 1 pop
