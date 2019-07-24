#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <winsock2.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <sys/types.h>

#define TOTAL_PORTAS 65535

struct sockaddr_in alvo;
struct timeval socktempo;

int bandeira()
{
printf("\n");
printf("                       ,--.                               ,----,                         \n");
Sleep(100);
printf("    ,---,            ,--.'|   .--.--.                   .'   .`|     ,---,.     ,---,    \n");
Sleep(100);
printf("  .'  .' `\\      ,--,:  : |  /  /    '.              .'   .'   ;   ,'  .' |   .'  .' `\\  \n");
Sleep(100);
printf(",---.'     \\  ,`--.'`|  ' : |  :  /`. /            ,---, '    .' ,---.'   | ,---.'     \\ \n");
Sleep(100);
printf("|   |  .`\\  | |   :  :  | | ;  |  |--`             |   :     ./  |   |   .' |   |  .`\\  | \n");
Sleep(100);
printf(":   : |  '  | :   |   \\ | : |  :  ;_               ;   | .'  /   :   :  |-, :   : |  '  | \n");
Sleep(100);
printf("|   ' '  ;  : |   : '  '; |  \\  \\    `.            `---' /  ;    :   |  ;/| |   ' '  ;  : \n");
Sleep(100);
printf("'   | ;  .  | '   ' ;.    ;   `----.   \\             /  ;  /     |   :   .' '   | ;  .  | \n");
Sleep(100);
printf("|   | :  |  ' |   | | \\   |   __ \\  \\  |            ;  /  /--,   |   |  |-, |   | :  |  ' \n");
Sleep(100);
printf("'   : | /  ;  '   : |  ; .'  /  /`--'  /           /  /  / .`|   '   :  ;/| '   : | /  ; \n");
Sleep(100);
printf("|   | '` ,/   |   | '`--'   '--'.     /          ./__;       :   |   |    \\ |   | '` ,/  \n");
Sleep(100);
printf(";   :  .'     '   : |         `--'---'           |   :     .'    |   :   .' ;   :  .'  \n");
Sleep(100);
printf("|   ,.'       ;   |.'                            ;   |  .'       |   | ,'   |   ,.' \n");
Sleep(100);
printf("'---'         '---'                              `---'           `----'     '---'   \n");
Sleep(100);
printf("\n");
printf("                                   ,--.                   ,----..                           \n");
Sleep(100);
printf("           .---.    ,---,        ,--.'|     ,---,        /   /   \\              .---.   .--.--.   \n");
Sleep(100);
printf("          /. ./| ,`--.' |    ,--,:  : |   .'  .' `\\     /   .     :            /. ./|  /  /    '. \n");
Sleep(100);
printf("      .--'.  ' ; |   :  : ,`--.'`|  ' : ,---.'     \\   .   /   ;.  \\       .--'.  ' ; |  :  /`. /  \n");
Sleep(100);
printf("     /__./ \\ : | :   |  ' |   :  :  | | |   |  .`\\  | .   ;   /  ` ;      /__./ \\ : | ;  |  |--` \n");
Sleep(100);
printf(" .--'.  '   \\' . |   :  | :   |   \\ | : :   : |  '  | ;   |  ; \\ ; |  .--'.  '   \\' . |  :  ;_  \n");
Sleep(100);
printf("/___/ \\ |    ' ' '   '  ; |   : '  '; | |   ' '  ;  : |   :  | ; | ' /___/ \\ |    ' '  \\  \\    `. \n");
Sleep(100);
printf(";   \\  \\;      : |   |  | '   ' ;.    ; '   | ;  .  | .   |  ' ' ' : ;   \\  \\;      :   `----.   \\ \n");
Sleep(100);
printf(" \\   ;  `      | '   :  ; |   | | \\   | |   | :  |  ' '   ;  \\; /  |  \\   ;  `      |   __ \\  \\  | \n");
Sleep(100);
printf("  .   \\    .\\  ; |   |  ' '   : |  ; .' '   : | /  ;   \\   \\  ',  /    .   \\    .\\  ;  /  /`--'  / \n");
Sleep(100);
printf("   \\   \\   ' \\ | '   :  | |   | '`--'   |   | '` ,/     ;   :    /      \\   \\   ' \\ | '--'.     /  \n");
Sleep(100);
printf("    :   '  |--'  ;   |.'  '   : |       ;   :  .'        \\   \\ .'        :   '  |--'    `--'---'  \n");
Sleep(100);
printf("     \\   \\ ;     '---'    ;   |.'       |   ,.'           `---`           \\   \\ ; \n");
Sleep(100);
printf("      '---'               '---'         '---'                              '---' \n");
Sleep(100);


}

void PortScan()
{
	int sock , conecta , porta , escolha;
	char ip[50];

	system("cls");

	printf("\t\t#==================================#\n");
	printf("\t\t#=========== Port-scan ============#\n");
	printf("\t\t#==================================#\n\n");
	printf("\t\t\t\t\tCreated by: Zer0 & Glantech\n");
	printf("\t\t\t\t\tFor: B0P 2.0\n");
	printf("\t\t\t\t\tWindows Version.\n\n");

	printf("\t\t1) Verificar uma porta especifica.\n");
	printf("\t\t2) Verificar todas as portas possiveis.\n");
	printf("\t\t3) Definir portas que seram verificadas.\n");
	printf("\t\t0) Sair.\n");
	printf("> ") , scanf("%i",&escolha);


	socktempo.tv_sec = 1;
	socktempo.tv_usec = 0;

	if(escolha < 0 || escolha > 3)
	{
		system("color c");
		printf("\a\a\a");
		printf("> Opção %i invalida.\n",escolha);
		printf("> Tente de novo...\n");
		Sleep(5000);
		system("color 7");
		system("pause");
	}

	if(escolha == 0)
	{
		system("cls");
		printf("> Bye.\n");
		system("pause");
		system("color 7");
		exit(0);
	}
	else if(escolha == 1)
	{
		char http[] = "https://www.";
		char www[] = "www.";
		int conta = 0;

		system("cls");

		printf("> IP: ") , scanf("%s",ip);
		printf("> Porta: ") , scanf("%i",&porta);
		printf("\n");

		while(ip[conta] == http[conta] && http[conta] != '\0')
		{
			++conta;
		}

		if(http[conta] == '\0')
		{
			system("color c");
			system("cls");
			printf("\a\a\a");
			printf("\t\t> ATENCAO ==> ENTRE SOMENTE COM IP.\n");
			printf("\t\t> ATENCAO ==> CASO PRECISE RESOLVER DNS USE ""RESOLVE-DNS"" \n");
			Sleep(5000);
			system("color 7");
			system("pause");

		}
		else
		{
			conta = 0;

			while(ip[conta] == www[conta] && www[conta] != '\0')
			{
				++conta;
			}

			if(www[conta] == '\0')
			{
				system("color c");
				system("cls");
				printf("\a\a\a");
				printf("\t\t> ATENCAO ==> ENTRE SOMENTE COM IP.\n");
				printf("\t\t> ATENCAO ==> CASO PRECISE RESOLVER DNS USE ""RESOLVE-DNS"" \n");
        system("color 7");
				Sleep(5000);
				system("pause");
			}

		}

		printf("> Scanning...\n\n");

		WSADATA wsa;
   		WSAStartup(MAKEWORD(2,0),&wsa);

   		sock = socket(AF_INET , SOCK_STREAM , 0);

   		alvo.sin_family = AF_INET;
   		alvo.sin_port = htons(porta);
   		alvo.sin_addr.s_addr = inet_addr(ip);

   		setsockopt(sock , SOL_SOCKET , SO_RCVTIMEO , (char *)&socktempo , sizeof socktempo);
		setsockopt(sock , SOL_SOCKET , SO_SNDTIMEO , (char *)&socktempo , sizeof socktempo);

   		conecta = connect(sock , (struct sockaddr *)&alvo , sizeof alvo);

   		if(conecta == 0)
   		{
   				system("color a");

   				printf("\a");
   				printf("> Porta %i [ABERTA].\n",porta);
   				Sleep(2000);
   				system("color 7");
   				closesocket(sock);
   				closesocket(conecta);
					system("pause");

		}
		else
		{
				system("color c");
				printf("\a\a\a");
				printf("> Porta %i [FECHADA].\n",porta);
				Sleep(2000);
				system("color 7");
				closesocket(sock);
				closesocket(conecta);
				system("pause");
		}


	}
	else if(escolha == 2 )
	{
		system("cls");

		printf("> Pode demorar um pouco , paciencia (:\n\n");
		printf("> ATENCAO ==> SOMENTE IP.\n");
		printf("> ATENCAO ==> CASO DIGITE UMA URL  , PODE GERAR ALGUM ERRO.\n\n");
		printf("> IP: ") , scanf("%s",ip);
		printf("\n");
		printf("> Scanning...\n\n");


		for(porta = 0; porta < TOTAL_PORTAS;++porta)
		{

			WSADATA wsa;
   		    WSAStartup(MAKEWORD(2,0),&wsa);

   			sock = socket(AF_INET , SOCK_STREAM , 0);

   			alvo.sin_family = AF_INET;
   			alvo.sin_port = htons(porta);
   			alvo.sin_addr.s_addr = inet_addr(ip);

   			setsockopt(sock , SOL_SOCKET , SO_RCVTIMEO , (char *)&socktempo , sizeof socktempo);
			setsockopt(sock , SOL_SOCKET , SO_SNDTIMEO , (char *)&socktempo , sizeof socktempo);

   			conecta = connect(sock , (struct sockaddr *)&alvo , sizeof alvo);

   			if(conecta == 0)
   			{
   				system("color a");
   				printf("\a");
   				printf("> Porta %i [ABERTA].\n",porta);
   				Sleep(1000);
   				system("color 3");
   				closesocket(sock);
   				closesocket(conecta);

			}
			else
			{
				closesocket(sock);
				closesocket(conecta);
			}


			if(porta == TOTAL_PORTAS)
			{
				system("color 7");
				system("pause");
			}

		}

	}
	else
	{
		int limite_portas;

		system("cls");

		printf("> ATENCAO ==> SOMENTE IP.\n");
		printf("> ATENCAO ==> CASO DIGITE UMA URL , PODE GERAR ALGUM ERRO.\n\n");
		printf("> Quantidade de portas que serao verificadas: ") , scanf("%i",&limite_portas);
		printf("=============================================\n");

		if(limite_portas == 0)
		{
			system("cls");
			printf("Bye.\n");
			system("color 7");
			exit(0);
		}

		int portas[limite_portas];

		for(int i = 0; i < limite_portas; ++i)
		{
			printf("> Porta %i: ",i + 1) , scanf("%i",&portas[i]);

		}

		printf("========================\n");
		printf("> IP: ") , scanf("%s",ip);
		printf("========================\n");

		printf("> Scanning...\n");

		for(int i = 0; i < limite_portas;++i)
		{
			WSADATA wsa;
   		    WSAStartup(MAKEWORD(2,0),&wsa);

   			sock = socket(AF_INET , SOCK_STREAM , 0);

   			alvo.sin_family = AF_INET;
   			alvo.sin_port = htons(portas[i]);
   			alvo.sin_addr.s_addr = inet_addr(ip);

   			setsockopt(sock , SOL_SOCKET , SO_RCVTIMEO , (char *)&socktempo , sizeof socktempo);
			setsockopt(sock , SOL_SOCKET , SO_SNDTIMEO , (char *)&socktempo , sizeof socktempo);

   			conecta = connect(sock , (struct sockaddr *)&alvo , sizeof alvo);

   			if(conecta == 0)
   			{
   				system("color a");
   				printf("\a");
   				printf("> Porta %i [ABERTA].\n",portas[i]);
   				Sleep(1000);
   				system("color 3");
   				closesocket(sock);
   				closesocket(conecta);

			}
			else
			{
				system("color c");
				printf("\a\a\a");
				printf("> Porta %i [FECHADA].\n",portas[i]);
				Sleep(1000);
				system("color 3");
				closesocket(sock);
				closesocket(conecta);
			}

		}

		system("color 7");
		system("pause");

	}


}

void ResolveDNS()
{
	char url[50] , nova_url[50];
	char http[] = "https://";
	int conta = 0;

	system("cls");

	printf("\t\t#=====================================#\n");
	printf("\t\t#============ Resolve-DNS ============#\n");
	printf("\t\t#=====================================#\n\n");
	printf("\t\t\t\t\tCreated by: Zer0 & Glantech\n");
	printf("\t\t\t\t\tFor: B0P 2.0\n");
	printf("\t\t\t\t\tWindows Version.\n\n");

	printf("> Host: ") , scanf("%s",url);

	while(url[conta] == http[conta] && http[conta] != '\0')
	{
		++conta;
	}

	if(http[conta] == '\0')
	{
		int i = 0;

		while(url[conta] != '\0')
		{
			nova_url[i] = url[conta + 1];

			++conta;
			++i;
		}

		WSADATA wsa;
   		WSAStartup(MAKEWORD(2,0),&wsa);

		struct hostent *host;

		host = gethostbyname(nova_url);

		printf("\a");
		system("color a");
		printf("> Host: %s IP: %s\n",url , inet_ntoa(*((struct in_addr *)host->h_addr)));

		Sleep(5000);
		system("color 7");
		system("pause");
	}
	else
	{

		WSADATA wsa;
   		WSAStartup(MAKEWORD(2,0),&wsa);

		struct hostent *host;

		host = gethostbyname(url);

		printf("\a");
		system("color a");
		printf("> Host: %s IP: %s\n",url , inet_ntoa(*((struct in_addr *)host->h_addr)));

		Sleep(5000);


		system("color 7");
		system("pause");
	}
}

void BrutalDNS()
{

	int conta = 0;
	char destino[50] , arquivo[50] , palavra[20] , site[50];
	char httpwww[] = "https://www.";
	char www[] = "www.";

	system("cls");

	printf("\t\t#=====================================#\n");
	printf("\t\t#============ Brutal-DNS =============#\n");
	printf("\t\t#=====================================#\n\n");
	printf("\t\t\t\t\tCreated by: Zer0 & Glantech\n");
	printf("\t\t\t\t\tFor: B0P 2.0\n");
	printf("\t\t\t\t\tWindows Version.\n\n");

	printf("> Host: ") , scanf("%s",destino);


	WSADATA wsa;
   	WSAStartup(MAKEWORD(2,0),&wsa);

	while(destino[conta] == httpwww[conta] && httpwww[conta] != '\0')
	{
		++conta;
	}

	if(httpwww[conta] == '\0')
	{
		printf("\n\n");
		printf("\a\a\a");
		system("color c");
		printf("\t\t(-) ATENCAO ==> NAO USE https://www. OU www.\n");
		printf("\t\t(-) ATENCAO ==> USE APENAS nomedosite.com POR EXEMPLO.\n");
		Sleep(5000);
		system("pause");
		system("color 7");
	}
	else
	{
		conta = 0;
		while(destino[conta] == www[conta] && www[conta] != '\0')
		{
			++conta;
		}

		if(www[conta] == '\0')
		{
			printf("\n\n");
			printf("\a\a\a");
			system("color c");
			printf("\t\t(-) ATENCAO ==> NAO USE https://www. OU www.\n");
			printf("\t\t(-) ATENCAO ==> USE APENAS nomedosite.com POR EXEMPLO.\n");
			Sleep(5000);
			system("pause");
			system("color 7");
		}

	}

	printf("> Wordlist (lista com subdominios): ") , scanf("%s",arquivo);

	FILE *arq = fopen(arquivo,"r");

	if(arq == NULL)
	{
		printf("\n\n");
		printf("\a\a\a");
		system("color c");
		printf("> Arquivo nao encontrado.\n");
		Sleep(5000);
		system("pause");
		system("color 7");
	}

	printf("\n");

	struct hostent *host;

	printf("> Scanning...\n\n");

	while(fscanf(arq,"%s",palavra) != EOF)
	{
		sprintf(site,"%s%s",palavra,destino);

		host = gethostbyname(site);

		if(host == NULL)
			continue;

		printf("\a");
		printf("Host > %s   IP > %s\n", site , inet_ntoa(*((struct in_addr *)host->h_addr)));

	}

	system("pause");
	system("color 7");
	fclose(arq);

}

int main()
{
	int escolha;
	bool a = true;
  while (a == true) {

	system("cls");
	system("color 3");

	bandeira();

	printf("\t\t\t\t\t\tCreated by: Zer0 & Glantech\n");
	printf("\t\t\t\t\t\tFor: B0P 2.0\n");
	printf("\t\t\t\t\t\tWindows Version\n\n");
	printf("\t 1) Port-Scan   2) Resolve-DNS   3) Brutal-DNS   0) Sair\n\n");
	printf("> ") , scanf("%i",&escolha);


	if(escolha < 0 || escolha > 3)
	{
		system("cls");
		printf("> Opcao %i invalida.\n",escolha);
		system("pause");
		system("color 7");
		return 0;
	}

	if(escolha == 0)
	{
		system("cls");
		printf("Bye.\n");
		system("pause");
		system("color 7");
		return 0;
	}

	switch(escolha)
	{
		case 1:
			PortScan();
		break;

		case 2:
			ResolveDNS();
		break;

		case 3:
			BrutalDNS();
		break;
	}

  }
	return 0;
}
