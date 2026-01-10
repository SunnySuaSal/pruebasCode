!Lets implement bubblesort on an array
!first lets simply ask for the original array
integer::numbers(10)
n = 10
print *, 'Write whichever 10 numbers'
read(*,*) numbers
write(*,10) numbers
10 format(1x,i5)
!now lets implement bubblesort
print *, 'Sorting... and shi'
nn = n-1
do 200 k=1, nn
jj = n-k
do 100 l = 1, jj
if(numbers(l).le.numbers(l+1)) go to 100
temp = numbers(l)
numbers(l) = numbers(l+1)
numbers(l+1) = temp
100 continue
200 continue
!lets print the supposedly sorted array
write(*,10) numbers
stop
end
