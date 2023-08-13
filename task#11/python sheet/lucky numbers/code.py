def is_lucky_number(num):
    for digit in str(num):
        if digit != '4' and digit != '7':
            return False
    return True

def get_lucky_numbers(a, b):
    lucky_numbers = []
    for num in range(a, b + 1):
        if is_lucky_number(num):
            lucky_numbers.append(str(num))
    return lucky_numbers

A = 1
B = 10
lucky_nums = get_lucky_numbers(A, B)

if len(lucky_nums) > 0:
    print("Lucky numbers between", A, "and", B, "are:", " ".join(lucky_nums))
else:
    print("-1")