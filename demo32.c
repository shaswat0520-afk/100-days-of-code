def is_palindrome(n: int) -> bool:
    # Negative numbers and numbers ending in 0 (except 0 itself) are not palindromes
    if n < 0 or (n % 10 == 0 and n != 0):
        return False

    original = n
    reversed_num = 0

    while n > 0:
        last_digit = n % 10
        reversed_num = (reversed_num * 10) + last_digit
        n //= 10

    return original == reversed_num


# Test cases
test_numbers = [121, -121, 10, 1331, 0, 4554, 123]

for num in test_numbers:
    print(f"{num}: {is_palindrome(num)}")
