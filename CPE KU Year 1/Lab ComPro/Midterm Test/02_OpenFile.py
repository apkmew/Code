with open('midTermScore_grp01.csv', 'r') as fp:
  i, header = 0, fp.readline().strip()
  mp = {'A':0,'B+':0,'B':0,'C+':0,'C':0,'D+':0,'D':0,'F':0}
  total_score = []
  for line in fp:
    a = line.split(',')
    if a[0] != '01204111 Midterm Examination 2564-1' : continue
    score = int(a[-3])
    pc = float(a[-2])
    total_score.append(score)
    if pc > 85 : mp['A'] += 1
    elif pc > 79 : mp['B+'] += 1
    elif pc > 73 : mp['B'] += 1
    elif pc > 67 : mp['C+'] += 1
    elif pc > 60 : mp['C'] += 1
    elif pc > 50 : mp['D+'] += 1
    elif pc > 40 : mp['D'] += 1
    else : mp['F'] += 1
    i += 1
print(i)
mean = sum(total_score)/i
total = 0
for score in total_score :
  total += (score-mean)**2
sd = (total/i)**(1/2)
mx = max(total_score)
mn = min(total_score)
print(f'{mx} {mean:.2f} {sd:.2f} {mn}')
for grade in mp :
  print(f'{grade}: {mp[grade]}')