def lexico_permutations_fast(_w: str) :
    """
    two times faster than lexcographic_perms
    """
    pool = list(_w)
    n = len(pool)
    last = n - 1

    if n <= 1:
        return _w
    yield ''.join(i for i in pool) # output the first permutation as itself

    while last:
        j = last - 1
        y, z = pool[j], pool[last]

        if last == 1 and y >= z: # if n == 2 and a[last-1] == a[last] or a[last-1] > a[last],
            yield ''.join(i for i in pool)
            break # output that value and terminate 
        if y < z:
            pool[j], pool[last] = z, y # interchange a[last-1] and a[last]
            yield ''.join(i for i in pool) # output
            continue # and continue finding the next permutation
        x = pool[last - 2]

        if x >= y:
            j = last - 3 # set j to an index that is prior to index for x
            y = pool[j] # update y with the new j
    # Find the largest j such that pool[j] or y can be increased
            while y >= x:
                j = j - 1
                if j < 0: break # terminate if the algorithm has finish permuting
                x = y
                y = pool[j] # increased j
        if y < z:
            pool[j], pool[j + 1], pool[last] = z, y, x # update a[j], a[j + 1] and a[last] with z, y, x
            k, _l = j + 2, last - 1

            while k < _l: # begin to reverse
                pool[k], pool[_l] = pool[_l], pool[k]
                k, _l = k + 1, _l - 1
            yield ''.join(i for i in pool)
            continue # continue to the next permutation
        if x >= y:
            """
            """
        else:
        # when x < y then check
            if x < z:
                pool[last - 2], pool[last - 1], pool[last] = z, x, y # and interchange accordingly
            else:
                pool[last - 2], pool[last - 1], pool[last] = y, z, x # interchange accordingly
            yield ''.join(i for i in pool)
            continue
    
    m = last - 1
    while y >= pool[m]:
        m = m - 1

        pool[j], pool[m] = pool[m], y # then reverse by setting a[j] to a[m] and a[m] to y

        pool[last], pool[j + 1] = pool[j + 1], z # perform the final reverse
    k = j + 2
    l = last - 1
    while k < l:
        pool[k], pool[l] = pool[l], pool[k]
        k = k + 1
        l = l - 1
    yield ''.join(i for i in pool)


for val in lexico_permutations_fast('ABCD'):
    print(val)