class City:
    nbCity = 0
    def __init__(s,city,country,lat,long,temp):
        s.city = city; s.country = country; s.lat = lat
        s.long = long; s.temp = temp; City.nbCity += 1
class Country:
    nbCountry = 0
    def __init__(s,cntry,pop,eu,cst):
        s.cntry = cntry; s.pop = pop
        s.eu = eu; s.cst = cst; Country.nbCountry += 1

def readCity():
    myCity = []
    with open('Cities.csv') as fp:
        c = fp.readline()
        for c in fp:
            cc = c.strip().split(',')
            city,country,lat,long,temp = cc[0],cc[1],float(cc[2]),float(cc[3]),float(cc[4])
            myCity.append(City(city,country,lat,long,temp))
        return myCity

def test_readCity(myCity):
    for c in myCity:
        print(c.city,c.country,c.lat,c.long,c.temp)

def readCountry():
    myCountry = []
    with open ('Countries.csv') as fp:
        c = fp.readline()
        for c in fp:
            cc = c.strip().split(',')
            cntry,pop,eu,cst = cc[0],float(cc[1]),cc[2],cc[3]
            myCountry.append(Country(cntry,pop,eu,cst))
    return myCountry

def q01(myCity, myCountry):
    mp = {}
    for i in myCity :
        for j in myCountry :
            if i.country == j.cntry :
                if j.eu == 'yes' and j.cst == 'no' :
                    if j.cntry not in mp : mp[j.cntry] = []
                    mp[j.cntry].append(i.temp)
                else : break
    for i in mp :
        print(f'{i}: {sum(mp[i])/len(mp[i]):.2f}')

def q02(myCity, myCountry):
    mp = {}
    for i in myCity :
        for j in myCountry :
            if i.country == j.cntry :
                if j.eu == 'no' :
                    if j.cntry not in mp : mp[j.cntry] = []
                    mp[j.cntry].append(i.temp)
                else : break
    mn,mx = 2e9,-2e9
    mnn,mxx = '',''
    for i in mp :
        avg = sum(mp[i])/len(mp[i])
        if avg > mx : 
            mx = avg
            mxx = i
        if avg < mn :
            mn = avg
            mnn = i
    print(f'The highest average city temperature: {mxx} ({mx:.2f})')
    print(f'The lowest average city temperature: {mnn} ({mn:.2f})')

### main begins here
myCity = readCity()
myCountry = readCountry()
q01(myCity, myCountry)
q02(myCity, myCountry)