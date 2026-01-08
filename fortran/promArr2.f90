!lets calculate average of 25 scores of a class
!and how many are under such average
!using arrays
dimension scores(25)
sum = 0.0
do 100 i=1, 25
read(*,*) scores(i)
write(*, 10) scores(i)
sum = sum + scores(i)
10 format (f10.1)
100 continue
prom = sum/25.0
write(*, 20) prom
20 format(1x, 'The class average is', f10.1)
!now lets count how many under average
k = 0
do 200 i=1, 25
if(scores(i).lt.prom) k = k+1
200 continue
write(*,30) k
30 format(1x, 'Number of students under the class average is', 1x, i3)
stop
end
