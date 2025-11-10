# Laboratorio 7: Array, operazioni su array. Librerie.


## Intro
Implementeremo le operazioni su array: appendi, inserisci (in posizione), rimuovi (shift) e rimuovi (swap). Useremo i prototipi visti a lezione, specializzando il tipo a `float`.
Successivamente proseguiremo formando la nostra prima libreria, ovvero collezione di funzioni. Come primo esempio, creeremo una libreria che metta a disposizione le operazioni di base su vettori in $\mathbb{R}^2$.



## Esercizio 1
Implementare le funzioni di:
- appendi
- inserisci in posizione
- rimuovi shift
- rimuovi swap

viste a lezione. Inserire tutto in un file __operazioniArrayFloat.C__ in cui compaia anche un __main__ driver per la verifica delle operazioni.
Usare un vettore di `float` di 5 elementi inizializzato come

__float v[7] = {1.f,2.f,3.f,4.f,5.f};__

e:
- appendere il valore 7.f;
- inserire il valore 2.3 in posizione 1 (si parte da zero);
- appendere il valore 10.3 (cosa succede?);
- rimuovere il valore in posizione 5 con shift;
- rimuovere il valore in posizione 1 con swap;

Dopo ogni operazione stampare a video:
- il numero di elementi presenti nell'array;
- gli elementi presenti nell'array.

## Esercizio 2
Usando la funzione __append__ definita a lezione, e implementata nell'esercizio precedente, caricare i valori contenuti nel file __data.dat__. Il file contiene meno di 120 elementi. Ricordatevi di usare il valore restituito dalla funzione!

## Esercizio 3

Implementare una funzione 

__int ricercaLineare(int v[], int size, int used, int elem)__

che restiuisca:
- la posizione del primo valore in _v_ uguale a __elem__, ovvero, pos: __v[pos] == elem__, se tale valore c'è nell'array
- -1 se __elem__ non si trova nell'array. 

## Esercizio 4
Implementata la funzione:

__int ricercaLineareRange(float v[], int size, int used, float min, float max)__

che, preso in ingresso un array di `float` restituisca la posizione del primo elemento, a partire da sinistra, che sia compreso tra __min__ e __max__. Se tale elemento non si trova nell'array la funzione restituisce -1.

Usate questa funzione insieme ad  una funzione di rimozione per scremare (eliminare) dal vettore caricato nell'Esercizio 2 tutti gli elementi compresi tra 2.3 e 10.2. Ogni volta che si elimina un elemento stampare a video il suo valore, la sua posizione e la numerosità degli elementi rimasti nel vettore dopo l'eliminazione.

## Esercizio 5
Completare la libereria __vettoriR2__ discussa oggi in lab aggiungendo le funzioni:

- sottrazione di due vettori
- determinazione angolo rispetto a ascisse date componenti cartesiane
- determinazione componente $x$ e $y$ dato modulo e angolo
- test ortogonalità di due vettori in ingresso (restituisce vero se ortogonali, falso altrimenti).
- lettura da tastiera di un vettore in $\mathbb{R}^2$.
- stampa a video (possibilmente ben impaginata)

Scrivere anche un programma driver che verifichi il funzionamento delle funzioni della libreria.