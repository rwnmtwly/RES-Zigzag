def find_second_largest_smallest(numbers):
    if len(numbers) < 2:
        return None, None

    largest = second_largest = float('-inf')
    smallest = second_smallest = float('inf')

    for num in numbers:
        if num > largest:
            second_largest = largest
            largest = num
        elif num > second_largest and num != largest:
            second_largest = num

        if num < smallest:
            second_smallest = smallest
            smallest = num
        elif num < second_smallest and num != smallest:
            second_smallest = num

    return second_largest, second_smallest


numbers = [10, 5, 7, 2, 9, 3]


second_largest, second_smallest = find_second_largest_smallest(numbers)


print("Second largest number:", second_largest)
print("Second smallest number:", second_smallest)