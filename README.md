# Jogo da Adivinhação de Números

Este é um programa em C que permite ao usuário escolher mentalmente um número dentro de uma matriz 4x4 e, através de um truque matemático, o programa consegue adivinhar o número escolhido.

## Como Funciona

1. O usuário insere 16 números diferentes para preencher uma matriz 4x4.
2. O programa exibe a matriz e pede para o usuário escolher mentalmente um dos números.
3. O usuário informa em qual coluna está o número escolhido.
4. O programa "embaralha" a matriz e solicita ao usuário que informe novamente a coluna do número escolhido.
5. O programa adivinha o número escolhido e o exibe na tela.
6. O usuário pode optar por jogar novamente ou encerrar o jogo.

## Compilando e Executando

Para compilar o programa, utilize um compilador de C, como o GCC:

```sh
gcc -o jogo_adivinhacao jogo_adivinhacao.c
```

Para executar:

```sh
./jogo_adivinhacao
```

## Exemplo de Execução

```sh
Por favor, digite 16 numeros DIFERENTES para comecarmos:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Agora escolha mentalmente um numero:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Escolheu? Agora me diga em que coluna esta o numero que voce escolheu (1-4): 2

Digite novamente a coluna do numero que voce escolheu (1-4): 3

O numero que voce escolheu e: 10

Quer jogar de novo? (sim/nao): nao
```

## Requisitos

- Compilador C (GCC, Clang, etc.)
- Terminal para execução

## Melhorias Possíveis

- Melhorar a interface com cores e espaçamento para facilitar a visualização.
- Implementar um sistema para garantir que os números inseridos sejam realmente diferentes.
- Criar uma versão com interface gráfica.

## Autor

Criado por [Kleber232]

