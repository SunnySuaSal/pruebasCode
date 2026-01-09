dimension scores(25,4), proms(25)
sum = 0.0
kcont = 0
do 100 i=1, 25
do 200 j=1, 4
write(*, 10) j, i
10 format(1x,'Write score of exam ',i5, 1x, 'of student number ', i5)
read(*,*) scores(i, j)
write(*,20) scores(i, j)
20 format (f10.1)
sum = sum+scores(i,j)
200 continue
proms(i) = sum/4.0
sum = 0.0
100 continue
!now lets calculate the proms
clasSum = 0.0
clasProm = 0.0
do 300 i=1, 25
clasSum = clasSum + proms(i)
300 continue
clasProm = clasSum/25.0
do 400 i=1, 25
if(proms(i).lt.clasProm) kcont = kcont + 1
400 continue
write(*,30) kcont
30 format(1x, 'Num of students under the class average: ', 1x, i6)
stop
end

