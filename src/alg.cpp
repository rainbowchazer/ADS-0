// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int min;
    if (a >= b)
        min = b;
    else 
        min = a;
    for (int i = min; i > 0; i--) {
        if ((b % i) == 0 && (a % i) == 0)
            return i;
    }
}
