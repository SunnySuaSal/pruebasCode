!Lets linealy search a number
!Okay lets ask for an array 
!and then for the number to search
integer::numbers(10)
print *, 'Write whichever 10 numbers'
read(*,*) numbers
write(*,10) numbers
10 format(1x,i5)
!now lets ask for a number to search
print *, 'Write the number youre lookin for'
read(*,*) kespNum
do 100 i=1, 10
if(numbers(i).eq.kespNum) go to 300
100 continue
L = 0
go to 400
300 L = i
400 if(L.eq.0)go to 500
write(*,20) L
20 format(1x,'the number youre looking for is in position ', i6)
go to 600
500 print *, 'The number youre looking for is not in the array'
600 stop
end
