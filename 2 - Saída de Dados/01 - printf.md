# A função printf()

Presente na bilioteca stdio.h, a função printf serve, como seu nome
induz, para "imprimir" algo na tela, isto é, escrever algo no teminal.

## Como usar

O seu uso é bastante simples. Como exemplo, vamos exibir a mensagem
`Ola Mundo` na tela do usuário.

```C
printf("Ola Mundo!");
```

Sobre esse exemplo, é importante destacar que a linguagem C utiliza o
padrão `ASCII` para a exibição de caracteres, portanto letras acentuadas
não são suportadas. Outro ponto a destacar é que como tudo em C, a
função `printf()` também precisa ser "fechada" com o ponto e vírgula (;).

## Quebra de Linha

Caso você coloque esse trecho de código dentro da sua função `main` e
execute, você vai ver que vai aparecer no terminal a mensagem, porém
não haverá uma quebra de linha no final.

Para corrigir isso, é só adicionarmos o caractere da tabel `ASCII`
correspondente à quebra de linha, que é o `\n`. Por exemplo:

```C
printf("Esse texto esta em uma linha.\n");
printf("Esse texto esta em outra.\n");
```