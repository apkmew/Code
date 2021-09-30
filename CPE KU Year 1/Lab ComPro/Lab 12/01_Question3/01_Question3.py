class City:
  Country = {}
  nbCity = 0
  nbCountry = 0
  def __init__(self, city, country, latitude, longitude, temperature):
    self.city = city
    self.country = country
    self.latitude = float(latitude)
    self.longitude = float(longitude)
    self.temperature = float(temperature)
    if country not in City.Country.keys():
      City.Country[country] = []
      City.nbCountry += 1
    City.Country[country].append((city, float(temperature)))
    City.nbCity += 1

f = input('Enter file name: ')
with open(f,'r') as fp :
    fp.readline()
    for line in fp :
        city,cntry,la,lo,te = line.strip().split(',')
        City(city,cntry,la,lo,te)
for cntry in City.Country :
    total = 0
    for tp in City.Country[cntry] :
        total += tp[1]
    print(f'{cntry} {total/len(City.Country[cntry]):.2f}')