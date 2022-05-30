#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
 
    void linha(int tamanho){
 int i;
  for (i = 0; i < tamanho; i++) {
  printf("*");
  }
 }
    
 int pv(){
  
  int dado1, dado2, dado3;
   
    int PV;
    
	
	
	
 printf("seu P.V vai ser decidido apos jogar 3 dados: \n");
 printf("dado: \n\n");
 srand(time(NULL));
	
 dado1 = rand()%6 + 1;
 dado2 = rand()%6 + 1;
 dado3 = rand()%6 + 1;
	
	
 printf("dado1: %d\n", dado1);
	
 printf("dado2: %d\n", dado2);
	
 printf("dado3: %d\n", dado3);
    
    PV = dado1 + dado2 + dado3;
    
  printf("a soma dos dados eh %d\n", PV);
  
	
  return PV;
 }

 typedef struct Arma {
	
 char nome[50];
 char tipo[50];
 float dano;
	
 } ARMA;
	
 typedef struct armadura{
  int defesa;
 }ARMADURA;
	
 typedef struct Inimigo {
 char nome[50];
	
 float pv;
	
 int dano;
 int defesa;
 int agilidade;
	
} INIMIGO;
	
 typedef struct Personagem {
 char nome[50];
 int PV;
 int constituicao;
 int destreza;
 int agilidade;
 int forca;
 int pontos;
	
	
	
 ARMA arma;
	
 } PERSONAGEM;
	
 PERSONAGEM usuario;
 void imprimirPersonagem(PERSONAGEM *usuario) {
  
	
	
	
 printf("\nNOME: %s\n", &usuario->nome);
 printf("PV: %d\n", usuario->PV);
 printf("CONSTITUICAO: %d\n", usuario->constituicao);
 printf("DESTREZA: %d\n", usuario->destreza);
 printf("AGILIDADE: %d\n", usuario->agilidade);
 printf("FORCA: %d\n", usuario->forca);
 }

 void criarPersonagem(PERSONAGEM *usuario) {
	
 printf("----CRIANDO PERSONAGEM----\n");
 printf("digite o nome do personagem: \n");
 scanf("%s", usuario->nome);
	
	
 int i;
 int j;
	
 usuario->agilidade = 0;
 usuario->constituicao = 0;
 usuario->destreza = 0;
 usuario->forca = 0;
 usuario->pontos = 15;
 usuario->PV = pv();
	
	
	
	
 do{
  printf("\nVoce tem %d pontos disponiveis\n", usuario->pontos);
  printf("Qual atributo voce quer colocar pontos:\n");
  printf("1 = constituicao\n2 = destreza\n3 = agilidade\n4 = forca\n\n");
  scanf("%d", &i);
  system("cls");

  switch(i) {
  case 1:
  printf("Digite quantos pontos voce quer colocar na constituicao: ");
  scanf(" %d", &j);
  
  
  if(j <= usuario->pontos){
  printf("voce adicionou %d pontos para a constituicao!\n\n", j);
  usuario->constituicao = usuario->constituicao + j;
  usuario->pontos = usuario->pontos - j;
  usuario->PV = usuario->PV + j;
  printf("seu pv eh %d", usuario->PV);
  }
  else{
  system("cls");
  printf("Voce excedeu seus pontos disponiveis!");
  }
  break;
	
  case 2:
  printf("Digite quantos pontos voce quer colocar na destreza: ");
  scanf("%d", &j);
  
  if(j <= usuario->pontos){
  printf("voce adicionou %d pontos para a destreza!\n\n", j);
  usuario->destreza = usuario->destreza + j;
  usuario->pontos = usuario->pontos - j;
  }
  else{
  system("cls");
  printf("Voce excedeu seus pontos disponiveis!");
  
  }
  break;
  
  case 3:
  printf("Digite quantos pontos voce quer colocar na agilidade: ");
  scanf("%d", &j);
  
  if(j <= usuario->pontos){
  printf("voce adicionou %d pontos para a agilidade!\n\n", j);
  usuario->agilidade = usuario->agilidade + j;
  usuario->pontos = usuario->pontos - j;
  }
	
  else{
  system("cls");
  printf("Voce excedeu seus pontos disponiveis!");
	
  }
  break;
	
  case 4:
  printf("Digite quantos pontos voce quer colocar na forca: ");
  scanf("%d", &j);
  if(j <= usuario->pontos){
  printf("voce adicionou %d pontos para a forca!\n\n", j);
  usuario->forca = usuario->forca + j;
  usuario->pontos = usuario->pontos - j;
  }
	
  else{
  system("cls");
  printf("Voce excedeu seus pontos disponiveis!");
  
  }
  break;
	
  case 5:
  printf("Valor invalido!\n\n");
  break;
  }
 } while(usuario->pontos > 0);
	
	
 imprimirPersonagem(usuario);
	
}
	
	
    
	
 void criarArma (char nomeEscolhido[50], int tipoEscolhido/*0->leve 1->pesada*/, float danoEscolhido) {
 ARMA arma;
	
 strcpy(arma.nome, nomeEscolhido);
	
 if(!tipoEscolhido) {
  strcpy(arma.tipo, "Leve");
 } else {
  strcpy(arma.tipo, "Pesada");
 }
	
 arma.dano = danoEscolhido;
 }

 void criarInimigo (char nomeEscolhido[50], int pvEscolhido, float danoEscolhido, int defesaEscolhido, int agilidadeEscolhido) {
 INIMIGO inimigo;
	
 strcpy(inimigo.nome, nomeEscolhido);
	
 inimigo.pv = pvEscolhido;
 inimigo.dano = danoEscolhido;
 inimigo.defesa = defesaEscolhido;
 inimigo.agilidade = agilidadeEscolhido;
 }

 void entreLutas(PERSONAGEM usuario) {
 printf("Parabens, voce venceu uma luta e pode melhorar seu personagem");
	
	
	
	
 }

 void menu() {
 int i;
	
 printf("\n\n\n");
 linha(28);
 printf("\n\n\tNEVERWIMTER!\n\n");
 linha(28);

 printf("\nbem vindo ao Neverwinter\num RPG no estilo medieval\n\n");
 printf("agora escolha: \n\n1-iniciar game\n2-historia da jornada\n3-fechar jogo\n\n");
 scanf("%d", &i);
	
 system("cls");
	
 switch(i){
  case 1:
   //iniciar jogo
   criarPersonagem(&usuario);
   break;
	
  case 2:
   //historia da jornada
      printf(" HISTORIA:\nVoce e um aventureiro renomado por ser habilidoso,\npor isso voce foi convocado por um grupo de aldeoes de uma vila\nrecem estabelecida ao redor de uma cordilheira montanhosa,\no grupo esta sobre constante ataque de goblins e outros monstros vis,\ncabe entao a voce, jogador, erradicar esse mal e ajudar pessoas inocentes a ter paz em suas vidas.");
   menu();
   break;

  case 3:
   //fechar jogo
   printf("ADEUS GUERREIRO\nATE A PROXIMA JORNADA!");
   break;
  }
 }
    
 int main() {
 menu();
	
 return 0;
	
	
}