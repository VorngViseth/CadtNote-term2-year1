***4. Permutation and probability***
	**b. example**
		A woman delivers a baby 3 times. 
		***i***/ Write down all the possible outcome. (tree diagram or permutation with replacement)
		the possible out come is : n(s) = $2^3=8\;possible\;outcome$ : GGG, BBB, GGB, GBG, GBB, BGG, BBG, BGB
		***ii***/ Find the probability that she gets only one boy. (Using 2 different methods)
		***possible outcome : 3 possible outcome. GGB, BGG, GBG***
		***First method*** is counting 
		count the favorable outcome = n(A) = 3(already done above) 
		so $P(A)=\frac{n(A)}{n(S)}=\frac{3}{8}$
		***second method*** is by using the Binomial probability formula
		favorable outcome = 3
		$P(BGG)=P(B\;and\;G\;and\;G)=P(G)P(G)P(B)=\frac{1}{2}\times\frac{1}{2}\times\frac{1}{2}=\frac{3}{8}$
		***iii***/ Find the probability that she gets at least one boy.
		at least 1 boy means that there are 1 or 2 or 3 
		so the outcome of all girl is 1 : GGG
		so n(B) = 1 - n(s) = 7
			so $P(B)=\frac{n(B)}{n(s)}=\frac{7}{8}\qquad{or\qquad}(B)=1-P(no\,boys)=1-\frac{1}{8}=\frac{7}{8}$ 
		***iv***, Let X be the number of boy that she gets. What are the values of X?
		$X\;\in{0,1,2,3}$
		***v,*** Construct the probability distribution.
		

| X        | 0             | 1             | 2             | 3             |
| -------- | ------------- | ------------- | ------------- | ------------- |
| $P(X=x)$ | $\frac{1}{8}$ | $\frac{3}{8}$ | $\frac{3}{8}$ | $\frac{1}{8}$ |
		***vi,*** Calculate the expected value, variance and standard deviation 
		$$