def encrypt_char(c):
  chars = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
  encrypted_chars = ['N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M']

  # find index of c in chars
  idx = -1
  for i in range(len(chars)):
    if chars[i] == c:
      idx = i

  return encrypted_chars[idx]


def rot13(s):
  result = ""
  
  # go through each character of s
  for c in s:
    result = result + encrypt_char(c)

  return result


print(rot13('HELLO'))
print(rot13(rot13('HELLO')))
