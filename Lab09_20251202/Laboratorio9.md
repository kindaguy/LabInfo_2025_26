# Laboratorio 9: Allocazione dinamica della memoria, passaggio di parametri per riferimento, t-uple.


## Esercizio 1 (ex Esercizio 4 Lab05)
Il file __misure.dat__ contiene delle misure. Il file è così formattato: il primo dato nel file è un valore intero, che indica il numero __n__ di misure che seguono. Dopo questo valore, compaiono __n__ misure. A differenza dell'esercizio originale, dove garantivamo che fosse__n<=20__, qui il numero di dati non è limitato a priori.

Dopo aver letto da file la dimensione del campione, quindi, allocare dinamicamente un array di __float__ della stessa dimensione, caricare i dati nell'array e stampare a video:
- il numero di misure registrate
- le misure, stampando una misura per riga, su campo di 10 caratteri con allineamento a destra.

(...da qui segue come in esercizio 4 Lab05...quindi non dovete inventarvi nulla di nuovo...)
Determinare e stampare a video quindi la _media campionaria_ e la _deviazione standard del campione_ degli elementi caricati. 

Ricordiamo che la deviazione standard del campione di N valori è definita come

$\sigma_C = \sqrt{\frac{1}{N}\sum_{j=1}^N (x_j - \bar{x})^2}$,

dove $\bar{x}$ è la  media campionaria.

Suggerimento: 
- $x^2$= __pow(x,2)__
- $\sqrt{x}$ = __sqrt(x)__
- __pow__ e __sqrt__ si trovano nella libreria __cmath__.
- La deviazione standard campionaria è un numero positivo...(a scanso di equivoci...)

## Esercizio 2 (ex Esercizio 8 Lab04)

Il file __voti.dat__, in questa cartella, contiene un numero non precisato di voti (valori nel range [18,29,...30]). 
Una volta contati i voti presenti sul file, allocare dinamicamente un array di nome `vvoti` di dimensione pari al numero di voti e caricare i voti descritti su file.
Determinare quindi la media aritmetica dei voti.

__NOTA__: il file dovrà essere aperto una prima volta in lettura per contare i voti. Lo stream andrà poi chiuso e riaperto per effettuare il caricamento dei voti nell'array `vvoti`. Considerate che:
- Alla prima lettura (conteggio valori presenti su file), il numero di dati non è noto. Dovrete usare un contatore e il ciclo Spoletini per contare i voti.
- Alla seconda lettura il numero di dati presenti su file è noto, quindi sapete quante letture dovrete fare.

## Esercizio 3 (ex Esercizio 9 Lab04)

Il file __votiZoppi.dat__, in questa cartella, contiene un numero non precisato di valori. Questi valori dovrebbero rappresentare dei voti, ma chi ha scritto il file era "distratto" e potrebbe aver inserito dei valori fuori dal range [18,...,30]. Caricare in un array dinamicamente allocato della dimensione pari al numero di voti validi descritti su file e caricare i voti all'interno dell'array.

Stampare quindi a video:
-  il numero di dati presenti su file.
-  il numero di voti validi caricati.
-  il voto minimo e il voto massimo caricati.

## Esercizio 4

Scrivere una funzione:

__void fixInterval(float & min, float& max)__

che, presi in ingresso due valori __float__ __min__ e __max__,
- ne scambia il contenuto e stampa a video il messagigo "Sistemo intervallo..." se __min > max__
- li lascia invariati e stampa il messaggio "Intervallo ben formato" altrimenti.

## Esercizio 5

Scrivere una funzione

__float * caricaDatiFileFloat(const char nomefile[], int & rdim, int & rused )__

 che, preso in ingresso:

-il nome di un file: __const char nomefile[]__

-il riferimento ad un intero: __int & rdim__

-il riferimento ad un intero: __int & rused__

carichi i dati descritti nel file passato come primo parametro, registri in __rdim__ la dimensione e in __rused__ il numero di elementi caricati dell'array creato dinamicamente e il cui indirizzo è restituito dalla funzione tramite il valore di ritorno di tipo __float *__.

NOTA: la funzione _esporta_ 3 valori: l'indirizzo dell'array creato dinamicamente come valore di ritorno e 2 valori interi per "side effect".

## Esercizio 6

Definita la t-upla:

struct puntoPiano{

    double x;
    double y;
};

caricare dal file __puntiPiano.dat__ in un array di __puntoPiano__, allocato dinamicamente, di dimensione pari al numero di punti descritti nel file. Stampare quindi a video:

- il numero di punti caricati;
- le coordinate e la posizione all'interno dell'array del punto più distante dall'origine;
- le coordinate e la posizione all'interno dell'array del punto più vicino all'origine.

## Esercizio 7

Eliminare dall'array caricato nell'esercizio precedente tutti i punti che distino dall'origine degli assi più di 0.5 volte la distanza del punto più lontano determinato sempre nell'esercizio precedente.


