d = c(39, 39, 39, 39, 39, 39, 39, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 43, 47, 47, 51, 51, 51, 51, 59, 59, 59, 59, 59)
tab0= table(d)
table(d)

par(mfrow=c(4,4)) #to show multipule chart
barplot(tab0, col = "red", main = "barchart")
pie(tab0)




tab1 = cbind( x, f, f_asc, f_dsc, f_re, f_re_asc, f_re_dsc, angle)
tab1


x = c(39, 43, 47, 51, 59) 
 
f = c(7, 11, 2, 4, 5)

f_asc = cumsum(f)
f_asc

rev_f = rev(f)
rev_f_dsc = cumsum(rev_f) 
f_dsc = rev(rev_f_dsc)
f_dsc

sum_f = sum(f)

f_re = f * 100 / sum_f
f_re

f_re_asc = cumsum(f_re)
f_re_asc


rev_f_re = rev(f_re) 
rev_f_re_dsc = cumsum(rev_f_re)
f_re_dsc = rev(rev_f_re_dsc)
f_re_dsc

#peichart : f * 360 / sum_f
angle = f * 360 / sum(f)
angle


### grap of some function
par(mfrow=c(4,4))

x = seq(-10,10,0.1)
f = x^2
plot(x,f, type ="l", col="red")

g = x^3
plot(x, g, type = "l", col="green")

plot(f, type ="l", col="red", ylim= c(-5,5))
lines(g, col = "green")
?ylim
?sqrt




















