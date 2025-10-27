# Laboratorio 5:  array...array...array

## Intro

In questo laboratorio lavoreremo con gli array (forse si poteva intuire dal titolo); ci concentreremo sulla parte di caricamento e stampa, e cercheremo di individuare quali sono le informazioni di cui è necessario disporre
per manipolare in modo consistente un array.

Introdurremo anche una nuova direttiva a preprocessore __#define__ ovvero le costanti "letterali" e la definizione di variabili costanti (__const__) ovvero variabili che non possono variare il contenuto.



## Esercizio 1
Scrivete un programma che, messo a disposizione un vettore di 10 interi, chieda all'utente di inserire valori. 
L'utente può terminare l'inserimento dei dati prima dell'inserimento dei 10 valori interi inserendo il valore sentinella 0. Notate che il valore sentinella non va inserito nell'array, perché non è un dato. Terminato l'inserimento il programma dovrà stampare a video il numero di dati caricati e tutti e soli i dati inseriti.

SUGGERIMENTO: il numero di dati che verrà inserito non è fissato a priori. Questo suggerisce l'uso di un ciclo  __while__ precondizionale.
SUGGERIMENTO: il numero di dati effettivamente contenuto nell'array deve essere registrato da qualche parte.

## Esercizio 2

Estendere l'Esercizio 1 come segue: una volta caricato il vettore di interi con valori letti da tastiera, trascrivere in senso inverso il contenuto del vettore in un altro vettore di 10 interi.
Per intenderci, il vettore contenente la sequenza

1 2 3 4 5

dovrà essere trascritto nel secondo vettore come

5 4 3 2 1

## Esercizio 3

Scrivere un programma che, caricati __n<=10__ valori interi, determini se la sequenza di numeri inserita è "palindroma". Una sequenza è definita _palindroma_ se è identicamente letta nella due direzioni (sx -> dx e dx->sx).

Il programma dovrà, in particolare, stampare a video il messaggio "È palindroma" se la sequenza inserita è palindroma, "NON è palindroma" altrimenti.


## Esercizio 4
Il file __misure.dat__ contiene delle misure. Il file è così formattato: il primo dato nel file è un valore intero, che indica il numero __n__ di misure che seguono. Dopo questo valore, compaiono __n__ misure. Garantiamo che __n<=20__.

Dichiarato un vettore __vett__ di 20 elementi di tipo __float__, caricare le misure nel vettore e stampare a video:
- il numero di misure registrate
- le misure, stampando una misura per riga, su campo di 10 caratteri con allineamento a destra.

Determinare e stampare a video quindi la _media campionaria_ e la _deviazione standard del campione_ degli elementi caricati. 

Ricordiamo che la deviazione standard del campione di N valori è definita come

$\sigma_C = \sqrt{\frac{1}{N}\sum_{j=1}^N (x_j - \bar{x})^2}$,

dove $\bar{x}$ è la  media campionaria.

Suggerimento: 
- $x^2$= __pow(x,2)__
- $\sqrt{x}$ = __sqrt(x)__
- __pow__ e __sqrt__ si trovano nella libreria __cmath__.
- La deviazione standard campionaria è un numero positivo...(a scanso di equivoci...)

## Esercizio 5
Il file __apparato.dat__ contiene informazioni su un sistema di misura per una grandezza fisica. Il sistema di misura restituisce misure con discrepanze rispetto al valore della grandezza modellate come estratte da una popolazione Gaussiana. Il file contiene quindi la media (pre-stima della grandezza misurata) e la deviazione standard delle discrepanze. Oltre ai dati, il file contiene delle didascalie, che illustrano il significato del dato. Le didascalie sono su single righe del file e iniziano con il carattere __#__.

 Il file è così formattato:
- La prima riga è una didascalia. Inizia con il carattere __#__.
- La seconda riga contiene il la pre-stima $\mu$ della grandezza.
- La terza riga è una didascalia. Inizia con il carattere __#__.
- La quarta riga contiene la deviazione standard $\sigma$ delle discrepanze.

Il file __dirtyMeasures.dat__ contiene, invece, le misure effettuate in un take sperimentale. Questo file è formattato come il file __misure.dat__ dell'Esercizio 4. Quindi il primo valore registrato sul file è un intero, diciamo __n <=50__, che indica il numero di misure descritte nel file, seguito dalle misure stesse.  

Alcuni dei dati registrati nel file sono "anomali". Si tratta infatti di rilevazioni eccessivamente rumorose, che da qui in avanti definiremo come _outliers_. In particolare un dato che soddisfi 


$|x_i - \mu|>3 \sigma$

è classificato come outlier.

Scrivere un programma che, caricato il valore di $\mu$ e $\sigma$ dal file __apparato.dat__, carichi dal file __dirtyMeasures.dat__ le misure in un vettore di 50 `float` e stampi a video:

- il numero di misure registrate sul file.
- la media campionaria e le deviazione standard del campione delle misure.
- il numero di misure "anomale" (outliers).
- la posizione nell'array e i valori degli outliers.

NOTA: la funzione __fabs__, contenuta nella libreria __cmath__, restituisce il valore assoluto del suo argomento

__fabs(x)__ = $|x|$.

Registrare sul file __datiOK.dat__ tutti e soli i dati "buoni". Il file dovrà essere formattato come il file __misure.dat__ o __dirtyMeasures.dat__, ovvero contenere in testa il numero delle misure registrate seguito dalle misure, con un dato per riga.

## Esercizio 6

Modificare l'Esercizio precedente facendo in modo che una misura letta da file venga effettivamente inserita nel vettore solo se la misura non è anomala.

Ogni volta che si legge da file un dato outlier, stampare a video il suo valore, e registrare su file __buttati.dat__ la misura anomala.

Finito il caricamento dei dati, stampare a video:
- il numero di valori buoni
- il numero di valori outlier
- la media campionaria e la deviazione standard dei valori buoni.

RIFLESSIONE: quali sono le informazioni che mi permettono di usare in modo consistente un array, ovvero quelle informazioni date le quali posso manipolare tutti e soli i valori contenuti nell'array?

## Esercizio 7 (Crivello di Eratostene)

Si determinino i primi 50 numeri primi nel seguente modo: 
- dicharare un vettore __int primi[50]__
- assegnare __primi[0] = 2 __
- fino a che c'è spazio nel vettore, proporre un numero nuovo, diciamo _n_ (cominciando dal valore 3 e incrementando di volta in volta il valore nuovo di uno) e inserirlo nella prima posizione libera del vettore, che indichiamo con __i__, se __n%v[j] !=0__ per $j=i-1,i-2,...,0$.