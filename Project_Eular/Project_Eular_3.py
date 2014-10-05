factor_dict = {}
point = 2#initialise the pointer and dict
def find_prime_factor(a):
        global point
        if  point**2 <= a:
                while True:
                        if a % point == 0:
                                analysis(point)
                                return find_prime_factor(a/point)
                        else:
                                point += 1
        else:
                analysis(a)
                return factor_dict



def analysis(n):
        if n in factor_dict:
                factor_dict[n] += 1
        else:
                factor_dict[n] = 1
        return 0

    

