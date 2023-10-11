def find_number(target=44):
    # Starting from the minimum possible 32-bit integer
    x = -2**31

    # Iterating through every negative number
    while x < 0:
        # If multiplying by 4 and taking modulo 2^32 gives the target, return x
        if (x * 4) & 0xFFFFFFFF == target:
            return x
        x += 1

    return None

result = find_number()
if result:
    print(f"The number {result} when multiplied by 4 overflows to {result*4 & 0xFFFFFFFF}")
else:
    print("No such number found.")