class City:
  nbCity = 0
  def __init__(self, city, country, latitude, longitude, temperature):
    self.city = city
    self.country = country
    self.latitude = float(latitude)
    self.longitude = float(longitude)
    self.temperature = float(temperature)
    City.nbCity += 1

f = input('Enter file name: ')
with open(f,'r') as fp :
    header = fp.readline().strip().split(',')
    classes = list()
    for line in fp :
        city,cntry,la,lo,temp = line.strip().split(',')
        classes.append(City(city,cntry,la,lo,temp))
mx,mn,total = -1,1000,0
for i in classes :
    mn = min(mn,i.temperature)
    mx = max(mx,i.temperature)
    total += i.temperature
print(f'Minimum: {mn:.2f}')
print(f'Maximum: {mx:.2f}')
print(f'Average temperature: {total/City.nbCity:.4f}')