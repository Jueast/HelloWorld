def genPrimes():
    primes = [2]
    a = 2
    yield a
    while True:
        a += 1
        state = True
        for p in primes:
            if (a%p) == 0:
                state = False
                break
        if state:
            primes.append(a)
            yield a
