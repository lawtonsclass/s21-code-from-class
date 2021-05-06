# get a list from the user
L = []
while True:
  num = int(input('Enter the next number: '))
  if num == -1:
    break
  L = L + [num]

print(L)

# get the min of the list
# initial guess is the first element
min_guess = L[0]
# iterate the list, updating the guess
for x in L:
  # update guess for min if necessary
  if x < min_guess:
    min_guess = x

print('The min is:', min_guess)

#################

def is_prime(x):
  for n in range(2, x):
    if x % n == 0:
      return False
  return True

found_a_proof = False
for y in range(32, 38):
  if is_prime(y):
    print(y)
    found_a_proof = True

print('The statement is', found_a_proof)
