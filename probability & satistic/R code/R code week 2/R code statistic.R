d =c(1,2,3,4,1,2,3,4,1) # data
n = length(d)	#number of elements of d
d [9]
tab0 = tab(d)
x = c(1,2,3,4)
f = c(7,5,8,4)

tab1 = cbind(x, f, f_re, f_asc, f_dsc, f_re_asc, f_re_dsc)
tab1
f_asc = cumsum(f)

sum_f = sum(f)

f_re = f * 100 / sum_f
f_re

rev_f_dsc = cumsum(f)  
rev_f_dsc

f_dsc = rev(rev_f_dsc)
f_dsc

#to have rev f_dsc we have to rev f and then sum it and rev sumf back

f_re_asc = cumsum(f_re)
f_re_asc

rev_f_re = rev(f_re)
rev_f_re

rev_f_re_dsc = cumsum(rev_f_re)
rev_f_re_dsc

f_re_dsc = rev(rev_f_re_dsc)
f_re_dsc
