import re
planets = input()
planets = re.findall(r'[A-z]+',planets)
idx = planets.index('Sun')
hot,cool = '',''
if idx != 0 : hot += ' ' + planets[idx-1]
if idx != len(planets)-1 : hot += ' ' + planets[idx+1]
mx = max(idx,len(planets)-1-idx)
if idx == mx : cool += ' ' + planets[0]
if len(planets)-1-idx == mx : cool += ' ' + planets[len(planets)-1]
print('Hot:' + hot)
print('Cool:' + cool)
#Mercury Venus Earth Mars Sun Jupiter Saturn Uranus Neptune