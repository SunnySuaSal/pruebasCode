function big(a, b, c)
  big = a
  if(big.lt.b) big = b
  if(big.lt.c) big = c
  return
end

b = 2.0
d = 6.0/2.0
res = big(1.0, b, d)
write(*, 10) res
10 format(1x, 'res = ', f10.2)
stop
end
