def done(s):
    map = {}
    max_len = start = 0
    for i in range(len(s)):
        if s[i] in map and start <= map[s[i]]:
            start = map[s[i]] + 1
        else:
            max_len = max(max_len, i-start+1)
        map[s[i]] = i
    
    return max_len

#	if len(s)==0:
#		return 0
#	dict={}
#	max_length=0
 #   start=0
  #  
   # for i in range(len(s)):
    #    if s[i] in dict and start<=dict[s[i]]:
     #       start=dict[s[i]]+1
      #      
       # else:
        #    max_length=max(max_length,i-start+1)
            
        #dict[s[i]]=i
    #return max_length

print(done("bbbbb"))