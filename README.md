# SMP_Proiect
## Tema proiectului
Proiectul simuleaza un sistem de parcare cu bariera, care se deschide automat. Parcarea are un numar limitat de locuri, ceea ce duce la blocarea accesului in parcare, atunci cand numarul maxim s-a atins, contorizand intrarile si iesirile din parcare.
<br />
<br />
<br />
<br />
## Componente 
###  2xLed-uri
Contorizarea capacitatii parcarii se face vizual cu ajutorul a doua led-uri (verde pentru a semnala deschiderea barierei si rosu drept avertisment ca nu mai sunt locuri in parcare).
<br />
<br />
###  2xButoane
Simularea masinilor care intra si ies este facut de 2 butoane (in loc de senzori de miscare), prin apasarea butonului 1 se deschide bariera cu scopul de a intra in parcare (aceasta apasare a butonului incrementeaza valoarea lui count, care numara cate locuri ocupate sunt), iar butonul 2 deschide bariera pentru masinile din interiorul parcarii (count--).
<br />
<br />
###  Cremaliera + Sina glisanta
Bariera este, in cazul de fata, o bucata de lemn, iar pentru a putea fi capabila de a se inchide si deschide se ataseaza o sina glisanta pe o parte a acesteia, iar pe alta o cremaliera, pentru a putea avea o miscare controlata.
<br />
<br />
###  Servomotor 360 grade (rotatie continua) + Rotita dintata
Bariera se deschide si se inchide prin intermediul unui servomotor (element de actionare), intrucat acestuia ii este atasata rotita dintata care impinge cremaliera, creeand miscarea barierei.
<br />
<br />
###  Placa de dezvoltare UNO R3 compatibil cu Arduino 
Pentru a controla tot acest proces se utilizeaza o placa embadded.
<br />
<br />
###  Breadbord + fire jumper + rezistente + baterii 
Elemente necesare intr-un circuit electric.
<br />
<br />
<br />
<br />
## Schema electrica
![My Image](Schema_electrica.png)
