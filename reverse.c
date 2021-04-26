int reverse(int x){
    int res = 0;

    if (x == 0 || x < INT_MIN || x > INT_MAX)
        return (res);
    while (x / 10){
        res = res * 10 + x % 10;
        x /= 10;
    }
    if((res > INT_MAX / 10) || ((res == INT_MAX / 10) && (x > 7)))
        return (0);
    else if((res < INT_MIN/10) || ((res == INT_MIN / 10) && (x < -8)))
        return (0);
    return (res * 10 + x);
}