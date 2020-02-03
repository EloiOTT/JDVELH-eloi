#include <stdio.h>
#include <string.h>

struct Chapitre{
  char description[500];
  int gainOr;
  int gainPv;
  int ID[2];
};
typedef struct Chapitre chapitre;

chapitre chapitre1 = {"Après avoir passer deux journées entière à traverser les marécages de l'Urborg, vous arrivez finalement dans un petit village dégageant une épaisse fumée noir. Vous y croisez toutes sortes d'humains corrompus et de sombres créatures. Vous décidez donc de vous faire petit et de vous glicer entre deux maisons en bois pour passer la nuit sans attirer l'attention. Au petit matin, vous vous hâtez de reprendre la route. vous pouvez choisir entre continuer à traverser les marécages ou alors emprunter le sentier de la Coterie.",0,5,{2,3}};
chapitre chapitre2 = {"Vous avez encore le courage de marcher dans le bourbier quasi-infini. Vous vous mouvez difficilement pendant plus de 3 heures, quand soudain vous entender un bruit sourd. La terre se met à  trembler autour de vous. Yargle, glouton d'Urborg, apparait devant vous, sortant d'une large flaque vaseuse.",5,-9,{4,5}};
chapitre chapitre3 = {"Vous vous trouvez trop fatiguer pour continuer à traverser les marécages. Vous décidez donc d'emprunter le sentier de la Coterie qui mène directement au château de Belzenlok, en prenant le risque de vous faire repérer par des chevalier de la Coterie. Et ce qui devait arriver arriva. Manque de chance, c'est la liche Josu Vess qui vous trouve en premier.",3,-8,{6,7}};

int main(){
  int deplacement ;

  printf("%d\n", chapitre1.description);
  printf("vous avez gagné %s pièces \n", chapitre1.gainOr);
  printf("%s\n", chapitre1.gainPv);
  printf("[%s] continuer dans les marécages \n [%s] emprunter le sentier de la Coterie",chapitre1.ID);
  scanf("%d", &deplacement);

    if (deplacement == 2){
      printf("entrer dans les marécages : \n");
      printf("%d\n", chapitre2.description);
      printf("vous avez gagné %s pièces \n", chapitre2.gainOr);
      printf("%s\n", chapitre2.gainPv);

  }

    if (deplacement == 3){
      printf("entrer sur le sentier de la Coterie \n");
      printf("%d\n", chapitre3.description);
      printf("vous avez gagné %s pièces \n", chapitre3.gainOr);
      printf("%s\n", chapitre3.gainPv);
  }

  if (deplacement >= 3){
    printf("choix impossible \n");
    scanf("%d", &deplacement);
}
  if (deplacement <= 2){
    printf("choix impossible \n");
    scanf("%d", &deplacement);
}
