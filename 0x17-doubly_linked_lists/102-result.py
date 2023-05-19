#!/usr/bin/python3
max_palind = 0
for num in range(100, 1000):
    for num2 in range(100, 1000):
        result = num * num2
        rev = 0
        n_number = result
        while result > 0:
            remainder = result % 10
            result = int(result / 10)
            rev = (rev * 10) + remainder
        if n_number == rev:
            if n_number > max_palind:
                max_palind = n_number
print(max_palind)
