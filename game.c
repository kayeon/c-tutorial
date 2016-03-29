
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
  char* name;
  int hit_points;
} creature;

void battle_by_value(creature);
void battle_by_reference(creature*);

int main() {

  srand(time(0));

  creature player;

  printf("Welcome to DragonFighter!\n");
  printf("Please type your name.\n");
  player.name = malloc(50);
  gets(player.name);

  printf("Hi, %s!\n", player.name);

  player.hit_points = 50;

  while(player.hit_points > 0) {
    //battle_by_value(player);
    battle_by_reference(&player);
    printf("You have %d hit points left!\n", player.hit_points);
  }
}

void battle_by_value(creature you) {
  battle(&you);
}

void battle_by_reference(creature* you) {
  creature monster;

  monster.hit_points = rand() % 20;

  switch (rand() % 3) {
    case 0:
      monster.name = "wolf";
      break;
    case 1:
      monster.name = "dragon";
      break;
    case 2:
      monster.name = "bear";
      break;
    default:
      monster.name = "Poe";
      break;
  }

  printf("You suddenly see a %s!\n", monster.name);

  while (monster.hit_points > 0 && you->hit_points > 0) {
    int damage = rand() % 5;
    printf("You attack the %s for %d points of damage!\n", monster.name, damage);
    monster.hit_points -= damage;

    damage = rand() % 5;
    printf("The %s attacks you for %d points of damage!\n", monster.name, damage);
    you->hit_points -= damage;
    getchar();
  }

  if (monster.hit_points <= 0) {
    printf("The %s is slain!\n", monster.name);
  }
}
