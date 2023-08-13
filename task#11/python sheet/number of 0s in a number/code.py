def count_zeros(number):
    count = 0
    while number > 0:
        digit = number % 10
        if digit == 0:
            count += 1
        number //= 10
    return count

number = int(input("Enter a number: "))

zeros_count = count_zeros(number)

print(f"The number of zeros in {number} is: {zeros_count}")