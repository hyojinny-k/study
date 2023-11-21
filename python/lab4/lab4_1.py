f1 = open("input.txt", "rt")
f2 = open("output.txt", "wt")
while True:
    row = f1.readline()
    if not row:
        break
    f2.write(row.upper())
f1.close()
f2.close()