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
### HTTP - ang. Hypertext Transfer Protocol, port: 80
#### Zalety, wady, cechy:
- przesyłanie plików tworzących strony WWW
- oparte na wysyłaniu danych między klientem a serwerem (odpowiadającym)
- **bezstanowy** tzn. przeglądarka generalnie nie przechowuje danych, chyba, że się na to zgodzimy (cookie)
- dzięki portom możemy od razu wiedzieć gdzie/w czym to otworzyć np. port 80 (przeglądarka)
#### Cookie:
- zmniejszenie obciążenie serwera danymi
- strony przechowują nasze dane
#### Komunikaty, Kody:
- 1XX (np. 110 Connection Timed Out)
- 2XX (np. 200 OK)
- 3XX (np. 301 Moved Permamently)
- 4XX (np. 404 Not Found)
- 5XX (np. 502 Bad Gateway)

### DNS - ang. Domain Name System, port: 53
#### Przeznaczenie:
- odwzorowywanie nazw w sieci Internet na adresy IP

### SMTP - ang. Simple Mail Transfer Protocol, port: 25
#### Przeznaczenie:
- używany do przesyłania wiadomości poczty elektronicznej, **RFC 2821**

#### Przykład
    S: 220 smtp.example.com ESMTP Postfix
    C: HELO relay.example.com
    S: 250 smtp.example.com, I am glad to meet you
    C: MAIL FROM:<bob@example.com>
    S: 250 Ok
    C: RCPT TO:<alice@example.com>
    S: 250 Ok
    C: RCPT TO:<theboss@example.com>
    S: 250 Ok
    C: DATA
    S: 354 End data with <CR><LF>.<CR><LF>
    C: From: "Bob Example" <bob@example.com>
    C: To: Alice Example <alice@example.com>
    C: Cc: theboss@example.com
    C: Date: Tue, 15 Jan 2008 16:02:43 -0500
    C: Subject: Test message
    C:
    C: Hello Alice.
    C: This is a test message with 5 header fields and 4 lines in the message body.
    C: Your friend,
    C: Bob
    C: .
    S: 250 Ok: queued as 12345
    C: QUIT
    S: 221 Bye
    {The server closes the connection}
