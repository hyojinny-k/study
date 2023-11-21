score = input('5개의 성적을 입력하세요(각 값은 공백으로 분리): ').split(' ')
for i in range(0, 5):
    score[i] = int(score[i])

score2 = sorted(score)
print(score2)