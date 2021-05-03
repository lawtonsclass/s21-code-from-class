def fact(n):
  # base case
  if n == 1:
    return 1
  else: # recursive case!
    x = fact(n - 1) # <-- this is the "recursive call"
    # the answer is n * (n-1)!
    return n * x

print(fact(5))
    
def pow(n, m):
  if m == 0: # base case
    return 1
  else: # recursive case
    return n * pow(n, m-1)

print(pow(2.5, 5))

def sum_divide_and_conquer(L):
  if len(L) == 0: # base case 1
    return 0
  elif len(L) == 1: # base case 2
    return L[0]
  else: # recursive case
    # first, divide the list L into two halves
    midpoint = len(L) // 2
    first_half = L[:midpoint]
    second_half = L[midpoint:]
    # let's recursively "conquer" the two halves!
    first_half_sum = sum_divide_and_conquer(first_half)
    second_half_sum = sum_divide_and_conquer(second_half)
    # final answer is the sum of both halves
    return first_half_sum + second_half_sum

print(sum_divide_and_conquer([8, 6, 7, 5, 3, 0, 9, 2]))
