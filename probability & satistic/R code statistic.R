d =c(1,2,3,4,1,2,3,4,1) # data
n = length(d)	#number of elements of d
d [9]
tab0 = tab(d)
x = c(1,2,3,4)
f = c(3,2,1,4)

tab1 = cbind(x, f, f_re, f_asc, f_dsc, f_re_asc)
tab1
f_asc = cumsum(f)

f_dsc = rev(f_dsc_sum)
f_dsc
tab1 

f_dsc_sum = cumsum(f_dsc)  
f_dsc_sum

#to have rev f_dsc, we have to rev f, and then sum it, and rev sumf back

f_re = (f/sum(f))*100
sum(f)
f_re			#re = % 

rev_f = rev(f)
rev_f

, = (rev_f/sum(f))*100
rev_f_re

f_re_asc = r

#find f_re_des and f_re_asc

f_re_asc = cumsum(f_re)

f_re_dsc_rev = cumsum(rev_f_re)
rev_f_re = rev(f_re)
f_re_dsc = rev(f_re_dsc_rev)
f_re_dsc_rev





