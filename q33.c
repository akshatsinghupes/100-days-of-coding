def is_armstrong(n):
    num_str = str(n)
    num_digits = len(num_str)
    temp = n
    sum_of_powers = 0
    while temp > 0:
        digit = temp % 10
        sum_of_powers += digit ** num_digits
        temp //= 10
    return sum_of_powers == n

# Example Usage:
print(f"Is 153 an Armstrong number? {is_armstrong(153)}")
print(f"Is 9 an Armstrong number? {is_armstrong(9)}")
print(f"Is 123 an Armstrong number? {is_armstrong(123)}")
