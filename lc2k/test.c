int c(int n, int r);

int main() { c(14, 7); }

int c(int n, int r) {
  if (r == 0 || n == r) {
    return 1;
  } else {
    return c(n - 1, r) + c(n - 1, r - 1);
  }
}
