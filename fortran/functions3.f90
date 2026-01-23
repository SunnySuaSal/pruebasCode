function bigg(a)
  dimension a(25)
  bigg = a(1)
  do 10 k=2, 25
  if(bigg.lt.a(k)) bigg = a(k)
  10 continue
  return
end

!Main program
dimension x(25)
real large
read(*,*) x
large = bigg(x)
write(*,10) large
10 format(1x, "the greatest is", 1x, f6.2)
stop
end

