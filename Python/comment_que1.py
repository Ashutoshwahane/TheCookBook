# Multiplication (R=AxB)
===================
from numpy import *

A = array([
 [1, 2, 3],
 [4, 5, 6],  # 2x3
])

B = array([
 [1, 2, 3],
 [2, 3, 4],
 [4, 5, 6]  # 3x3
])

# printing Matrix A
print("A =", end="")
for i in range(2):  # A row
 for j in range(3):  # A column
  print(end="\t")
  print(A[i][j], end="")
 print()

# printing Matrix B
print("\nB =", end="")
for i in range(3):  # B row
 for j in range(3):  # B column
  print(end="\t")
  print(B[i][j], end="")
 print()