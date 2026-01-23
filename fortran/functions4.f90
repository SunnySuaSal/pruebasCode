function bigmm(a, n)
  dimension a(n) !Observe, variable dimension. Only in funtions
  bigmm = a(1)
  do 10 k=1, n
  if(bigmm.lt.a(k)) bigmm = a(k)
  10 continue
  return
end

!Main program
dimension x(25)
real large
read(*,*) x
large = bigmm(x, 17) !Checks only first 17 elements of the array
write(*,10) large
10 format(1x, "The greates 17 is ", 1x, f6.2)
stop
end
