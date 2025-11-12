! Lee n numeros y cuenta cuantos
! positivos y cuantos negativos

ipos = 0
ineg = 0
read(*,*) n
do 100 i = 1, n
  read(*,*) a
  if(a.gt.0.0) go to 50
  ineg = ineg + 1
  go to 100
  50 ipos = ipos + 1
100 continue
write(*,20) ipos, ineg
20 format(1x,'positivos= ',i3,6x,'negtivos= ',i3)
stop
end
