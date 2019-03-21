## Temat: Schemat Hornera
### Iteracyjne liczenie wielomianu w pseudokodzie
    read n, x
    wyn := 0
    for i := 1 to n
        read a
        wyn := wyn * x + a
    write wyn
### Zamiana z dwójkowego na dziesiętny w pseudokodzie
    read n
    wyn := 0
    for i := 1 to n
        read a
        wyn := wyn * 2 + a
    write wyn

### Zamiana z dwójkowego na dziesiętny funkcją w pseudokodzie
    function BinaryToDecimal(T, n)
    wyn := 0
    for i := 1 to n
        wyn := wyn * 2 + T[i]
    return wyn

### Zamiana z wybranego systemu na dziesiętny
    function ToDecimal(T, n, s)
        wyn := 0
        for i := 1 to n
            if(T[i] > 9)
                T[i] := T[i] - (A - 10)
            wyn := wyn * s + T[i]
        return wyn
