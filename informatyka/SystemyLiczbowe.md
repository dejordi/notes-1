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
            if(T[i] > '9')@
                T[i] := T[i] - ('A' - 10)
            else
                T[i] := T[i] - '0'
            wyn := wyn * s + T[i]
        return wyn

## Temat: Reprezentacja danych liczbowych w komputerze

### [Zadania](https://www.mathwarehouse.com/solved-problems/conversions/convert-65295-from-decimal-to-binary "65295 to binary")

```mathematica
65536 - 241 = 65295 = 1111111100001111
65536 - 189 = 65347 = 1111111101000011
10110011,11100101 = 128 + 32 + 16 + 2 + 1 + 1/256 + 4/256 + 32/256 + 64/256 + 128/256 = 179,89453125
```



