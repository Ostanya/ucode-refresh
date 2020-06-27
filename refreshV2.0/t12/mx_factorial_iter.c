int mx_factorial_iter(int n) {
    int res = 1;

    if (n > 0) {
        for (int i = 2; i <= n; i++) {
            res *= i;
            if (res > 2147483647 || res < 0)
                return 0;
        }
    }
    return res;
}
