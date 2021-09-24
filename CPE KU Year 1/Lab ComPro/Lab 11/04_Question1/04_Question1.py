class Country:
  nbCountry = 0
  def __init__(self, country, population, EU,coastline):
    self.country = country
    self.population = float(population)
    self.EU = EU
    self.coastline = coastline
    Country.nbCountry += 1

f = input('Enter File name: ')
classes = list()
with open (f,'r') as fp :
    header = fp.readline()
    for line in fp :
        cntry,pop,eu,cst = line.strip().split(',')
        classes.append(Country(cntry,pop,eu,cst))
for i in classes :
    if i.EU == 'no' and i.coastline == 'yes' :
        print(i.country,i.population)