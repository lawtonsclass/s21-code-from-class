height = float(input('What is your height in inches? '))

if height >= 48:
  print('You can ride the ride!')
else:
  print("You can't ride the ride!")


grade = float(input('Enter your grade percentage: '))

if grade >= 90.0:
  print("A")
elif grade >= 80.0:
  print("B")
elif grade >= 70.0:
  print("C")
elif grade >= 60.0:
  print("D")
else:
  print("F")
