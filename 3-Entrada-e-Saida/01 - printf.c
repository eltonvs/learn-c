//Na parte 3 iremos inciar de maneira simples com o comando de saída. Nos próximos exemplos, vamos adicionando 
//mais detalhes ao comando. Comecemos com o simples. Vamos criar nosso código: 

#include <stdio.h>
//Tal como em todo código C, incluimos a biblioteca "stdio.h" por meio de "#include";
//"stdio.h" é a biblioteca padrão em C.

int main(void){
//Declaramos a noção função principal (main) e a passamos "void" (vazio) como parâmetro.

  printf("Meu primeiro codigo\n");
  //"printf" é o comando de saída padrão em C;
  
  printf("Estamos começando a programar\n");
  //IMPORTANTE: não esquecer do ponto e vírgula após fechar os parentêses. Veremos que ele é muito importante em linguagem C
  //(diferentemente de Python, por exemplo).
  
  return 0;
  //Toda função deve retornar alguma coisa (veremos mais na frente que não necessáriamente, mas se contente com isso por
  //agora). Neste caso, retornamos 0.
}

//Importante abrir e fechar a função com as chaves { (inicia) e } (termina).

