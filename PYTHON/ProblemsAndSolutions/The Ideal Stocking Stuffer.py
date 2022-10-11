#Part-1
text_file = open("./Data/day4.txt")
q = text_file.read()

import hashlib
for i in range(999999):
    key = q+str(i)
    r = hashlib.md5(key.encode())
    if (str(r.hexdigest()).startswith("00000")):
        print(key)
        break

#Part-2
text_file = open("./Data/day4.txt")
q = text_file.read()

import hashlib
for i in range(9999999):
    key = q+str(i)
    r = hashlib.md5(key.encode())
    if (str(r.hexdigest()).startswith("000000")):
        print(key)