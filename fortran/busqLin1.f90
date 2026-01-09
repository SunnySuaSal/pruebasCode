!Lets linealy search a number
!Okay lets ask for an array 
!and then for the number to search
integer::numbers(10)
print *, 'Write whichever 10 numbers'
read(*,*) numbers
write(*,10) numbers
10 format(1x,i5)
stop
end
