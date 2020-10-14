// int c(int n, int r) {
//   if (r == 0 || n == r) {
//     return 1;
//   } else {
//     return c(n - 1, r) + c(n - 1, r - 1);
//   }
// }

int f(int a) { return a ? a * f(a - 1) : 1; }
int fd(int a, int b) { return a == b ? 1 : a * fd(a - 1, b); }

int c(int a, int b) { return fd(a, b) / f(a-b); }
