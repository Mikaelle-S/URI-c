#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int caso=0, cont;
    char shel[10],raj[10];
    
    scanf("%d",&caso);
    
    for(cont = 1; cont<=caso; cont++){
        
        scanf("%s %s",shel,raj);
        
        if (strcmp(shel, "Spock") == 0 && strcmp(raj, "pedra") == 0){
            printf("Caso #%d: Bazinga!\n", cont);
        }
        else if(strcmp(shel, "pedra") == 0 && strcmp(raj, "Spock") == 0){
            printf("Caso #%d: Raj trapaceou!\n", cont);
        }
            if (strcmp(shel, "lagarto") == 0 && strcmp(raj, "Spock") == 0){
                printf("Caso #%d: Bazinga!\n", cont);
            }
            else if (strcmp(shel, "Spock") == 0 && strcmp(raj, "lagarto") == 0){
                printf("Caso #%d: Raj trapaceou!\n", cont);
            }
            
                if (strcmp(shel, "tesoura") == 0 && strcmp(raj, "lagarto") == 0){
                    printf("Caso #%d: Bazinga!\n", cont);
                }
                else if (strcmp(shel, "lagarto") == 0 && strcmp(raj, "tesoura") == 0){
                    printf("Caso #%d: Raj trapaceou!\n", cont);
                }
                    if (strcmp(shel, "papel") == 0 && strcmp(raj, "Spock") == 0){
                        printf("Caso #%d: Bazinga!\n", cont);
                    }
                    else if (strcmp(shel, "Spock") == 0 && strcmp(raj, "papel") == 0){
                        printf("Caso #%d: Raj trapaceou!\n", cont);
                    }    
                        if (strcmp(shel, "tesoura") == 0 && strcmp(raj, "papel") == 0){
                            printf("Caso #%d: Bazinga!\n", cont);
                        }
                         else if (strcmp(shel, "papel") == 0 && strcmp(raj, "tesoura") == 0){
                            printf("Caso #%d: Raj trapaceou!\n", cont);
                        }
                            if (strcmp(shel, "papel") == 0 && strcmp(raj, "pedra") == 0){
                                printf("Caso #%d: Bazinga!\n", cont);
                            }
                            else if (strcmp(shel, "pedra") == 0 && strcmp(raj, "papel") == 0){
                                printf("Caso #%d: Raj trapaceou!\n", cont);
                            }
                                if (strcmp(shel, "lagarto") == 0 && strcmp(raj, "papel") == 0){
                                    printf("Caso #%d: Bazinga!\n", cont); 
                                }
                                else if (strcmp(shel, "papel") == 0 && strcmp(raj, "lagarto") == 0){
                                    printf("Caso #%d: Raj trapaceou!\n", cont); 
                                }
                                    if (strcmp(shel, "pedra") == 0 && strcmp(raj, "lagarto") == 0){
                                        printf("Caso #%d: Bazinga!\n", cont);
                                    }
                                    else if (strcmp(shel, "lagarto") == 0 && strcmp(raj, "pedra") == 0){
                                        printf("Caso #%d: Raj trapaceou!\n", cont);
                                    }
                                        if (strcmp(shel, "Spock") == 0 && strcmp(raj, "tesoura") == 0){
                                            printf("Caso #%d: Bazinga!\n", cont);
                                        }
                                        else if (strcmp(shel, "tesoura") == 0 && strcmp(raj, "Spock") == 0){
                                            printf("Caso #%d: Raj trapaceou!\n", cont);
                                        }
                                            if (strcmp(shel, "pedra") == 0 && strcmp(raj,"tesoura") == 0){
                                                printf("Caso #%d: Bazinga!\n", cont);
                                            }
                                            else if (strcmp(shel, "tesoura") == 0 && strcmp(raj,"pedra") == 0){
                                                printf("Caso #%d: Raj trapaceou!\n", cont);
                                            }
                                            else if (strcmp(shel,raj) == 0){
                                                printf("Caso #%d: De novo!\n", cont);
                                            }
    }
  
    return 0;
}
