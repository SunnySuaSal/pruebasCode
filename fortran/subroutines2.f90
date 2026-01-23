!Finds greatest value in first k elements of a(n)
!and computes sum of first k elements of a(n)

subroutine seek(a, n, k, high, sum)
  dimension a(n)
  sum = 0.0
  high = a(1)
  do 100 j=1, k
  sum = sum + a(j)
  if(high.lt.a(j)) high = a(j)
  100 continue
  return
end

!interchanges the value of two variables
subroutine intchg(x, y)
  t = x
  x = y
  y = t
  return
end

!inverts a(n)
subroutine invert(a, n)
  dimension a(n)
  nn = n/2
  k = n+1
  do 20 i=1, nn
  call intchg(a(i), a(k-i))
  20 continue
  return
end

!Main program
dimension x(20)
do 100 i = 1, 20
x(i) = float(i)
100 continue

high = 0.0
sum = 0.0

print *, "Seek call"
call seek(x, 20, 10, high, sum)
write(*, 10) high, sum
10 format(1x, "The greates in 10 is ", f8.2, 1x, "and the sum is ", f8.2)

print *, "Invert call"
call invert(x, 20)
write(*, 20) x
20 format(1x, 5f8.2)

stop
end
