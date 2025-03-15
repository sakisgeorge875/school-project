  int main() {
    int x = 5;
    while(x > 0) {
      if(x % 2 == 0) {
        x = x / 2;
      } else {
        x = x * 3 + 1;
      }
      printf("%d\n", x);
    }
    return 0;
  }