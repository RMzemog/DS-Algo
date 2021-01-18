first = ['a','b','c','d','e','f','g','h']
second = ['i','j','k','l','m','n','o','p']
test = int(input())
for i in range(0, test):
     length = int(input())
     bits = str(input())
     ans = ""
     for i in range(0,length,4):
         bits2 = bits[i:i+4]
         if(bits2[0] == '0'):
             first1 = first[:]
             t2 = 1
             while(t2 < 4):
                 if bits2[t2] == '0':
                    #  print('adsf')
                     if(len(first) == 2):
                         temp = first[0]
                     else:
                        first1 = first1[0:len(first1)//2]
                 elif bits2[t2] == '1':
                    #  print('qwer')
                    first1 = first1[len(first1)//2:len(first1)]
                 t2 += 1
            #  print(first1[0])
             ans += first1[0]
         elif(bits2[0] == '1'):
             first1 = second[:]
             t2 = 1
             while(t2 < 4):
                 if bits2[t2] == '0':
                    #  print('adsf')
                     if(len(first) == 2):
                         temp = first[0]
                     else:
                        first1 = first1[0:len(first1)//2]
                 elif bits2[t2] == '1':
                    #  print('qwer')
                    first1 = first1[len(first1)//2:len(first1)]
                 t2 += 1
            #  print(first1[0])
             ans += first1[0]
     print(ans)