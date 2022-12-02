// Arquivo stdlib.h.
// Interface da biblioteca stdlib.
///////////////////////////////////////////////////////////

#ifndef _STDLIB_H
#define _STDLIB_H

#include <stddef.h>

///////////////////////////////////////////////////////////
// Se��o 1: Comunica��o com o sistema operacional          
///////////////////////////////////////////////////////////

// O programa terminou de maneira excepcional.

#define	EXIT_FAILURE  1

// O programa terminou de maneira normal.

#define	EXIT_SUCCESS  0


// A fun��o exit interrompe a execu��o do programa e fecha
// os arquivos que o programa tenha porventura aberto. Se
// status = 0, o sistema operacional � informado de que o
// programa terminou com sucesso; caso contr�rio, o sistema
// operacional � informado de que o programa terminou de
// maneira excepcional. Uso t�pico: exit (EXIT_FAILURE).

void exit (int status);


///////////////////////////////////////////////////////////
// Se��o 2: N�meros pseudoaleat�rios
///////////////////////////////////////////////////////////

#define RAND_MAX  2147483647


// A fun��o rand devolve um n�mero inteiro aleat�rio 
// (= random) no intervalo fechado 0..RAND_MAX.
// (Gostar�amos que os n�meros fossem uniformemente
// distribu�dos no intervalo 0..RAND_MAX, mas n�o h�
// qualquer garantia nesse sentido.) Uso t�pico:
// i = rand ().

int rand (void);


// A fun��o srand define uma "semente" para a fun��o rand.
// Ela deve ser chamada antes do primeiro uso de rand para
// que a sequ�ncia de n�meros devolvidos por rand n�o seja
// sempre a mesma. Uso t�pico: srand (time (NULL)).

void srand (unsigned int);


///////////////////////////////////////////////////////////
// Se��o 3: Convers�o de strings em n�meros
///////////////////////////////////////////////////////////


// A fun��o strtol ("string-to-long") recebe uma string s
// de caracteres ASCII e um inteiro b no conjunto 2..36,
// interpreta s como um n�mero inteiro representado na
// base b, e devolve esse inteiro. Exemplo:
//     strtol ("-1234", NULL, 10) vale -1234 e 
//     strtol ("159", NULL, 16) vale 9f.
// A string s deve ter a seguinte forma:
//  - Uma sequ�ncia (possivelmente vazia) de caracteres
//    brancos. Esses caracteres s�o descartados.
//  - Possivelmente um caractere '+' ou um caractere '-'.
//  - Uma sequ�ncia n�o vazia de d�gitos na base b. (Se b 
//    for 10, os d�gitos pertencem ao conjunto 0..9; se b
//    for 16, os d�gitos s�o 0..9 e a..f; etc.).
//  - Uma sequ�ncia que come�a com um caractere
//    (tipicamente \0) diferente de qualquer d�gito na 
//    base b. Essa string final � conhecida como cauda de s
//    e � ignorada pela fun��o. Se o par�metro tailptr � 
//    diferente de NULL, strtol armazena  em *tailptr o 
//    endere�o da cauda de s. 
// Se o inteiro representado por s n�o cabe em um long int,
// strtol devolve LONG_MAX ou LONG_MIN (conforme o sinal do
// inteiro). [Este resumo omite alguns detalhes; veja a
// documenta��o completa.]  Uso t�pico:
// n = strtol (s, NULL, 10).

long int strtol (char *s, char **tailptr, int b);


// OBSOLETA: A fun��o atoi ("alphanumeric-to-integer") 
// recebe uma string que representa um n�mero inteiro em 
// nota��o decimal e converte essa string no n�mero inteiro
// correspondente. Exemplo:
//      atoi ("-1234") vale -1234,
//      atoi ("1234") vale 1234.
// � responsabilidade do usu�rio garantir que o n�mero
// representado pela string pertence ao intervalo fechado
// INT_MIN..INT_MAX. Uso t�pico: i = atoi (s).

int atoi (char *); 


// OBSOLETA: A fun��o atof ("alphanumeric-to-float") 
// recebe uma string que representa um n�mero real em 
// nota��o decimal e converte essa string no n�mero real
// correspondente. Exemplo: 
//     atof ("1234.99") vale 1234,99. 
// Uso t�pico: f = atof (str).

double atof (char *);


///////////////////////////////////////////////////////////
// Se��o 4: Aloca��o de mem�ria
///////////////////////////////////////////////////////////

#define NULL 0

// size_t ("size-type") � o tipo de objeto devolvido pelo
// operador sizeof.

typedef unsigned int size_t;


// A fun��o malloc ("memory-allocation") recebe um inteiro
// N e aloca um bloco de N bytes consecutivos na mem�ria.
// Devolve o endere�o do primeiro byte alocado. Se n�o
// puder alocar os N bytes, malloc devolve NULL. Uso
// t�pico: ptr = malloc (N).

void *malloc (size_t N);


// A fun��o realloc muda para N o tamanho do bloco de bytes
// na mem�ria apontado por ptr. O bloco deve ter sido
// originalmente alocado por malloc ou realloc. Ficam
// inalterados os primeiros K bytes do bloco, sendo K o
// menor entre N e o n�mero original de bytes do bloco.
// (Tipicamente, N � maior que o n�mero de bytes original,
// um novo bloco de N bytes � alocado, e o conte�do do
// bloco original � copiado para o novo bloco.) A fun��o
// devolve o endere�o do novo bloco de bytes (ou NULL em
// caso de falha). Se o bloco for realocado para outro 
// lugar na mem�ria, o bloco original � desalocado. 
// Uso t�pico: ptr = realloc (ptr, N).

void *realloc (void *ptr, size_t N);


// A fun��o free recebe o endere�o de um bloco de bytes 
// previamente alocado por malloc ou realloc e desaloca 
// (= libera) o bloco de bytes. Uso t�pico: free (ptr).

void free (void *);


///////////////////////////////////////////////////////////
// Se��o 5: Busca bin�ria
///////////////////////////////////////////////////////////

// A fun��o bsearch ("binary-search") recebe o endere�o key
// de um objeto e um vetor v[0..n-1] de objetos. Cada
// objeto ocupa s bytes. O vetor est� em ordem crescente,
// sendo a compara��o entre elementos do vetor dada pela
// fun��o compar (veja detalhes abaixo). A fun��o devolve
// o endere�o de um elemento do vetor que tenha valor igual
// a *key ou devolve NULL se tal elemento n�o existe.

void *bsearch (void *key, void *v, size_t n, size_t s,
               int (*compar) (void *, void *));


///////////////////////////////////////////////////////////
// Se��o 6: Ordena��o 
///////////////////////////////////////////////////////////


// A fun��o qsort rearranja o vetor v[0..n-1] em ordem
// crescente. Cada elemento de v ocupa s bytes. A
// compara��o entre elementos do vetor � dada pela fun��o
// compar. [Detalhes abaixo.]

void qsort (void *v, size_t n, size_t s, 
            int (*compar) (void *, void *));


#endif
