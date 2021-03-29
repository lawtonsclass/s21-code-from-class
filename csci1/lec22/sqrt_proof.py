import math # for math.sqrt

is_true = True # let's guess that our theorem is true
# (until we find a counterexample)

for i in range(101): # try every i between 0 and 100
  if math.sqrt(i) > 10:
    is_true = False

# if we got through the loop without ever finding a counterexample,
# is_true will still be True!
print(str(is_true) + "!")
    
