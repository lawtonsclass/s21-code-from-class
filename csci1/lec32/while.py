i = 1
while i <= 10:
  if i == 7:
    # stop the loop early
    break
  
  print(i)
  i = i + 1


# repeatedly get a number from the user
# if it's -1, we're done getting numbers
# keep track of the sum of the numbers we've seen

sum = 0
while True:
  num = int(input('Enter the next number: '))

  # if we see -1, we're done
  if num == -1:
    break
  
  sum = sum + num

# when we exit the loop, we have the sum
print('The sum is', sum)
