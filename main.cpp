double my_pow(double x, int power) {
    double result = 1;
    if (power < 0) {
        power = -power;
        for (int i = 0; i < power; i++)
            result *= x;
        return 1 / result;
    }
    else {
        
        for (int i = 0; i < power; i++) {
            result *= x;
        }
        return result;
    }
}