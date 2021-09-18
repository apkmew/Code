import csv
maxx = -1
minn = 1e9

def read_csv(filename):
    with open(filename) as f:
        global maxx , minn
        datas = csv.reader(f)
        data = [ i for i in datas]
        for i in range(1,len(data)) :
            maxx = max(maxx,int(data[i][6]))
            minn = min(minn,int(data[i][7]))
    return data

class Std :
    def __init__(self,id,gender,race,parental_level_of_education,lunch,test_preparation_course,math_score,reading_score,writing_score) :
        self.id = id
        self.gender = gender
        self.race = race
        self.parent = parental_level_of_education
        self.lunch = lunch
        self.test = test_preparation_course
        self.math = math_score
        self.read = reading_score
        self.write = writing_score
    def __str__(self) :
        return f'math score : {self.math}, reading score : {self.read}, writing score : {self.write}'
    def show_data(self) :
        print(f'gender : {self.gender}')
        print(f'race/ethnicity : {self.race}')
        print(f'parental level of education : {self.parent}')
        print(f'lunch : {self.lunch}')
        print(f'test preparation course : {self.test}')
        print(f'math score : {self.math}')
        print(f'reading score : {self.read}')
        print(f'writing score : {self.write}')
    def less_from_max_math_score(self) :
        print(f'less than max : {maxx-int(self.math)}')
    def more_from_min_reading_score(self) :
        print(f'more than min : {int(self.read)-minn}')
    def can_pass(self) :
        total = int(self.math) + int(self.read) + int(self.write)
        if total > 240 : print('Can pass')
        else : print('Can\'t pass')

filename = input("Filename : ")
datas = read_csv(filename)
classes = list()
for i in range(1,len(datas)) :
    data = Std(datas[i][0],datas[i][1],datas[i][2],datas[i][3],datas[i][4],datas[i][5],datas[i][6],datas[i][7],datas[i][8])
    classes.append(data)
menu = int(input("Menu : "))
id = input("ID : ")
for i in classes :
    if i.id == id :
        if menu == 1 : # show data
            i.show_data()
        elif menu == 2 : # less_from_max_math_score
            i.less_from_max_math_score()
        elif menu == 3 : # more_from_min_reading_score
            i.more_from_min_reading_score()
        elif menu == 4: # can_pass
            i.can_pass()
        elif menu == 5: # print
            print(i)
        break
#StudentsPerformance.csv