def get_unique_elements(lst):
    unique_lst = []
    for element in lst:
        if element not in unique_lst:
            unique_lst.append(element)
    return unique_lst


my_list = [3, 5, 5, 3, 7, 7, 7, 9, 9]
print(my_list)
print("")


unique_list = get_unique_elements(my_list)


print("Unique elements:", unique_list)