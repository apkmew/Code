myclass = LabPhysI('ชื่อนิสิต')
class LabPhysI:
    def __init__(self, name):
        self.name = name     
    def say_hi(self):
        print('Hello,', self.name + '!, welcome to our Physics Lab')
    def instructor(self):
        instructor = 'Dr. Adisak Boonchun'
        print(instructor)        
    def line(self):
        line = 'https://line.me/R/ti/g/JmnMqsVUyE'
        print(line)
    def assignment(self):
        google_classroom = 'https://classroom.google.com/c/MzY1MzIzNDgzNzEx?cjc=anqxhb5'
        print(google_classroom)
    def sec(self):
        print(self.name + ', your sec is 35.')        
    def book(self):
        print(self.name + ', two books are requires: 01420113 and datasheet')
    def get_book(self):
        print('Dear,', self.name + ', you can buy lab books from shopee: \n https://shopee.co.th/shop/450341794/search?fbclid=IwAR1Wzy0iWk1Mdl-Z9sSu4dy7gt7hmHLw__brs_g6vZmrbo7z5cL9h9iBfgo ')
    def have_question(self):
        print(self.name + ', ask me in line chat')
    def bye(self):
        print(self.name + ', see you (Online) on July, 1st. Please ontime')