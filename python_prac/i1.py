
def isPalindrome( s):
        s1=s.lower()
        """
        :type s: str
        :rtype: bool
        """
        slis=s1.split()
        newS="".join(slis)
        if(newS==newS[::-1]):
            return True
        else:
            return False
s="0P"
s1=s.lower()
# print(s1)
# newStr=s1.replace(" ","")
# print(newStr)
newStr=s1.replace(" ","")
# # print(newStr)
# new=[]
# num=['1','2','3','4','5','6','7','8','9','0']
# for i in newStr:
#       if(i in num):
#           print(i)
#           new.append(i)
#       elif ( ord(i) in range(97,123)):
#         print(i)
#         new.append(i)
# sn="".join(new)
# print(sn)
# # print(sn[::-1])

l1=[12,23,4]
l2=[34,12,7]
newl=l1+l2
print(newl)
l=[]
rep=[]
for i in (newl):
    if (i not in l):
        l.append(i)
print(l)
    

        
        
# slis=s1.split()
# for i in slis:
#      print(i)
# newS="".join(slis)
# print(newSm)

# print(isPalindrome(s))