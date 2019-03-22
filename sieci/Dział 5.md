# Dział V
## Protokoły warstwy transportowej
### TCP - ang.
- sockets
- numer sekwencyjny
- retransmisja - duża ilość błędów, tym mniejszy segment (zmniejsza segment)
### UDP - ang. User Datagram Protocol
- prostszy niż TCP
- szybkie wysyłanie danych
- nie podejmuje żadnych działań jak pakiet nie dotrze, nie rząda retransmisji

## Protokoły warstwy aplikacji
### HTTP - ang. Hypertext Transfer Protocol
- przesyłanie plików tworzących strony WWW
- oparte na wysyłaniu danych między klientem a serwerem (odpowiadającym)
- bezstanowy tzn. przeglądarka generalnie nie przechowuje danych, chyba, że się na to zgodzicie (cookie)
- dzięki portom możemy od razu wiedzieć gdzie/w czym to otworzyć np. port 80 (przeglądarka)
- zmniejszenie obciążenie serwera danymi
- kłopotliwe ze względu korzystania ze strony, przez mechanizm cookie, który przechowuje nasze dane
