def sum_of_digits(n, array):
    total_sum = 0
    for digit in array:
        total_sum += digit
    return total_sum


N = 5
A = [1, 2, 3, 4, 5]

result = sum_of_digits(N, A)

print("Summation of digits:", result)