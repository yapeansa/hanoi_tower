# Torre de Hanoi

O objetivo na torre de Hanoi é mover uma pilha inteira de uma haste para outra obedecendo às seguintes regras:

1. Move-se apenas um disco de cada vez;
2. Cada movimento consiste em retirar o disco do topo de uma pilha e adicioná-lo ao topo de outra pilha;
3. Nenhum disco pode ser adicionado ao topo de um disco menor.

## Solução utilizando 3 discos

Chamada da função `hanoi_tower(3, 'A', 'B', 'C')`.

Temos `n` &ne; `1`. Assim, a função `hanoi_tower(2, 'A', 'C', 'B')` é chamada.

Ainda temos `n` &ne; `1`. Desta forma, a função `hanoi_tower(1, 'A', 'B', 'C')`.

Desta vez, temos `n` = `1`. Com isto obtemos as seguinte saídas:

```bash
Mover disco 1 de A para B
```

```bash
Mover disco 2 de A para C
```

Agora temos a chamada da função `hanoi_tower(1, 'B', 'C', 'A')`. Esta chamada nos fornece a saída:

```bash
Mover disco 1 de B para C
```

Em seguida obtemos a seguinte saída, referente a chamada `n = 3`:

```bash
Mover disco 3 de A para B
```

É feita então a chamada da função `hanoi_tower(2, 'C', 'B', 'A')`. Aqui novamente temos `n` &ne; `1` de modo que a função `hanoi_tower(1, 'C', 'A', 'B')` é chamada. Com isso, obtemos a seguinte saída:

```bash
Mover disco 1 de C para A
```

```bash
Mover disco 2 de C para B
```

Agora a função `hanoi_tower(1, 'A', 'B', 'C')` é chamada. Temos a seguinte saída para esse caso:

```bash
Mover disco 1 de A para B
```
## Executando o arquivo

Para rodar o programa basta executar `./run.sh` no terminal. Talvez seja necessário tornar o arquivo run.sh um executável. Isto pode ser feito por meio do comando `chmod u+x run.sh`.
