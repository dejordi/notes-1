# Protokoły warstwy transportowej
## TCP - ang.
- sockets
- numer sekwencyjny
- retransmisja - duża ilość błędów, tym mniejszy segment (zmniejsza segment)
## UDP - ang. User Datagram Protocol
- prostszy niż TCP
- szybkie wysyłanie danych
- nie podejmuje żadnych działań jak pakiet nie dotrze, nie rząda retransmisji

# Protokoły warstwy aplikacji
## HTTP - ang. Hypertext Transfer Protocol, port: 80
### Zalety, wady, cechy:
- przesyłanie plików tworzących strony WWW
- oparte na wysyłaniu danych między klientem a serwerem (odpowiadającym)
- **bezstanowy** tzn. przeglądarka generalnie nie przechowuje danych, chyba, że się na to zgodzimy (cookie)
- dzięki portom możemy od razu wiedzieć gdzie/w czym to otworzyć np. port 80 (przeglądarka)
### Cookie:
- zmniejszenie obciążenie serwera danymi
- strony przechowują nasze dane
### Komunikaty, Kody:
- 1XX (np. 110 Connection Timed Out)
- 2XX (np. 200 OK)
- 3XX (np. 301 Moved Permamently)
- 4XX (np. 404 Not Found)
- 5XX (np. 502 Bad Gateway)

## DNS - ang. Domain Name System, port: 53
### Przeznaczenie:
- odwzorowywanie nazw w sieci Internet na adresy IP

## SMTP - ang. Simple Mail Transfer Protocol, port: 25
### Przeznaczenie:
- używany do przesyłania wiadomości poczty elektronicznej, **RFC 2821**

### Przykład:
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
### eSMTP

## POP3 - ang. Post Office Protocol, port: 110

### Zalety, wady, cechy: 

- połączenie realizowane na czas, nie może być uśpione

- każdy list musi być pobierany razem z załącznikami

- wszystkie odbierane listy trafiają do jednej skrzynki

- serwer POP3 nie potrafi sam przeszukiwać czekających w kolejce listów

## IMAP - ang. Internet Message Access Protocol, port: 143

### Cechy, wady, zalety:

- większe możliwości zarządzania kontem e-mail

- bardziej rozbudowany niż POP3

- tworzenie, usuwanie, przenoszenie bezpośrednio na serwerze (w czasie rzeczywistym, synchronizuje się 1 do 1)

- pobieranie nagłówków wiadomości bez konieczności pobierania kompletnej zawartości wszystkich maili wraz z załącznikami

- wiele użytkowników jednego konta pocztowego

- wiadomości są na serwerze, na komputer pobierane są na początku tylko nagłówki

## [POP3 vs IMAP](https://www.youtube.com/watch?v=TnDAwKu1OfQ "YouTube")

## Elementy systemu pocztowego

- **MUA** - ang. Mail User Agent - wysyłanie poczty 
- **MTA** - ang. Mail Transfer Agent - odbiór poczty
- **MDA** - ang. Mail Delivery Agent - dostarczanie poczty

## Telnet - ang. Telecomuncation Network, port: 22

## Przeznaczenie:

- protokół używany do emulacji terminala umożliwiający komunikację ze zdalnym urządzeniem

## Cechy:

- tekstowo, nie ma myszki
- login i hasło nie są szyfrowane

### StarWars w cmd `telnet towel.blinkenlights.nl`

## FTP - ang. File Transfer Protocol, port: 20, 21

### Przeznaczenie:

- interaktywne przesyłanie plików pomiędzy systemami

### Cechy:

- tryb aktywny i pasywny
- tylko przez TCP
- 1 port to port danych (20), a drugi port to port poleceń (21)

### Tryb aktywny

- łączy się z dowolnym portem nieuprzywilejowanym (N > 1024) z portem poleceń serwera FTP,
- Klient rozpoczyna nasłuchiwanie na porcie N+1 i wysyła do serwera FTP polecenie PORT N+1,
- Serwer łączy się wówczas z określonym przez klienta portem przez własny port danych.

![Active FTP](img/aktywny_ftp.png)

### Tryb pasywny

- oba połączenia z serwerem unikają problemu z firewall'em
- klient otwiera dwa dowolne porty nieuprzywilejowane
- od razu wysyła polecenie PASV

## TFTP - ang. Trivial File Transfer Protocol, 

### Przeznaczenie:

- odczytywanie plików z komputera

![TFTP](img/tftp.png)

## DHCP - ang. Dynamic Host Configuration Protocol, port: 67

### Przeznaczenie:

- dynamiczna konfiguracja urządzeń

### Techniki:

- ręczne - przez administratora
- automatyczne - kolejnym wolne adresy
- dynamiczne - administrator nadaje zakres, a każdy adres przydzielony jest na pewien czas

![DHCP](img/dhcp.png)

## NFS - ang. Network File System, port: 2049

### Przeznaczenie:

- udostępniania systemów plików
- jd
 

## SNMP - ang. Simple Network Management Protocol, port: 161

### Przeznaczenie:

- konfiguracja urządzeń sieciowych i gromadzenie informacji na ich temat

### Cechy:

- małe obciążenie sieci
- niewielki koszt

### SMB (CIFS) - ang. Server Message Block, porty: 137, 138, 139

### Przeznaczenie:

- udostępnianie plików i drukarek

### Cechy:

- używana protokołów niższych rzędów - NetBIOS lub NetBEUI
- **share level** - polega na zabezpieczaniu zasobu
- **user level** - zabezpieczanie konkretnych plików przez prawa dostępu
- **grupa robocza** - każdy komputer trzyma u siebie poufne dane, proces weryfikacji i autoryzacji przebiega lokalnie
- **domena**

![SMB](img/smb.png)

## Protokoły szyfrowane - SSH (secure shell) , SFTP (SSH File Transfer Protocol), FTPS (FTP Secure), HTTPS

- **SSH** - stosowany w sieciach TCP/IP w architekturze klient-serwer, protokół telnet (terminałowy)
- **SFTP** - szyfrowany, nie wymaga obecności serwera FTP
- **FTPS** - rozszerzenie FTP, umożliwia szyfrowanie protokołów TLS (Transport Layer Security) oraz SSL (Secure Sockets Layer)
- **HTTPS** - tryb niejawny (automatycznie konfigurowana) i jawny (połączenie rozpoczynane jako niezaszyfrowane połączenie FTP)
