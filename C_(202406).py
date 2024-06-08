def cuckoo_clocks(N, T):
    if T == 1:
        return N
    
    T_minus_1 = T - 1
    count = 0

    # We only need to consider divisors of T-1 up to min(N, sqrt(T-1))
    for i in range(1, int(T_minus_1**0.5) + 1):
        if T_minus_1 % i == 0:
            if i <= N:
                count += 1
            if i != T_minus_1 // i and T_minus_1 // i <= N:
                count += 1

    return count

# Solicitar al usuario la entrada de datos
Q = int(input())

for _ in range(Q):
    N, T = map(int, input().split())
    result = cuckoo_clocks(N, T)
    print(result)
