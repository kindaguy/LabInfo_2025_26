# Laboratorio 6: funzioni, procedure
## Intro

- Array: una buona prassi.
- Funzioni: dove e come.




## Esercizio 1

Definire una funzione di nome __isInRange__ che:

1. prende in ingresso tre valori `float`: il primo valore è il numero $x$ da controllare; i due valori `float` successivi individuano gli estremi di un intervallo chiuso e limitato __[min,max]__.
2. la funzione deve restituire _true_ se $x \in [\text{min,max}]$, _false_ altrimenti.



## Esercizio 2

Usando la funzione le __isInRange__ definita nell'esercizio precedente, caricare in un array di 10 elementi al massimo 10 valori di tipo __float__ con valori compresi tra -5.0 e 5.0. L'inserimento dei valori deve poter terminare prima che 10 valori, _ma almeno uno_, siano stati inseriti. Selezionate il costrutto di iterazione che meglio si addice alla richiesta.

Completato l'esercizio, scrivere una  funzione che prende in ingresso:
- un vettore di __float__,
- la sua dimensione,
- il valore del massimo e del minimo dell'intervallo dei valori ammissibili,

e, completato il caricamento dei valori nell'array, restituisca il numero di elementi effettivamente caricati.

## Esercizio 3

Il file __dataTake.dat__ contiene delle misure. Il file è così formattato: il primo dato nel file è un valore intero, che indica il numero __n__ di misure che seguono. Dopo questo valore, compaiono __n__ misure. Garantiamo che __n<=100__.

Usando la funzione __isInRange__ definita nell'Esercizio 1, caricare in un vettore di `float` di 100 elementi tutti e soli i dati $x_i$ del file tali che $\text{abs}(x_i) < 3*1.4$.

Stampare a video:
- Il numero di dati caricati e il numero di dati scartati.
- I dati caricati nel seguente formato: un dato per riga, su campo di 10 caratteri con allineamento a dx usando 7 cifre.

Stampare su file __dataTakeClean.dat__ tutti, dello stesso formato del file di input e con la stessa formattazione del punto precedente, tutti i dati caricati nel vettore.

## Esercizio 4

Definire le funzioni:

- __float media(float v[], int ndati)__
- __float devstd(float v[], int ndati)__

che calcolino, rispettivamente, la media e la deviazione standard di una _n-upla_ __v__ contenente __ndati__ dati di tipo __float__.

A tal fine potrebbe essere utile sapere che la libreria __cmath__ 
(__#include \<cmath\>__)
mette a disposizione le funzioni

__float pow(float a, float p)__
e
__float sqrt(float a)__

che calcolano, la prima la potenza _p_-esima del numero _a_ e la seconda la radice quadrata di _a_.
P.S.: __sqrt(a) = pow(a,0.5f)__.

## Esercizio 5

Definire una funzione __isOutlier__ che, preso in ingresso un valore __float__ __val__ e due valori __float__ __media__ e __standardDev__, restituisca

- __true__ se __|val-media|>3*standardDev__
-  __false__ altrimenti

P.S.: di che tipo è il valore restituito dalla funzione?
P.P.S.: __|a| = fabs(a)__ (__fabs__ definita in __cmath__).


# Esercizio 6

Modificare l'Esercizio 5 del Laboratorio 5 usando, dove opportuno, le funzioni definite negli esercizi precedenti.

## Esercizio 7 (investigativo...)

Scrivere una funzione

__void scambia(int v1, int v2)__

che scambi il contenuto delle variabili intere __v1__ e __v2__.

Controllate i valori delle variabili passate come parametri attuali alla funzione prima e dopo la chiamata di scambia.

NOTA: la parola __void__ è una parola chiave del linguaggio e indica il "tipo" _nessun tipo_. È usata in diversi contesti, ma in questa specifica istanza indica che la funzione non restituisce nulla, ovvero è una _procedura_.

## Esercizio 8
Scrivere una funzione 

__void scambia(int v[n], int n, int i, int j)__

che scambi le componenti di un vettore (di __n__ elementi) in posizione __i__ e __j__. La funzione dovrà controllare che entrambi gli indici siano all'interno del range __[0,1,..,n-1]__. In caso il controllo fosse negativo (almeno uno dei due indici fuori range) la funzione dovrà stampare a video il messaggio "Indici fuori range"  e non fare nulla.

Verificare il comportamento della funzione __scambia__ qui definita stampando il contenuto dell'array passato come parametro attuale alla funzione sia prima che dopo la chiamata della stessa.

## Esercizio 9
Implementate una funzione che, presi in ingresso due interi __a__ e __b__ restituisce il Massimo Comun Divisore tra i due numeri. La funzione dovrà accettare e restituire l'MCD di qualsiasi coppia di interi >0. Se vengono passati valori <=0 la funzione dovrà stampare a video un messaggio di errore e restituire il valore -1.

## Esercizio 10

Definire funzioni per il calcolo della media e della deviazione standard di per array di `int` e `double`. Mettete tutte le funzioni per il calcolo delle medie e delle deviazioni sandard in un file, con un __main__ che testi il funzionamento delle stesse. Ogni volta che avrete bisogno di calcolare medie e deviazioni standard di vettori, potrete copiare ed incollare attingendo da questo file. A breve vedremo un modo per rendere il processo di copia-incolla automatico, imitando quanto il vostro compilatore già fa quando usate le librerie di sistema come __fstream__, __iostream__, __cmath__ etc....

