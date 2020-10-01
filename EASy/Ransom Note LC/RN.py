# def ran(ransomNote, magazine):
#     ransomNote = list(ransomNote)
#     magazine = list(magazine)
#     print(ransomNote)
#     print(magazine)
#     done = []
#     count = 0
#     while count < len(ransomNote):
#         if ransomNote[count] in magazine:
#             print(ransomNote[count])
#             done.append(ransomNote[count])
#         count += 1
#     return done == ransomNote

# print(ran("aa", 'ab'))

def random(ran, mag):
    ran = list(ran)
    mag = list(mag)
    p = []
    for i in ran:
        if  i in mag:
            p.append(i)
            d = mag.index(i)
            mag.pop(d)
    if ran == p:
        return True
    else:
        return False 
print(random("aa", "aab"))