grade = float(input('Enter grade: '))

# calculate the grade
if grade >= 90: # first condition tried
  print('A')
else:
  # this is a "nested" if-else
  if grade >= 70: # second condition tried
    print('C')
  else:
    print('F')


# calculate the grade (using elif)
if grade >= 90: # first condition tried
  print('A')
elif grade >= 70: # second condition tried
  print('C')
else:
  print('F')
