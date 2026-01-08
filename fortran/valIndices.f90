! Lets see what kind of expressions
! are valids for indexes in arrays

integer::score(50)
integer::aux(3)

aux(1) = 1
aux(2) = 2
aux(3) = 3
do 15 i=1, 50
  score(i) = i
15 continue
!costants
write(*, 10) score(5)
10 format (1x,i5)
!single integer variables
k = 10
m = 2
write(*, 10) score(k)
!simple integer arithmetic with variables
write(*, 10) score(k-2)
write(*, 10) score(k+2)
write(*, 10) score(2+k)
!integer variable by constant multiplication
write(*, 10) score(3*k)
write(*, 10) score(k*3)
!integrer variable multiplication
write(*, 10) score(k*m)
write(*, 10) score(m*k)
!algebraic term and variations
write(*, 10) score(2*k-1)
write(*, 10) score(m*k-1)
!using another array
write(*, 10) score(aux(3))
write(*, 10) score(2*aux(2))
write(*, 10) score(aux(2)*2)
!maybe exponentials
write(*, 10) score(2**2)
write(*, 10) score(m**m)
!yes, they all work
stop
end
