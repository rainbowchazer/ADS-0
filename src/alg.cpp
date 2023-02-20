// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    while (a != 0 && b != 0) {
        if (b > a)
            b = b % a;
        else 
            a = a % b;
    }
    return (a + b);
}
