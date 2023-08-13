def split_strings(strings):
    first_half = []
    second_half = []
    
    for string in strings:
        length = len(string)
        half_length = length // 2
        first_half.append(string[:half_length])
        second_half.append(string[half_length:])
    
    return first_half, second_half

strings = ["Hello", "World", "Python", "Programming"]
first_half_list, second_half_list = split_strings(strings)

print("First Half List:", first_half_list)
print("Second Half List:", second_half_list)