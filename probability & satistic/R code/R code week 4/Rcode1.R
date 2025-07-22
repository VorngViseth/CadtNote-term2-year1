d = c(7, 8, 9, 5, 7, 8, 7, 9, 6, 8)
tab0 = table(d)
tab0
tab1 = cbind(x, f, xf)
tab1
x = c(5, 6, 7, 8, 9)
f = c(1, 1, 3, 3, 2)

sumf = cumsum(f)
sumf
sumx = cumsum(x)
sumx

	#the summ of score
sumX = sum(d)
sumX

	#sum of the whole students in the class
sumF = sum(f)
sumF
	
	#avg score in the class(mean)
avgscore = sumX / sumF
avgscore
	
xf = x*f
xf

sum0 = (x - avgscore)*f
sum0
sum2 = -2.4-1.4-1.2+1.8+3.2
sum2