## Tenat: Schemat Hornera
### Iteracyjne liczenie wielomianu w pseudokodzie
    read n, x
    wyn := 0
    for i := 1 to n
        read a
        wyn := wyn * x + a
    write wyn
### Zamiana z dwójkowego na dziesiętny
    read n
    wyn := 0
    for i := 1 to n
        read a
        wyn := wyn * 2 + a
    write wyn
