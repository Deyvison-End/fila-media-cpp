# Fila com Média Móvel em C++

Projeto desenvolvido em C++ para implementar uma fila circular capaz de calcular a média dos elementos armazenados.

## Objetivo

Manter uma quantidade limitada de elementos em memória e calcular a média dos valores presentes na fila de forma eficiente.

## Conceitos Aplicados

- Fila Circular
- Estruturas de Dados
- Vetores (std::vector)
- Média Móvel
- Manipulação de Índices
- STL

## Funcionamento

Quando a fila atinge sua capacidade máxima:

1. O elemento mais antigo é removido.
2. O novo elemento é inserido.
3. A média é atualizada automaticamente.

## Exemplo

Entrada:

```cpp
10, 2, 3, 5, 6, 10, 7
```

Saída:

```text
10
6
5
5
4
6
7
```

## Tecnologias

- C++
- STL (Standard Template Library)

## Autor

Deyvison
