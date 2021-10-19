int Solution::solve(int A, int B) {

    int c = 0;

    c = c + min(8 - A,8 - B);
    c = c + min(8 - A,  B -1);
    c += min(A - 1, 8 - B);
    c += min(A - 1, B - 1);

    return c;
}
