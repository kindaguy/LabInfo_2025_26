# Laboratorio 2: Hello world, overflow, precisione

In questo laboratorio scriveremo alcuni semplici programmi in C++. 

## Ricordate
- compilare: __g++ `<nomefilesorgente> ` -o `<nomefileeseguibile> `__
- eseguire:` ./<nomefileeseguibile> `

Niente spazi tra . e / e tra / e monefile
- convenzionalmente il file sorgente si indica con estensione .C oppure .cpp oppure .cxx. Questo consente, tra l'altro, anche all'editor (VSCode) di inferire la tipologia di contenuto del file e evidenziare la sintassi.


## Esercizio 1

Completate il programma contenuto nel file __letturaTastiera.C__.
In particolare
1. provate a leggere e a stampare un numero razionale e a registrarlo in un contenitore intero (variabile __int__).
1. provate a leggere un numero razionale dopo aver fatto il punto precedente.

## Esercizio 2
1. Scrivere un programma che, letto da tastiera un numero intero, stampi a video il numero successivo e il numero precedente a quello fornito in ingresso.
1. Immettete come input 2147483647. Sommate 1, registrate il valore ottenuto nella variabile intera __int c__ e stampate il risultato.
1. Sottraete 1 a __c__ e stampate il risultato.

Discutiamone....

## Esercizio 3
Scrivere un programma che legga in ingresso due numeri interi e li memorizzi nelle variabili __int a__ e __int b__ rispettivamente.

Stampare a video __a+b__, __a-b__, __a*b__ e __a/b__. Cosa osserviamo? 
Provate poi a stampare il risultato delle seguenti operazioni:
1. (1.0*a)/b
2. 1.0*(a/b)
3. a/(1.0*b)
Cosa osservate?

## Esercizio 4

Nella vita bisogna prendere decisioni e comportarsi di conseguenza...

Scrivere un programma che legge in ingresso un numero, diciamo __x__, intero e stampi a video il messaggio __"il numero è positivo"__ se __x>=0__ o __"il numero è negativo"__ altrimenti.

NOTA: si tratta di un argomento non introdotto in modo esaustivo (lo faremo nella prossima lezione). Fate riferimento alle slide associate a questo laboratorio e/o provate a controllare il documento a questo link https://en.cppreference.com/w/cpp/language/if e vedete cosa riuscite ad evincere...

## Esercizio 5

Scrivere un programma che, letto un intero nella variabile __int num__ determini e stampi a video se il numero è 
- positivo (__>=0__) e pari
- positivo e dispari
- negativo (non positivo) e pari 
- negativo (non positivo) e dispari

Questo richiederà di usare delle "selezioni annidate". Partite dal risultato dell'Esercizio 4 e aggiungete, sia nel blocco riferito al ramo __true__ del test, sia nel blocco riferito al ramo __false__ del test, un ulteriore test per verificare la parità del numero. 

NOTA: il resto della divisione del numero intero __a__ per due si calcola come __a%2__. Se un numero è negativo, per testarne la parità: 

1. Moltiplicare il numero per -1
2. Testare la parità

In pratica 

`int a = -1`

`if( (-1*a)%2 ==o   ) {`

`cout << endl << "dispari" << endl`

`}`

`else { `
    `cout << endl << "pari" << endl;`
`}`
## Esercizio 6

Predisposta una variabile di tipo carattere `char c`, leggere da tastiera un carattere e:
- Se il carattere è un carattere alfabetico "standard" minuscolo (lettera da a a z) stampare il corrispondente carattere maiuscolo.
- Se il carattere è un carattere alfabetico "standard" maiuscolo (lettera da A a Z), stampare il corrispondente carattere minuscolo.
- Se il carattere non è un carattere alfabetico "standard" maiuscolo/minuscolo, stampare a video il messaggio "non posso".

NOTA: fare riferimento alla tabella  [tabella ASCII](https://www.w3schools.com/charsets/ref_html_ascii.asp) per determinare la natura dei caratteri. 

## Esercizio 7
Predisposta una variabile intera  `int appo` leggere un intero da tastiera "mentre" il valore inserito è negativo. Una volta acquisito un valore positivo, stamparlo a video.

NOTA: ricordate il costrutto di iterazione `while`. 

NOTA: il valore deve essere letto una volta prima di verificare la condizione e riletto ogni volta che il valore inserito non è positivo.... 

## Esercizio 8

Il costrutto 

`do{ Blocco} while (cond);`

definisce una __iterazione post-condizionale__. A differenza di una __iterazione pre-condizionale__, il _blocco_ di una iterazione pre-condizionale viene eseguito almeno una volta. Modificare la soluzione dell'Esercizio 6 usando una iterazione pre-condizionale. Quale dei due controlli del flusso di calcolo meglio si adatta alla richiesta dell'Esercizio 6? 

## Esercizio 9

I costrutti di incremento e decremento di una variabile (intera) `int i` possono essere in forma prefissa o suffissa (incremento `++i` o `i++` /decremento `--i` o `i--`). Inizializzata la variabile intera `int i=1` verificate la differenza tra le forme di incremento/decremento prefisse/suffisse.

## Esercizio 10

La serie armonica:

$\sum_{n=1}^\infty \frac{1}{n}$

è divergente: la succcessione delle somme parziali $s_k = \sum_{n=1}^k \frac{1}{n} \rightarrow \infty$ quando $k \to \infty$. Verificare che la succcessione delle somme parziali, se implementata in C++ con $s_k$ memorizzato in un `float` converge (o, come mi piace dire, è "praticamente convergente").

A tal fine potrebbe essere utile:

1.  Predisporre una variabile `float somma = 0.f`. 
2. Usare una variabile `int val`, inizialmente =1
3. Usare un ciclo `while` precondizionale o postccondizionale con 
-  condizione di permanenza nel ciclo `somma + 1.f/val == somma`
- `val` incrementato di uno ad ogni iterazione del ciclo.

Quando avviene la convergenza? Perche'?