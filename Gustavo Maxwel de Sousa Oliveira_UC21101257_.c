//Nome completo: Gustavo Maxwel de Sousa Oliveira   Matrícula: UC21101257   Curso: Ciência da Computação
#include<stdio.h>//Biblioteca responsável pelo uso do printf e do scanf.
#include<string.h>//Biblioteca para ler strings, strlen e stromp: http://linguagemc.com.br/a-biblioteca-string-h/
#include<stdlib.h>//Biblioteca para o uso do comando system("pause").
#include<ctype.h>//Biblioteca para o uso do toupper e tolower: http://linguagemc.com.br/ctype-h-toupper-tolower-isalpha-isdigit-em-c/
#include<locale.h>//Biblioteca para uso de acentuação dentro do printf. 
int main(){
    setlocale(LC_ALL, "Portuguese");//Direciona a biblioteca ao idioma que vai ser usado pelo <locale.h>.
    printf("----------------------------------------Bem vindo ao melhor cinema de Brasília!-----------------------------------------");//Comando que printa na tela o que foi escrito dentro dos parênteses, para o usuário.
    int qtdSessoes, qtdPessoasAssistiram, idade, contador;//Comando para declarar as variáveis e armazenar no espaço da memória, do tipo inteiro. 
    int criancas=0, adolescentes=0, adultos=0, idosos=0, mulheres=0, homens=0, homensIdade=0, mulheresIdade=0;//Comando para declarar as variáveis e armazenar no espaço da memória, do tipo inteiro.
    char nomeFilme[50], sexo;//Comando para declarar as variáveis e armazenar no espaço da memória, do tipo caractere.
    //A utilização de nomes de variáveis tão detalhadas, vem do livro código limpo, pagina 19 parte, onde se detalha para evitar erros dentro do algoritmo.
	//Sempre ter comentários bons, mas não para esconder um programa ruim, mas sim para incrementar em seu código, página 59, do livro código limpo.
	
	do{//Função "faça enquanto" onde se repete algo até que a condição proposta se torne falsa.
        printf("Insira a quantidade de sessões:");//Comando que printa na tela o que foi escrito dentro dos parênteses, para o usuário.
        scanf("%d", &qtdSessoes);//Comando que salva as variáveis na memória onde foi declarado pelo int e char.
        fflush(stdin);//Comando para limpar o buffer de memória.
        if(qtdSessoes < 2 || qtdSessoes > 2)//Comando "se" para executar algo, se a condição declarada entre parênteses for verdadeira ou falsa, dependendo da condição.
        printf("Deve ser inserido somente 2 sessões.\n");
        else//Comando "então" no caso da condição do "se" não ser aceita ira paro o "então".
        printf("Sessões inseridas com sucesso.\n");
    }while(qtdSessoes < 2 || qtdSessoes > 2);//Comando "enquanto", enquanto a condição se manter, o que está acima será executado, quando não estiver mais na condição encerra-se a repetição.
                    
    do{//Função "faça enquanto" onde se repete algo ate que a condição se torne falsa.
        printf("Digite o nome do filme:");//Comando que printa na tela o que foi escrito dentro dos parênteses, para o usuário.
        fgets(nomeFilme, 50, stdin);//Comando para salvar uma variável na memória, é como o scanf, mas ele consegue salvar os espaços entre nomes, conseguindo dar mais nomes. 
        fflush(stdin);//Comando para limpar o buffer de memória.
        if(strlen(nomeFilme)<=2)//Comando "se" para executar algo, se a condição declarada entre parênteses for verdadeira ou falsa, dependendo da condição.
        printf("Nome inválido, digite novamente.\n");
        else//Comando "então" no caso da condição do "se" não ser aceita ira paro o "então".
        printf("Nome do filme aceito.\n");
    }while(strlen(nomeFilme)<=2);//Função "enquanto", enquanto a condição se manter, o que está acima será executado, quando não estiver mais na condição encerra-se a repetição.
    
    do{//Função "faça enquanto" onde se repete algo ate que a condição se torne falsa.
        printf("Digite a quantidade de pessoas que assistiram ao filme:");//Comando que printa na tela o que foi escrito dentro dos parênteses, para o usuário.
        scanf("%d", &qtdPessoasAssistiram);//Comando que salva as variáveis na memória onde foi declarado pelo int e char.
        fflush(stdin);//Comando para limpar o buffer de memória.
        if(qtdPessoasAssistiram < 10)//Comando "se" para executar algo, se a condição declarada entre parênteses for verdadeira ou falsa, dependendo da condição.
        printf("Quantida de pessoas insuficiente, tente um número maior que 9.\n");
        else//Comando "então" no caso da condição do "se" não ser aceita ira paro o "então".
        printf("Número de pessoas aceito com sucesso.\n");
    }while(qtdPessoasAssistiram < 10);//Função "enquanto", enquanto a condição se manter, o que está acima será executado, quando não estiver mais na condição encerra-se a repetição.
    
    for(contador=1; contador<=qtdPessoasAssistiram; contador++){// Função "para", é utilizada para um número específivo de repetições, diferente do "faça" ou "faça enquanto".
        do{//Função "faça enquanto" onde se repete algo até que a condição se torne falsa.
        printf("Informe o sexo da pessoa %d que assistiu ao filme com M (Masculino) ou F (Feminino) :",contador);//Comando que printa na tela o que foi escrito dentro dos parênteses, para o usuário.
        scanf("%c", &sexo);//Comando que salva as variáveis na memória onde foi declarado pelo int e char.
        fflush(stdin);//Comando para limpar o buffer de memória.
		sexo = toupper(sexo);//Comando "toupper" é usado para que o código leia letras tanto maiúsculas como em minúsculas, sendo mais prático para o usuário.
        if(sexo != 'M' && sexo != 'F')//Comando "se" para executar algo, se a condição declarada entre parênteses for verdadeira ou falsa, dependendo da condição.
        printf("Sexo inválido, digite novamente.\n");
        else//Comando "então" no caso da condição do "se" não ser aceita ira paro o "então".
        printf("Sexo aceito com sucesso.\n");
        }while(sexo != 'M' && sexo != 'F');//Função "enquanto", enquanto a condição se manter, o que está acima será executado, quando não estiver mais na condição encerra-se a repetição.
        
        do{//Função "faça enquanto" onde se repete algo até que a condição se torne falsa.
        printf("Digite a idade da pessoa %d que estava na sessão:",contador);//Comando que printa na tela o que foi escrito dentro dos parênteses, para o usuário.
        scanf("%d", &idade);//Comando que salva as variáveis na memória onde foi declarado pelo int e char.
        fflush(stdin);//Comando para limpar o buffer de memória.
        if(idade < 3 || idade > 100)//Comando "se" para executar algo, se a condição declarada entre parênteses for verdadeira ou falsa, dependendo da condição.
        printf("Idade inválida, tente novamente.\n");
        else//Comando "então" no caso da condição do "se" não ser aceita ira paro o "então".
        printf("Idade aceita com sucesso.\n");
        }while(idade < 3 || idade > 100);//Função "enquanto", enquanto a condição se manter, o que está acima será executado, quando não estiver mais na condição encerra-se a repetição.
        
        if(idade >= 3 && idade <= 13)//Comando "se" para executar algo, se a condição declarada entre parênteses for verdadeira ou falsa, dependendo da condição.
        criancas++;//Comando "++" um comando de auto incremento, onde adiciona +1 ao contador a cada vez que se repete, como se fosse "variável = variável + 1".
        if(idade >= 14 && idade <= 17)
        adolescentes++;
        if(idade >= 18 && idade <= 64)
        adultos++;
        if(idade >= 65 && idade <= 100)
        idosos++;
        if(sexo == 'M')
        homens++;
        if(sexo == 'F')
        mulheres++;
		if(sexo == 'M' && idade >= 18)
        homensIdade++;
        if(sexo == 'F' && idade >= 18)
        mulheresIdade++;
    }
	system("cls");//Comando "system("cls")" para limpar a tela, deixando a janela sem nada.
    
	printf("Filme: %s", nomeFilme);//Comando que printa na tela o que foi escrito dentro dos parênteses, para o usuário.
    printf("Mulheres: %d\n", mulheres); 
    printf("Homens: %d\n", homens); 
    printf("Crianças: %d\n", criancas); 
    printf("Adolescentes: %d\n", adolescentes); 
    printf("Adultos: %d\n", adultos);
    printf("Idosos: %d\n", idosos); 
    system("pause"); //Comando "system("pause")" para dar uma pausa no programa, para sair da pausa se aperta qualquer tecla. 
    system("cls");//Comando "system("cls")" para limpar a tela, deixando os dados intactos, apenas limpando a janela.
    printf("Na sessão havia(m) presente(s) %d mulher(es) maior(es) de idade.\n", mulheresIdade); 
    printf("Na sessão havia(m) presente(s) %d homen(s) maior(es) de idade. \n", homensIdade); 
    system("pause"); //Comando "system("pause")" para dar uma pausa no programa, saindo da pausa ao apertar qualquer tecla.
    return 0; //Comando para que o valor do algortimo retorne a zero.
    }	
