num = '901231-1914983'
birth = num[:2]
if num[7] == '1' or num[7] == '3':
    gender = '남자'
else:
    gender = '여자'
print("%s년생 %s" % (birth, gender))