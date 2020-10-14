int c(int n, int r) {
  if (r == 0 || n == r) {
    return 1;
  } else {
    return c(n - 1, r) + c(n - 1, r - 1);
  }
}

// int c(int a, int b){
//   if (a) return b + c(a-1, b);
//   return 0;
// }

// int c(int a) { return a ? a * c(a - 1) : 1; }
// int c(int a) { if(a) return a * c(a - 1); return 1; }
