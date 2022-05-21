# C++ - Determinant computation using recursion

The enclosed cpp file aims at calculating a matrix determinant using the following recursive formula:
$$|A| = \sum_{j = 0}^{N-1}(-1)^{j}a_{0j}|\hat{A}_{0,j}|,$$
where,

1) $A=(a_{ij})_{0\leq i,j\leq N-1}$ is a square matrix of order $N$,
2) $\hat{A}_{0,j}$ is a modification of the matrix $A$ consisting in omitting its first row and $j$-th column, for all $j\in\{0,\dotsc,N-1\}$.
