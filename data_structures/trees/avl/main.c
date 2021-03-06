#include <stdio.h>
#include "adt.h"

void main(void) {
  treeNode* tree;
  treeNode* searched;
  int option, key;
  do{
    do {
      printf("Options: 1. Create a tree.\n2. Search a node.\n3. Insert node.\n4. Remove node.\n5. Destroy tree.\n6. Quit!\n");
      scanf("%i", &option);
    } while (option > 7 || option < 1);
    switch(option) {
      case 1:
        tree = createTree();
        break;
      case 2:
        scanf("%i", &key);
        searched = searchNode(tree, key);
        if (searched != NULL) {
          printf("%i\n", searched->key);
        }
        break;
      case 3:
        scanf("%i", &key);
        tree = insertNode(tree, key);
        break;
      case 4:
        scanf("%i", &key);
        tree = removeNode(tree, key);
        break;
      case 5:
       destroyTree(tree);
       tree = NULL;
       break;
   }
  } while (option != 6);
};
