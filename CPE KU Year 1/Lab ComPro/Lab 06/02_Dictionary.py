dic = {}
dic['arm'] = ['n','แขน']
dic['hello'] = ['v','สวัสดี']
dic['beautiful'] = ['adj','สวย']
dic['toilet'] = ['n','ห้องน้ำ']
dic['kick'] = ['v','เตะ']
dic['handsome'] = ['adj','หล่อ']
while True :
    word = input()
    if word == '0' : break
    while word not in dic.keys() : 
        print('Word not in dictionary.')
        word = input()
    n = input()
    while not n.isdecimal() or int(n) != 2 and int(n) != 1 :
        print('Invalid option.')
        n = input()
    n = int(n)
    print(dic[word][n-1])