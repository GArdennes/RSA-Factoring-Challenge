#!/usr/bin/python3
import sys
import gmpy2

def pollards_rho(n):
    x = gmpy2.random_state(seed=123).mpz_random(n)
    y = x
    c = gmpy2.random_state(seed=456).mpz_random(n)
    d = 1

    while d == 1:
        x = (x * y + c) % n
        y = (y * y + c) % n
        d = gmpy2.gcd(abs(x - y), n)
    return d

def find_prime_factors(n):
    factors = []
    while n != 1:
        factor = pollards_rho(n)
        while n % factor == 0:
            n //=factor
        factors.append(factor)
    return factors

def main():
    with open(sys.argv[1], "r") as file:
        rsa_number_str = file.readline().strip()

    n = gmpy2.mpz(rsa_number_str)
    factors = find_prime_factors(n)
    print("{}={}*{}".format(rsa_number_str, factos[0], factors[1]))

if __name__== "__main__":
    main()
