# #!/usr/bin/python3
# from datetime import date
# #f1 = open("uber.dat", "rt")
# f1 = open("uber_exp.txt", "rt")
# f2 = open("uberoutput.txt", "wt")
# days = ['MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT', 'SUN']
# result = []
# while True:
#     row = f1.readline().replace("\n", "")
#     if not row:
#         break
#     line = row.split(',')
#     temp_date = line[1].split('/')
#     m = int(temp_date[0])
#     d = int(temp_date[1])
#     y = int(temp_date[2])
#     day = date(y, m, d).weekday()
#     line[1] = days[day]
#     result.append(line)
#
# result.sort()
# i = 1
# while True:
#     # f2.write(r)
#     if result[i][0] == result[i - 1][0] and result[i][1] == result[i - 1][1]:
#         result[i][2] = int(result[i][2]) + int(result[i-1][2])
#         result[i][3] = int(result[i][3]) + int(result[i-1][3])
#         del result[i-1]
#     else:
#         i += 1
#     if i == len(result):
#         break
# for r in result:
#     f2.write(r[0] + ',' + r[1] + ' ' + str(r[2]) + ',' + str(r[3]) + '\n')
# f1.close()
# f2.close()

import sys
import datetime

def getDay(month, date, year):
    r = ['MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT', 'SUN']
    return r[datetime.date(int(year), int(month), int(date)).weekday()]


dic = dict()
valDic = dict()
with open("uber_exp.txt", "rt") as f1:
    for line in f1:
        list = line.strip('\n').split(',')

        dayList = list[1].split('/')
        key = list[0] + "," + getDay(dayList[0], dayList[1], dayList[2])

        if key not in dic:
            dic[key] = list[2] + "," + list[3]
        else:
            tList = dic[key].split(',')
            temp1 = int(tList[0]) + int(list[2])
            temp2 = int(tList[1]) + int(list[3])
            dic[key] = str(temp1) + "," + str(temp2)

with open("uberoutput2.txt", "wt") as f2:
    for k in dic.keys():
        f2.write(k + " " + dic[k] + "\n")

f1.close()
f2.close()