total = 0
count = 0

f = open("mbox-short.txt", "rt")
while True:
    row = f.readline()
    if not row:
        break
    if row.startswith("X-DSPAM-Confidence: "):
        total += float(row[20:])
        count += float(1)

avg = total / count
print(avg)

f.close()