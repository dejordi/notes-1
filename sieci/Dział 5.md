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
- bezstanowy tzn. przeglądarka generalnie nie przechowuje danych, chyba, że się na to zgodzimy (cookie)
- dzięki portom możemy od razu wiedzieć gdzie/w czym to otworzyć np. port 80 (przeglądarka)
- **Cookie** - zmniejszenie obciążenie serwera danymi, ale strony przechowują nasze dane
- **Komunikaty, Kody**:
    - 1XX (np. 110 Connection Timed Out)
    - 2XX (np. 200 OK)
    - 3XX (np. 301 Moved Permamently)
    - 4XX (np. 404 Not Found)
    - 5XX (np. 502 Bad Gateway)
