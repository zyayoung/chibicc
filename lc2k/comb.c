int f(int a) { return a ? a * f(a - 1) : 1; }
int fd(int a, int b) { return a == b ? 1 : a * fd(a - 1, b); }

int c(int a, int b) { return fd(a, b) / f(a-b); }
