def print_factors(n):
    factors = []
    for i in range(1, n + 1):
        if n % i == 0:
            factors.append(i)
    print(f"Factors of {n}: {factors}")

# Example Usage:
print_factors(12)
print_factors(100)
