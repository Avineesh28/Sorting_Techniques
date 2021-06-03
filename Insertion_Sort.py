def insertionSort(alist):
   for i in range(0,len(alist),1):#i=0,1,2,3
     x = alist[i] #x=54, 26 ,55
     j = i # j=0,1 ,3   
     while j>0 and alist[j-1]>x: #j>0 54>26   93>54
         alist[j]=alist[j-1] # a[1]=54   a[3]=93
         j = j-1 # j=0 2
     alist[j]=x  #a[0]=26   a[2]=55        26,54,55,94
alist = [54,26,93,55,77,55,44,55,20]
insertionSort(alist)
print(alist)