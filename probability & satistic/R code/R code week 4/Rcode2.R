A = c(5, 7, 8, 6, 4)
B = c(10, 2, 3, 7, 9)
tab0 = cbind(cbindA, cbindB)
tab0
cbindA = cbind(meanA, MDA, SA, SDA, CVA)
cbindA
cbindB = cbind(meanB, MDB, SB, SDB, CVB)
cbindB




table(A)
nA = sum(table(A))
nB = sum(table(B))

#mean of A
meanA = sum(A)/nA
meanA

#mean of B
meanB = sum(B)/nB
meanB

#MD of A
MDA = sum(abs(A - meanA)/nA)
MDA

#MD of B
MDB = sum(abs(B - meanB)/nB)
MDB

#S^2 of A
SA = 1/(nA-1)*sum((A - meanA)^2)
SA

#S^2 of B
SB = 1/(nB -1)*sum((B - meanB)^2)
SB

#SD of A
SDA = sqrt(SA)
SDA

#SD of B
SDB = sqrt(SB)
SDB

#CV oF A
CVA = SDA/meanA*100
CVA

#CV oF B
CVB = SDB/meanB*100
CVB
































