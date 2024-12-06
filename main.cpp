double my_pow(double x, unsigned int power) {
    for (int i = 1; i < power; i++) {
        x *= x;
    }
    return x;
}