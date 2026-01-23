function bbb(a, b, c, sum)
  sum = a+b+c
  bbb = a
  if(bbb.lt.b) bbb = b
  if(bbb.lt.c) bbb = c
  return
end

x = 1.0
y = 2.0
z = 3.0
total = 0.0
result = bbb(x, y, z, total)
write(*, 10) result
10 format(1x, "Greates is", f6.2)
write(*, 20) total
20 format(1x, "Total sum is", f6.2)
stop
end
