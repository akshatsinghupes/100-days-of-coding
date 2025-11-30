def is_prime(n):
    if n <= 1:
        return False
    i = 2
    # We only need to check up to the square root of n
    while i * i <= n:
        if n % i == 0:
            return False
        i += 1
    return True

# Example Usage:
print(f"Is 11 prime? {is_prime(11)}")
print(f"Is 15 prime? {is_prime(15)}")
print(f"Is 2 prime? {is_prime(2)}")
