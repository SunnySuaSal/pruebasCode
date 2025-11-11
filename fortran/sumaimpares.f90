implicit double precision (a-h, o-z)
sum = 0.0d0
den = 1.0d0
15 if(den.gt.21.0d0) go to 25
sum = sum + (1.0d0 / den)
den = den + 2.0d0
go to 15
25 write(*,10) sum
10 format(1x,f15.9)
stop
end
