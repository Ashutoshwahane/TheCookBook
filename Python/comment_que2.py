# creating Matrix R(AxB) blueprint
R = zeros(6, int).reshape(2, 3)  # 2x3(A=row x B=column)

# AxB operation
sum = 0
for i in range(2):  # R row
 for j in range(3):  # R column
  for k in range(3):  # A column
   sum += A[i][k] * B[k][j]
  R[i][j] = sum
  sum = 0

# printing Matrix R(AxB)
print("\nR =", end="")
for i in range(2):  # R row
 for j in range(3):  # R column
  print(end="\t")
  print(R[i][j], end="")
 print()