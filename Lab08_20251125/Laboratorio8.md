# Laboratorio 8: Librerie array, simulazione esperimento, stima Monte Carlo di $\pi$.


## Intro
Dopo aver creato librerie per la gestione di array di vari tipi, affronteremo il problema della sintesi di dati sperimentali (affetti da discrepanze). Affronteremo poi il problema della stima Monte Carlo del valore di $\pi$, andando ad analizzare l'andamento della deviazione standard dello stimatore in funzione del numero di punti usati per produrre una rilevazione o del numero di misure. Tra una cosa e l'altra incontreremo un utile programma che consente di disegnare "cose" in modo semplice...e gratuito...


## Esercizio 1
Creare una libreria __LibArrayFloat__ a partire dalle operazioni su array di `float` implementate nell'Esercizio 1 del Laboratorio 7. 
Creare quindi analoghe librerie per array di `double` (__LibArrayDouble__) e di `int` (__LibArrayInt__).

NOTA: l'implementazione delle versioni `double` e `int` della libreria non richiedono di riscrivere tutto i codice: fate caso a quali sono i punti in cui al posto di `float` deve comparire `double` o `int`...e usate il _replace_ di VSCode...

## Esercizio 2
Usando la libreria __LibCasuali__, che trovate nella cartella __Librerie__ e la libreria __LibArrayInt__ definita nell'esercizio precedente, caricate un array di 50 interi estratti a caso tra -20 e 20. Determinare quindi il numero di elementi <0 presenti nel vettore determinato. Eliminare (per swap) tutti gli elementi negativi  (<0) dall'array.

## Esercizo 3
Il file __vettoriPiano.dat__ contiene un numero non precisato, ma < 200, di vettori in $\mathbb{R}^2$. Le componenti di ciascun vettore, rispetto ad un sistema di riferimento cartesiano assegnato, compaiono su una singola riga del file come coppia di valori (`double`).

Scrivere un programma che determini:
1. Il numero di vettori descritti sul file.
2. Il vettore di modulo massimo.
3. Il vettore con la proiezione massima sul vettore __vR = (2.5,5.5)__.

__Attenzione__: i valori descritti su file non possono essere caricati prima su un array (o meglio, potremmo, ma sareste capaci?). Bisogna quindi tenere traccia, _durante_ il caricamento da file, di quanti elementi si sono caricati, di quale e` il vettore di modulo massimo e di quale è vettore ha proiezione massima su __vR__ incontrato fino ad ora. 


## Esercizio 4

La posizione (in cm) di un punto materiale che si muove di moto uniforme 

$x(t)= x0 + v t$

viene misurata a tempi $t_i = i \delta t,\ i=0,1,...,N$.  
Le misure di posizione sono affette da discrepanze Gaussiane di media $\mu = 0\ \text{cm}$  e deviazione standard $\sigma = 0.2\ \text{cm}$. Il dato misurato al tempo $t_i$, quindi, è:

$x_i = x0 + v t_i + e_i$

dove $e_i$ è estratto da una Gaussiana $N(0,0.2)$.

Fissato $x0=1.2\ \text{cm}$,  $\delta t = 0.5\ \text{s}$, $v = 3.2\ \text{cm/s}$ e $N=50$, registrare sul file __rilevazioni.dat__ $N+1$ coppie di valori $(t_i,x_i)$.
Il file dovrà avere il seguente formato:
Prima riga

```# rilevazioni.dat```

Seconda riga

```# time pos````

con time e pos scritte su campi di ampiezza 18 e allineati a destra.

$N+1$ righe successive

```t_i pos_i````

con t_i e pos_i scritte su campi di ampiezza 18 e allineati a destra.


## Esercizio 5 (Stima Monte Carlo di pi-greco)

Scrivere una funzione __double rilevazionePi( double l, int npoints)__ che, presa in ingresso la lunghezza del lato del quadrato, avente spigolo in basso a sinistra nell'origine, in cui verranno estratti __npoints__ punti (uniformemente) a caso, restituisca una rilevazione di $\pi$ come definita a lezione ($\propto$ #pInCerchio/__npunti__).

NOTA: supporremo che il raggio del cerchio da considerare sia sempre uguale a __l__.

## Esercizio 6

Scrivere una funzione __void misuraPi(double l, int npoints, int nmeas, double stat[2])__ che:
1.  Effettui una stima di $\pi$ usando __nmeas__ rilevazioni da __npoints__ punti ciascuna. Le rilevazioni devono essere fatte, ovviemente, richiamando la funzione __rilevazionePi__ definita nell'esercizio precedente.
2. Registri nel vettore __double stat[2]__ la media (stima di $\pi$) e la deviazione standard (accuratezza?) del vettore delle misure; in particolare la media sarà registrata in __stat[0]__ e la deviazione standard in __stat[1]__.

Verificate il funzionament della funzione richiamandola con  $M=50$ rilevazioni, ciascuna ottenuta con __npunti__=100.

ATTENZIONE: la funzione chiamante __misuraPi__ dovrà passare alla funzione un suo array di due elementi double, così che la funzione possa esportare due valori per "side effect".

## Esercizio 7
Effettuate misure di $\pi$ usando i valori 

M = 10,20,30,...,90,100.

Registrate i risultati (M, media(M), stdDev(M)) in un file con il formato

Prima riga

```# mc.dat```

Seconda riga

```# M  media  stddev```

Rige successive

```M_i media_i stddev_i```

con M_i e media_i e stddev_i scritte su campi di ampiezza 18 e allineati a destra.

Che cosa suggeriscono i dati (ricordate che una immagine dice più di 1000 parole!).

# Esercizio 8

Fornite una stima Monte Carlo dell'integrale definito:

$\int_{0}^{\pi} \sin(x)dx$.

estraendo a caso uniformemente in $[0,\pi]$ le ascisse, e valutando la funzione integranda nei punti estratti (vedere slides MonteCarlo.pdf).

Similmente a quanto fatto nel caso della stima Monte Carlo di $\pi$, fate un'analisi delle fluttuazioni intorno al valore medio in funzione del numero di punti usati per la stima.



## Esercizio 9 (approfondimento)
La libreria __LibVettoriR2__ definisce il tipo di dato __vettoreR2__. Definito un array di 100 __vettoreR2__ caricare i vettori descritti nel file __vettoriPiano.dat__ nell'array.

Attenzione: la libreria LibVettoriR2 __definisce__ il tipo di dato __vettoreR2__. Quindi
- se includiamo la libreria, il nostro esecutore può usare il tipo di dato __vettoreR2__ come usa gli altri tipi di dato.
- possiamo quindi, per esempio, dichiarare un array di 100 __vettoreR2__

__vettoreR2 vettPunti[100];__

- A questo punto avremo un array di 100 __vettoreR2__. Ciascuna componente di questo array sarà, come sempre, un __vettoreR2__

__vettPunti[0]__ è una variabile di tipo __vettoreR2__

- Ma un vettoreR2 è un array di due elementi __double__. Come facciamo a scrivere, per esempio, nel primo dei due elementi? Così:

__vettPunti[0][0] = 0.12__

E nel secondo dei due elementi?

__vettPunti[0][1] = 0.13__

E nella prima componente dell'i-esimo punto?

__vettPunti[i][0] = 1.2__

E nella seconda componente dell'i-esimo punto?

__vettPunti[i][1] = 4.1__

Facile no?

Come possiamo visualizzare l'array __vettPunti__? Ogni variabile __double__ in esso contenuta è raggiungibile specificando _due_ posizioni...meditate...e disegnate!

