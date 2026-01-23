!interchanges the value of two variables
subroutine intchg(x, y)
  t = x
  x = y
  y = t
  return
end

!Finds the greatest and computes the sum of three numbers
subroutine large(a, b, c, big, sum)
  sum = a + b + c
  big = a
  if(big.lt.b) big = b
  if(big.lt.c) big = c
  return
end

!Main program
dimension a(10)
do 100 i=1, 10
  a(i) = float(i)
100 continue

t = 15.0
!Program calls for subroutines require the CALL preposition
call intchg(a(3), t)

write(*,10) a
10 format(1x, 3f6.2)

u = 1.0
v = 4.0
w = 3.0


r = 0.0
s = 0.0

call large(u+v, w-sqrt(v), u**2, r, s)

write(*,20) r, s
20 format(1x, "The greatest is ", f6.2, 1x, "and the sum is ", f6.2)

stop
end
