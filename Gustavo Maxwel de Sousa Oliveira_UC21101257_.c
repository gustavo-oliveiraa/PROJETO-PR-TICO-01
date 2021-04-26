//Nome completo: Gustavo Maxwel de Sousa Oliveira   Matr�cula: UC21101257   Curso: Ci�ncia da Computa��o
#include<stdio.h>//Biblioteca respons�vel pelo uso do printf e do scanf.
#include<string.h>//Biblioteca para ler strings, strlen e stromp: http://linguagemc.com.br/a-biblioteca-string-h/
#include<stdlib.h>//Biblioteca para o uso do comando system("pause").
#include<ctype.h>//Biblioteca para o uso do toupper e tolower: http://linguagemc.com.br/ctype-h-toupper-tolower-isalpha-isdigit-em-c/
#include<locale.h>//Biblioteca para uso de acentua��o dentro do printf. 
int main(){
    setlocale(LC_ALL, "Portuguese");//Direciona a biblioteca ao idioma que vai ser usado pelo <locale.h>.
    printf("----------------------------------------Bem vindo ao melhor cinema de Bras�lia!-----------------------------------------");//Comando que printa na tela o que foi escrito dentro dos par�nteses, para o usu�rio.
    int qtdSessoes, qtdPessoasAssistiram, idade, contador;//Comando para declarar as vari�veis e armazenar no espa�o da mem�ria, do tipo inteiro. 
    int criancas=0, adolescentes=0, adultos=0, idosos=0, mulheres=0, homens=0, homensIdade=0, mulheresIdade=0;//Comando para declarar as vari�veis e armazenar no espa�o da mem�ria, do tipo inteiro.
    char nomeFilme[50], sexo;//Comando para declarar as vari�veis e armazenar no espa�o da mem�ria, do tipo caractere.
    //A utiliza��o de nomes de vari�veis t�o detalhadas, vem do livro c�digo limpo, pagina 19 parte, onde se detalha para evitar erros dentro do algoritmo.
	//Sempre ter coment�rios bons, mas n�o para esconder um programa ruim, mas sim para incrementar em seu c�digo, p�gina 59, do livro c�digo limpo.
	
	do{//Fun��o "fa�a enquanto" onde se repete algo at� que a condi��o proposta se torne falsa.
        printf("Insira a quantidade de sess�es:");//Comando que printa na tela o que foi escrito dentro dos par�nteses, para o usu�rio.
        scanf("%d", &qtdSessoes);//Comando que salva as vari�veis na mem�ria onde foi declarado pelo int e char.
        fflush(stdin);//Comando para limpar o buffer de mem�ria.
        if(qtdSessoes < 2 || qtdSessoes > 2)//Comando "se" para executar algo, se a condi��o declarada entre par�nteses for verdadeira ou falsa, dependendo da condi��o.
        printf("Deve ser inserido somente 2 sess�es.\n");
        else//Comando "ent�o" no caso da condi��o do "se" n�o ser aceita ira paro o "ent�o".
        printf("Sess�es inseridas com sucesso.\n");
    }while(qtdSessoes < 2 || qtdSessoes > 2);//Comando "enquanto", enquanto a condi��o se manter, o que est� acima ser� executado, quando n�o estiver mais na condi��o encerra-se a repeti��o.
                    
    do{//Fun��o "fa�a enquanto" onde se repete algo ate que a condi��o se torne falsa.
        printf("Digite o nome do filme:");//Comando que printa na tela o que foi escrito dentro dos par�nteses, para o usu�rio.
        fgets(nomeFilme, 50, stdin);//Comando para salvar uma vari�vel na mem�ria, � como o scanf, mas ele consegue salvar os espa�os entre nomes, conseguindo dar mais nomes. 
        fflush(stdin);//Comando para limpar o buffer de mem�ria.
        if(strlen(nomeFilme)<=2)//Comando "se" para executar algo, se a condi��o declarada entre par�nteses for verdadeira ou falsa, dependendo da condi��o.
        printf("Nome inv�lido, digite novamente.\n");
        else//Comando "ent�o" no caso da condi��o do "se" n�o ser aceita ira paro o "ent�o".
        printf("Nome do filme aceito.\n");
    }while(strlen(nomeFilme)<=2);//Fun��o "enquanto", enquanto a condi��o se manter, o que est� acima ser� executado, quando n�o estiver mais na condi��o encerra-se a repeti��o.
    
    do{//Fun��o "fa�a enquanto" onde se repete algo ate que a condi��o se torne falsa.
        printf("Digite a quantidade de pessoas que assistiram ao filme:");//Comando que printa na tela o que foi escrito dentro dos par�nteses, para o usu�rio.
        scanf("%d", &qtdPessoasAssistiram);//Comando que salva as vari�veis na mem�ria onde foi declarado pelo int e char.
        fflush(stdin);//Comando para limpar o buffer de mem�ria.
        if(qtdPessoasAssistiram < 10)//Comando "se" para executar algo, se a condi��o declarada entre par�nteses for verdadeira ou falsa, dependendo da condi��o.
        printf("Quantida de pessoas insuficiente, tente um n�mero maior que 9.\n");
        else//Comando "ent�o" no caso da condi��o do "se" n�o ser aceita ira paro o "ent�o".
        printf("N�mero de pessoas aceito com sucesso.\n");
    }while(qtdPessoasAssistiram < 10);//Fun��o "enquanto", enquanto a condi��o se manter, o que est� acima ser� executado, quando n�o estiver mais na condi��o encerra-se a repeti��o.
    
    for(contador=1; contador<=qtdPessoasAssistiram; contador++){// Fun��o "para", � utilizada para um n�mero espec�fivo de repeti��es, diferente do "fa�a" ou "fa�a enquanto".
        do{//Fun��o "fa�a enquanto" onde se repete algo at� que a condi��o se torne falsa.
        printf("Informe o sexo da pessoa %d que assistiu ao filme com M (Masculino) ou F (Feminino) :",contador);//Comando que printa na tela o que foi escrito dentro dos par�nteses, para o usu�rio.
        scanf("%c", &sexo);//Comando que salva as vari�veis na mem�ria onde foi declarado pelo int e char.
        fflush(stdin);//Comando para limpar o buffer de mem�ria.
		sexo = toupper(sexo);//Comando "toupper" � usado para que o c�digo leia letras tanto mai�sculas como em min�sculas, sendo mais pr�tico para o usu�rio.
        if(sexo != 'M' && sexo != 'F')//Comando "se" para executar algo, se a condi��o declarada entre par�nteses for verdadeira ou falsa, dependendo da condi��o.
        printf("Sexo inv�lido, digite novamente.\n");
        else//Comando "ent�o" no caso da condi��o do "se" n�o ser aceita ira paro o "ent�o".
        printf("Sexo aceito com sucesso.\n");
        }while(sexo != 'M' && sexo != 'F');//Fun��o "enquanto", enquanto a condi��o se manter, o que est� acima ser� executado, quando n�o estiver mais na condi��o encerra-se a repeti��o.
        
        do{//Fun��o "fa�a enquanto" onde se repete algo at� que a condi��o se torne falsa.
        printf("Digite a idade da pessoa %d que estava na sess�o:",contador);//Comando que printa na tela o que foi escrito dentro dos par�nteses, para o usu�rio.
        scanf("%d", &idade);//Comando que salva as vari�veis na mem�ria onde foi declarado pelo int e char.
        fflush(stdin);//Comando para limpar o buffer de mem�ria.
        if(idade < 3 || idade > 100)//Comando "se" para executar algo, se a condi��o declarada entre par�nteses for verdadeira ou falsa, dependendo da condi��o.
        printf("Idade inv�lida, tente novamente.\n");
        else//Comando "ent�o" no caso da condi��o do "se" n�o ser aceita ira paro o "ent�o".
        printf("Idade aceita com sucesso.\n");
        }while(idade < 3 || idade > 100);//Fun��o "enquanto", enquanto a condi��o se manter, o que est� acima ser� executado, quando n�o estiver mais na condi��o encerra-se a repeti��o.
        
        if(idade >= 3 && idade <= 13)//Comando "se" para executar algo, se a condi��o declarada entre par�nteses for verdadeira ou falsa, dependendo da condi��o.
        criancas++;//Comando "++" um comando de auto incremento, onde adiciona +1 ao contador a cada vez que se repete, como se fosse "vari�vel = vari�vel + 1".
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
    
	printf("Filme: %s", nomeFilme);//Comando que printa na tela o que foi escrito dentro dos par�nteses, para o usu�rio.
    printf("Mulheres: %d\n", mulheres); 
    printf("Homens: %d\n", homens); 
    printf("Crian�as: %d\n", criancas); 
    printf("Adolescentes: %d\n", adolescentes); 
    printf("Adultos: %d\n", adultos);
    printf("Idosos: %d\n", idosos); 
    system("pause"); //Comando "system("pause")" para dar uma pausa no programa, para sair da pausa se aperta qualquer tecla. 
    system("cls");//Comando "system("cls")" para limpar a tela, deixando os dados intactos, apenas limpando a janela.
    printf("Na sess�o havia(m) presente(s) %d mulher(es) maior(es) de idade.\n", mulheresIdade); 
    printf("Na sess�o havia(m) presente(s) %d homen(s) maior(es) de idade. \n", homensIdade); 
    system("pause"); //Comando "system("pause")" para dar uma pausa no programa, saindo da pausa ao apertar qualquer tecla.
    return 0; //Comando para que o valor do algortimo retorne a zero.
    }	
