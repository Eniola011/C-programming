#!/usr/bin/python3
# ---------- FILTER ----------
# Filter selects items from a list based on a function

# Print out the even values from a list
print(list(filter((lambda x: x % 2 == 0), range(1, 11))))