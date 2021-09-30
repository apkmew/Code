class Country:
  nbCountry = 0
  def __init__(self, country, population, EU,coastline):
    self.country = country
    self.population = float(population)
    self.EU = EU
    self.coastline = coastline
    Country.nbCountry += 1

class City:
  nbCity = 0
  def __init__(self, city, country, latitude, longitude, temperature):
    self.city = city
    self.country = country
    self.latitude = float(latitude)
    self.longitude = float(longitude)
    self.temperature = float(temperature)
    City.nbCity += 1

f = input('Enter city file: ')
ct = {}
with open(f,'r') as fp :
    fp.readline()
    for line in fp :
        city,cntry,la,lo,te = line.strip().split(',')
        City(city,cntry,la,lo,te)
        if cntry not in ct : ct[cntry] = []
        ct[cntry].append(float(te))

f = input('Enter country file: ')
print('Average temperature of countries having coastline, but not in EU:')
with open(f,'r') as fp :
    fp.readline()
    for line in fp :
        cntry,pop,eu,coast = line.strip().split(',')
        Country(cntry,pop,eu,coast)
        if coast == 'yes' and eu == 'no' and cntry in ct : 
            print(f'{cntry} {sum(ct[cntry])/len(ct[cntry]):.2f}')