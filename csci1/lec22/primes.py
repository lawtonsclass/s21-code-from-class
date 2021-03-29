# returns True if n is prime, false otherwise
def isPrime(n):
  for x in range(2, n): # try all #s from 2 to n-1
    # if x divides cleanly into n, then n is not prime
    if n % x == 0:
      return False

  # if we get here, then nobody divided into n
  # n was prime!
  return True

i = 51 # first # to try is 51
while not isPrime(i): # keep searching while i is *not* prime
  i = i + 1 # keep looking the next i

# when i finally becomes prime, the loop will stop because
# "not isPrime(i)" will become False

# shout out the # we found
print('The first prime number > 50 is:', i)
