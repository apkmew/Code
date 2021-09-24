def isPhotobook(code) :
    if code[0].isalpha() and code[len(code)-1].isalpha() : return True
    else : return False

def hash(a,b) :
    if ord(a) >= ord(b) : return ord(b)+10
    elif ord(a) < ord(b) : return ord(a)-7
book = []
album = []
def calKey(code) :
    total = 0
    for i in range(len(code)-1) :
        total += hash(code[i],code[i+1])
    if isPhotobook(code) : book.append(total)
    else : album.append(total)
    return total

def isPhotobookGenuine(key) :
    if key in album : return 'Incorrect Type'
    if key%2 == 0 : return True
    else : return False

def isAlbumGenuine(key) :
    if key in book : return 'Incorrect Type'
    if key%2 == 1 : return True
    else : return False

def solve() :
    ans1,ans2 = 0,0
    t = int(input())
    while t :
        t -= 1
        x = input()
        key = calKey(x)
        if isPhotobookGenuine(key) == True : ans1 += 1
        if isAlbumGenuine(key) == True : ans2 += 1
    print(ans1)
    print(ans2)