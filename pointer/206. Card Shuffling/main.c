#include <stdio.h>
#include "card.h"
 
int main()
{
  int card[10000];
  int *deck[10000];
  int index = 0;
 
  while (scanf("%d", &(card[index])) != EOF) {
    deck[index] = &(card[index]);
    index++;
  }
  deck[index] = NULL;
//   int i = 0;
//     while(deck[i] != NULL){
//         i++;
//     }
//     for(int j = 0; j < 3; j++){
//         printf("%d ", *deck[j]);
//     }
//   printf("%p", deck[i-1]);
//   printf("%p", deck[index-1]);
  shuffle(deck);
  print(deck);
  return 0;
}