!Propositions that define arithmetic functions
!Super usefull
g(x) = x**2 - 5.0*x + 2.0

!Computation of the function values in a range
do 100 j=1, 20
value = g(float(j))
write(*, 10) j, value
100 continue
10 format(1x, i3, 3x, f8.2)
stop
end
