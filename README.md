# Hardwarenahe-Programmierung-Tag-7
 In dieser Ubung nehmen Sie eine high-level-Perspektive ein und beschaftigen sich mit dem C-Kompilierprozess und dessen technischen Grundlagen wie der Reprasentation von unterschiedlichen Datentypen. Damit zusammenhangend arbeiten Sie weiter mit make und dem C-Debugger gdb.

# Aufgabe 1 Datentypen und Casts

Betrachten Sie folgende drei C-Codeschnipsel und beantworten Sie fur jeden davon schriftlich: 
Welchen Wert erh¨alt x und warum?
(a) int a = 3; (b) int a = 3;         (c)float a = 3;
int b = 2;         float b = 2;          int b = 2;
float x = a / b;   float x = a / b;      float x = a / b;

# Aufgabe 2 Der Compiler

Beantworten Sie die folgenden Aufgaben schriftlich. Sie k¨onnen bei Bedarf fur Ihre Antworten 
online recherchieren oder sich mit Ihren Nachbarn austauschen.
(a) Aus welchen 4 Stufen besteht der C-Kompiliervorgang? Beschreiben Sie fur jede der 4 
Stufen kurz, was der Compiler dort macht.
(b) Sie haben bereits die Compilerdirektive #include kennengelernt. Auf welcher der 4 Stufen
wird sie verarbeitet? Begrunden Sie, warum diese Direktive nicht in den anderen Stufen sinnvoll verarbeitet werden kann.

# Aufgabe 3 Endianess

Schreiben Sie ein Programm endianess, das die Art der Bytereihenfolge (Endianess) auf Ihrem
Computer ermittelt.
Sie konnen sich bei Bedarf z.B. auf https://de.wikipedia.org/wiki/Byte-Reihenfolge
uber das Konzept von Bytereihenfolge/Endianess informieren.
Beispielaufruf:
./endianess
Ausgabe: “0x1234 ist 0x34 0x12 - dieser Computer benutzt little-endian.”

# Aufgabe 4 Datentypen I

Wir haben Ihnen unter longint.c ein unvollstandiges Programm bereitgestellt, das Benutzern
ausgeben soll, wie viele Bytes der Datentyp long zur Speicherung benotigt, und was der kleinste
bzw. der großte darstellbare Wert dieses Datentyps ist.
Beispielaufrufe:
./longint
Ausgabe: “Der Datentyp longint benotigt TODO Bytes Speicherplatz.”
./longint -m
Ausgabe: “Der Datentyp longint benotigt TODO Bytes Speicherplatz.
Die kleinste darstellbare Zahl betragt dann TODO.”
./longint -M
Ausgabe: “Der Datentyp longint benotigt TODO Bytes Speicherplatz.
Die gr¨oßte darstellbare Zahl betr¨agt dann TODO.”
Vervollst¨andigen Sie das Programm. Ersetzen Sie dazu im Programm die Platzhalter “TODO”
und “42” und fugen Sie fehlenden Code hinzu. 

# Aufgabe 5 Datentypen II

Wir haben Ihnen unter typen1.c wieder ein unvollstandiges Programm bereitgestellt, das vom
Benutzer eine ganze Zahl einliest und ausgeben soll, welchen Wert eine char, int oder doubleVariable annimmt, wenn dieser Wert darin gespeichert wird. Verwandeln Sie den eingegebenen
String aus argv zuerst in einen long long-Wert mithilfe der Funktion atoll().
Beispielaufruf:
./fassungsvermoegen 5608973456345
Ausgabe:
char : -39
int : -253832231
double : 5608973456345.000000
Ersetzen Sie dazu wieder im Programm “TODO” und “42” geeignet, und erganzen Sie ggf.
zusatzlich benotigten Code.
Hinweis: Ihr Programm wird beim Kompilieren Warnungen anzeigen, das ist diesmal OK.

# Aufgabe 6 Floss your teeth and make backups!

Schreiben Sie ein Makefile-Rezept, das eine Sicherheitskopie aller Quell- und Headerdateien aus
dem aktuellen Verzeichnis in eine zipdatei packt.

# Aufgabe 7 Make it again, Sam

Wie kann man make dazu zwingen, beim nachsten Kompilieren alles neu zu kompilieren, und
nicht alte Kompilate wiederzuverwenden?
(a) Uberlegen Sie sich zunachst, wie Sie dies per Hand (also ohne Makefile) tun wurden. Sie 
konnen Ihre Idee mit Ihren Nachbarn oder Ihrem Tutor besprechen, bevor Sie weitermachen.
(b) Schreiben Sie nun ein Makefile-Rezept, das diesen Vorgang automatisiert. Nennen Sie Ihr
Target clean.
