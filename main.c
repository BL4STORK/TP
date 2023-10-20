#include <stdio.h>
#include "string.h"

struct Taches{
    char TotalTaches[1024];
    char TachesEffectuer;
    char TachesAEffectuer;
};

int main() {
    struct Taches nom;
    int nombre;

    while(1) {
        printf("Saisir 0 pour ajouter une tache une tache a faire et 1 pour marquer une tache comme faite:\n", nombre);
        scanf("%d", &nombre);
        if (nombre == 0) {
            printf("Veuillez entrer une tache a effectuer:\n");
            scanf("%s", &nom);
            printf("Voici toutes vos taches:%s\n", nom.TotalTaches);


        } else if (nombre == 1) {
            printf("Quel tache avez vous effectuer:\n");
            scanf("%s", &nom);
            printf("%s is done\n");
        }
        if (nom.TotalTaches == nom.TachesAEffectuer--) {
            printf("Tache restantes:%c", &nom);
            printf("Taches: %c done", &nom);
        }
    }

    }






