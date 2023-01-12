file = open('lineread.py', 'r')
# Lines = file.readlines()

for line in file:
    print(line.strip())

file.close()
