# def kad(arr):
#     max_sum = arr[0]
#     current_sum = max_sum
#     for i in range(1,len(arr)):
#         current_sum = max((current_sum + arr[i]), arr[i])
#         max_sum = max(current_sum, max_sum)
#     return max_sum
# def imp(a):
#     b = [-i for i in a]
#     print(a)
#     print(b)
#     plus = kad(a)
#     print('plus', plus)
#     minus = kad(b)
#     print('Minus', minus)
#     cs = sum(a)
#     print("cs", cs)
#     cs += minus
#     print('cs2', cs)
#     if cs > plus and cs != 0:
#         return cs
#     else:
#         return plus


# print(imp([-2, -3, -1]))



def med(arr):
    current_max = arr[0]
    final_max= arr[0]
    current_min = arr[0]
    for i in range(1, len(arr)):
        temp = current_max
        current_max = max(max(current_max * arr[i], current_min * arr[i]), arr[i])
        current_mix = min(min(temp * arr[i], current_min*arr[i]),arr[i])
        if current_max > final_max:
            final_max = current_max
    return final_max
# print(med([-2,0,-1]))

# def lcc(names):
#     names.sort
#     for i in range(1,(len(names))):
#         if names[i]
#      print(lcc(['wano', 'wano(1)']))


def binary(arr, t):
    start = 0
    end = len(arr) - 1
    while start <= end:
        mid = (start+end)//2
        if t == arr[mid]:
            return mid
        elif t < arr[mid]:
            end = mid - 1
        elif t > arr[mid]:
            start = mid + 1

# print(binary([1,2,3,5,7,8,9],2))


def digital_root(n):
    root = 0
    for d in str(n):
        root += int(d)
    if len(str(root)) > 1:
        root = digital_root(root)
    return root   

# print(digital_root(999))


def word_break(s, wordDict):
    print(s)
    wordDict.sort(key=len)
    print(wordDict)
    for i in wordDict:
        if i in s:
            s =  s.replace(i, "")
    print(s)
    if s == "":
        return True
    return False

# print(word_break("aaaaaaa",["aaaa","aaa"]))


def asd(arr):
    lis = [i//i for i in arr]
    for i in range(len(arr)):
        for j in range(i):
            if (arr[i] >arr[j] and lis[i] <= lis[j]):
                lis[i] = 1+lis[j]
    print(lis)
    print(arr)
    lis.sort()
    return lis[-1]

# print(asd([10,9,2,5,3,7,101,18]))
# print(asd([5,8,7,1,9]))    

class Book(pages,prices,author,Id,title):
    def __init__(self):
        self.pages  = pages 
        self.price=price
        self.author= author
        self.Id=Id 
        self.title=title
    
class BookStore(bookStoreName,BookList):
    def __init__(self):
        

