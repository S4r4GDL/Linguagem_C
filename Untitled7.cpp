// Arquivo stdlib.h.
// Interface da biblioteca stdlib.
///////////////////////////////////////////////////////////

#ifndef _STDLIB_H
#define _STDLIB_H

#include <stddef.h>

///////////////////////////////////////////////////////////
// Seção 1: Comunicação com o sistema operacional          
///////////////////////////////////////////////////////////

// O programa terminou de maneira excepcional.

#define	EXIT_FAILURE  1

// O programa terminou de maneira normal.

#define	EXIT_SUCCESS  0


// A função exit interrompe a execução do programa e fecha
// os arquivos que o programa tenha porventura aberto. Se
// status = 0, o sistema operacional é informado de que o
// programa terminou com sucesso; caso contrário, o sistema
// operacional é informado de que o programa terminou de
// maneira excepcional. Uso típico: exit (EXIT_FAILURE).

void exit (int status);


///////////////////////////////////////////////////////////
// Seção 2: Números pseudoaleatórios
///////////////////////////////////////////////////////////

#define RAND_MAX  2147483647


// A função rand devolve um número inteiro aleatório 
// (= random) no intervalo fechado 0..RAND_MAX.
// (Gostaríamos que os números fossem uniformemente
// distribuídos no intervalo 0..RAND_MAX, mas não há
// qualquer garantia nesse sentido.) Uso típico:
// i = rand ().

int rand (void);


// A função srand define uma "semente" para a função rand.
// Ela deve ser chamada antes do primeiro uso de rand para
// que a sequência de números devolvidos por rand não seja
// sempre a mesma. Uso típico: srand (time (NULL)).

void srand (unsigned int);


///////////////////////////////////////////////////////////
// Seção 3: Conversão de strings em números
///////////////////////////////////////////////////////////


// A função strtol ("string-to-long") recebe uma string s
// de caracteres ASCII e um inteiro b no conjunto 2..36,
// interpreta s como um número inteiro representado na
// base b, e devolve esse inteiro. Exemplo:
//     strtol ("-1234", NULL, 10) vale -1234 e 
//     strtol ("159", NULL, 16) vale 9f.
// A string s deve ter a seguinte forma:
//  - Uma sequência (possivelmente vazia) de caracteres
//    brancos. Esses caracteres são descartados.
//  - Possivelmente um caractere '+' ou um caractere '-'.
//  - Uma sequência não vazia de dígitos na base b. (Se b 
//    for 10, os dígitos pertencem ao conjunto 0..9; se b
//    for 16, os dígitos são 0..9 e a..f; etc.).
//  - Uma sequência que começa com um caractere
//    (tipicamente \0) diferente de qualquer dígito na 
//    base b. Essa string final é conhecida como cauda de s
//    e é ignorada pela função. Se o parâmetro tailptr é 
//    diferente de NULL, strtol armazena  em *tailptr o 
//    endereço da cauda de s. 
// Se o inteiro representado por s não cabe em um long int,
// strtol devolve LONG_MAX ou LONG_MIN (conforme o sinal do
// inteiro). [Este resumo omite alguns detalhes; veja a
// documentação completa.]  Uso típico:
// n = strtol (s, NULL, 10).

long int strtol (char *s, char **tailptr, int b);


// OBSOLETA: A função atoi ("alphanumeric-to-integer") 
// recebe uma string que representa um número inteiro em 
// notação decimal e converte essa string no número inteiro
// correspondente. Exemplo:
//      atoi ("-1234") vale -1234,
//      atoi ("1234") vale 1234.
// É responsabilidade do usuário garantir que o número
// representado pela string pertence ao intervalo fechado
// INT_MIN..INT_MAX. Uso típico: i = atoi (s).

int atoi (char *); 


// OBSOLETA: A função atof ("alphanumeric-to-float") 
// recebe uma string que representa um número real em 
// notação decimal e converte essa string no número real
// correspondente. Exemplo: 
//     atof ("1234.99") vale 1234,99. 
// Uso típico: f = atof (str).

double atof (char *);


///////////////////////////////////////////////////////////
// Seção 4: Alocação de memória
///////////////////////////////////////////////////////////

#define NULL 0

// size_t ("size-type") é o tipo de objeto devolvido pelo
// operador sizeof.

typedef unsigned int size_t;


// A função malloc ("memory-allocation") recebe um inteiro
// N e aloca um bloco de N bytes consecutivos na memória.
// Devolve o endereço do primeiro byte alocado. Se não
// puder alocar os N bytes, malloc devolve NULL. Uso
// típico: ptr = malloc (N).

void *malloc (size_t N);


// A função realloc muda para N o tamanho do bloco de bytes
// na memória apontado por ptr. O bloco deve ter sido
// originalmente alocado por malloc ou realloc. Ficam
// inalterados os primeiros K bytes do bloco, sendo K o
// menor entre N e o número original de bytes do bloco.
// (Tipicamente, N é maior que o número de bytes original,
// um novo bloco de N bytes é alocado, e o conteúdo do
// bloco original é copiado para o novo bloco.) A função
// devolve o endereço do novo bloco de bytes (ou NULL em
// caso de falha). Se o bloco for realocado para outro 
// lugar na memória, o bloco original é desalocado. 
// Uso típico: ptr = realloc (ptr, N).

void *realloc (void *ptr, size_t N);


// A função free recebe o endereço de um bloco de bytes 
// previamente alocado por malloc ou realloc e desaloca 
// (= libera) o bloco de bytes. Uso típico: free (ptr).

void free (void *);


///////////////////////////////////////////////////////////
// Seção 5: Busca binária
///////////////////////////////////////////////////////////

// A função bsearch ("binary-search") recebe o endereço key
// de um objeto e um vetor v[0..n-1] de objetos. Cada
// objeto ocupa s bytes. O vetor está em ordem crescente,
// sendo a comparação entre elementos do vetor dada pela
// função compar (veja detalhes abaixo). A função devolve
// o endereço de um elemento do vetor que tenha valor igual
// a *key ou devolve NULL se tal elemento não existe.

void *bsearch (void *key, void *v, size_t n, size_t s,
               int (*compar) (void *, void *));


///////////////////////////////////////////////////////////
// Seção 6: Ordenação 
///////////////////////////////////////////////////////////


// A função qsort rearranja o vetor v[0..n-1] em ordem
// crescente. Cada elemento de v ocupa s bytes. A
// comparação entre elementos do vetor é dada pela função
// compar. [Detalhes abaixo.]

void qsort (void *v, size_t n, size_t s, 
            int (*compar) (void *, void *));


#endif
