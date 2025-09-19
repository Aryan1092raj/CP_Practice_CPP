def reverse_number (num) :
    reversed_number = int(str(num)[::-1])
    return reversed_number
num = reverse_number(10000)
print(num)