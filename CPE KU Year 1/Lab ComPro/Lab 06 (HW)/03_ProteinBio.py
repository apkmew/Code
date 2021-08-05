dna = input('DNA: ')
rna = ''
for x in dna : 
    if x == 'A' : x = 'U'
    elif x == 'C' : x = 'G'
    elif x == 'G' : x = 'C'
    elif x == 'T' : x = 'A'
    rna = rna + x
st = rna.find('AUG')
en = -1
for i in range(st,len(rna),3) :
    if rna[i] == 'U' and rna[i+1] == 'A' and rna[i+2] == 'A' : en = i
    elif rna[i] == 'U' and rna[i+1] == 'A' and rna[i+2] == 'G' : en = i
    elif rna[i] == 'U' and rna[i+1] == 'G' and rna[i+2] == 'A' : en = i
    if en != -1 : break
ans = (en-st)//3
print(f'{ans} Amino acid(s)')
