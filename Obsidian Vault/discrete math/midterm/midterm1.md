#0# 1. Solve the properties below
### i.  $\overline{A \lor B} = \overline{A} \land \overline{B}$
let $q=\overline{A\lor{B}}$
let $p=\overline{A}\land\overline{B}$

## 2.
### a. If n∈ ℕ, Solve that $𝑛^3 − 𝑛$ can divide by 6?
 for $n = 1$ : $1^3-1=0$ which is divisible by 6
 for $n = 2$ : $2^3-2=6$ which is divisible by 6
 assume that $n=m$ 
 $m^3-m$ is divisible by 6 is true;
 now prove for  $n=m+1$
 for $n=m+1$ : $(m+1)^3-(m+1)=m^3+3m^2+3m-m=(m^3-m)+3m^2+3m=(m^3-m)+3m(m+1)$
$m(m+1)$
if m is odd, then m + 1 is even 
so m(m+1) is even.
therefore, let $m(m+1) = 2l$
so, $(m+1)^3-(m+1)=(m^3-m)+3(2l)=(m^3-m)+6l$
therefore, $(m+1)^3-(m+1)$ is divisible by 6.
### b. Solve that √17 is irrational number?
prove by contradiction 
assume that $\sqrt{17}$  is rational 
$\sqrt{17}=\frac{p}{q}$ , $q,p\in{Z},q\ne 0$
$17=(\frac{p}{q})^2$
$p^2=17q^2$
if $p^2$ is divisible by 17 so $p$ is also divisible by 17
so, $p = 17k$
$(17k)^2=17q^2$
$q^2=17k^2$
if $q^2$ is divisible by 17 then $q$ is also divisible by 17
p, q is divisible by 7 so they don't have lowest term
therefore, $\sqrt{17}$ is irrational.

# 3. They given set 𝐴 = {1,2,3,4,5,6,7,8,9}. How many subset of A which has

## i. 3 elements

subset of 3 elements of A = $$\frac{9!}{3!(9 - 3)!} = \frac{9\times8\times7}{3\times2\times1} = \frac{3\times4\times7}{1}= 84$$
therefore, there are 84 subsets of A 
## ii. 4 elements

subset of A of 4 elements = $$\frac{9!}{4!(9 - 4)!} = \frac{9\times8\times7\times6}{4\times3\times2\times1} = \frac{3\times7}{1}= 21$$
therefore , there are 21 subset of A of 4 elements .

## iii. 5 elements

subset of A of 5 elements = $$\frac{9!}{5!(9 - 5)!} = \frac{9\times8\times7\times6}{4\times3\times2\times1} = \frac{3\times7}{1}= 21$$
therefore, there are 21 subsets of A of 21 elements.

## iv. 6 elements

subset of A of 6 elements = $$\frac{9!}{6!(9 - 6)!} = \frac{9\times8\times7}{3\times2\times1} = \frac{3\times4\times7}{1}= 84$$
therefore, there are 84 subsets of A of elements.

# 5. How many of the rivers were polluted by exactly one of the three impurities?
## 1500 rivers,    520 by sulphur,   335 by phosphates,   425 by crude oil,   
## 100 c and s,
## 150 c and p 
## 180 s and p
## 28 all
find polluted by exactly one : 
$(S\lor{P}\lor{C}) = only(S) + only(P) + only(C)$
$only(S)=n(S)-n(S\land C)-n(S\land P)+n(S\land P \land C)$
= 520 - 100 - 180 + 28 = 268
$only(C)=n(C)-n(C\land S)-n(C\land P)+n(S\land P\land C)$
= 425 - 100 - 150 + 28 = 203
$only(P)=n(P)-n(C\land P)-n(S\land P)+n(S\land P \land C)$
= 335 - 150 - 180 + 28 = 33
$(S \lor P \lor C)=268+203+33=504$
therefore, polluted by exactly one is 504.
# 6. Number system conversion
## a. Convert from (101110111.0001101)2 to Decimal , Octal and Hexadecimal?
to decimal 
$101110111 = 1\times2^0 + 1\times2^1 + 1\times2^2 + 1\times2^4 + 2\times2^5 + 2\times2^6 + 2\times2^8 = 375$
$.0001101=1\times2^{-4} + 1\times2^{-5} + 2\times2^{-7}=.1015625$

therefore, = 375.1015625

to octal
$101110111 = 567$
$111 = 7$
$110 = 6$
$101 = 5$]
$.0001101 = 064$
$000 = 0$
$110 = 6$
$100 = 4$

therefore, octal = $567.064$

to  Hexa
$101110111 = 177$
$0111 = 7$
$0111 = 7$
$0001 = 1$
$.00011010 = 110$
$0001 = 1$
$1010 = 10$
therefore, = $177.110$

## b. Convert from (7652.453)_8 to Binary , Decimal and Hexadecimal?
to binary
$7652$
$7 = 111$
$6 = 110$
$5 = 101$
$2 = 010$
$.453$
$4 = 100$
$3 = 011$
therefore , bin = $111110101010.100101011$

to decimal
$7652 = 7\times 8^3 + 6\times 8^2 + 5\times 8^1 + 2\times 8^0 = 4010$
$.453 = 4\times 8^{-1} + 5\times 8^{-2} + 3\times{-3}= .583984375$
therefore, decimal = $4010.583984375$

to Hex
$1010 = 10$
$1010 = 10$
$1111 = 15$
$.100101011$
$1001 = 9$
$0101 = 5$
$1000 = 8$
therefore, Hexadecimal = $101015.958$

## c. Convert from (𝐴𝐵𝐶𝐷. 2225)16 to Binary, Octal and Decimal?
to binary 
$A = 1010$
$B = 1011$
$C = 1100$
$D = 1101$
$2 = 0010$
$5 = 0101$
therefore, bin = $1010101111001101.0010001000100101$

to octal
$101 = 5$
$001 = 1$
$111 = 7$
$101 = 5$
$010 = 2$
$001 = 1$
$.00100100100101$
$001 = 1$
$000 = 0$
$100 = 4$
$010 = 2$
$010 = 2$
$100 = 4$
therefore, octal = $517521.104224$

to decimal
$ABCD = A\times{16^3}+B\times{16^2}+C\times{16^1}+D\times{16^0}=43981$
$.2225=2\times{16^{-1}}+2\times{16^{-2}}+2\times{16^{-3}}+5\times{16^{-4}}=.1333770751951953125$
therefore, decimal = $43981.1333770751953125$

