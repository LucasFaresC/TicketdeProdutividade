#include <stdio.h>
#include <math.h>

int equipe, projeto, tempo, pergunta;
int tarefas_programacao = 0, tarefas_design = 0;
int tarefas_projeto1 = 0, tarefas_projeto2 = 0, tarefas_projeto3 = 0;
int tarefas_programacao_projeto1 = 0, tarefas_programacao_projeto2 = 0, tarefas_programacao_projeto3 = 0;
int tarefas_design_projeto1 = 0, tarefas_design_projeto2 = 0, tarefas_design_projeto3 = 0;
int total_tempo_programacao = 0, total_tempo_design = 0;
int total_tempo_projeto1 = 0, total_tempo_projeto2 = 0, total_tempo_projeto3 = 0;
int total_tempo_equipePROG_projeto1 = 0, total_tempo_equipePROG_projeto2 = 0, total_tempo_equipePROG_projeto3 = 0;
int total_tempo_equipeDES_projeto1 = 0, total_tempo_equipeDES_projeto2 = 0, total_tempo_equipeDES_projeto3 = 0;


int main(){
    printf("Gostaria de Fazer um lançamento? Digite (1-Sim | 2-Não) "); scanf("%i", &pergunta);
    while(1){
        if(pergunta==1){
            printf("Qual equipe realizou a tarefa? (1-programacao / 2-design): "); scanf("%i", &equipe);

            while(1){
                if(equipe==1){//PROGRAMACAOOOOOOOOOOOOOOOOOOOO
                    
                    printf("Qual foi o projeto trabalhado ? \n1 - Livros Digitais para Crianças\n2 - Leitor de Textos para Deficientes Visuais\n3 - Sistema de Registro de Participação em Eventos Culturais)\n=> ");
                    scanf("%i", &projeto);

                    while(1){
                        if(projeto==1){
                            tarefas_projeto1++;
                            tarefas_programacao++;
                            tarefas_programacao_projeto1++;

                            printf("Qual foi o tempo da tarefa (em min): "); scanf("%i",&tempo);
                            while(1){
                                if(tempo>0){
                                    total_tempo_programacao = total_tempo_programacao + tempo;
                                    total_tempo_projeto1 = total_tempo_projeto1 + tempo;
                                    total_tempo_equipePROG_projeto1 = total_tempo_equipePROG_projeto1 + tempo;
                                    break;// break do tempo

                                }else{
                                    printf("Tempo invalido, digite um valor maior que zero (em min): ");scanf("%i",&tempo);
                                }

                            }
                            break;// brak dos projeto 1 dentro da equipe de programação
                        }else if(projeto==2){
                            tarefas_projeto2++;
                            tarefas_programacao++;
                            tarefas_programacao_projeto2++;

                            printf("Qual foi o tempo da tarefa (em min): "); scanf("%i",&tempo);
                            while(1){
                                if(tempo>0){
                                    total_tempo_programacao = total_tempo_programacao + tempo;
                                    total_tempo_projeto2 = total_tempo_projeto2 + tempo;
                                    total_tempo_equipePROG_projeto2 = total_tempo_equipePROG_projeto2 + tempo;
                                    break;

                                }else{
                                    printf("Tempo invalido, digite um valor maior que zero (em mim): ");scanf("%i",&tempo);
                                }
                            }
                            break;// break do projeto 2 dentro da equipe de programação
                        }else if(projeto==3){
                            tarefas_projeto3++;
                            tarefas_programacao++;
                            tarefas_programacao_projeto3++;

                            printf("Qual foi o tempo da tarefa (em min): "); scanf("%i",&tempo);
                            while(1){
                                if(tempo>0){
                                    total_tempo_programacao = total_tempo_programacao + tempo;
                                    total_tempo_projeto3 = total_tempo_projeto3 + tempo;
                                    total_tempo_equipePROG_projeto3 = total_tempo_equipePROG_projeto3 + tempo;
                                    break;

                                }else{
                                    printf("Tempo invalido, digite um valor maior que zero (em min): ");scanf("%i",&tempo);
                                }
                            }
                            break;// break do projeto 3 dentro da equipe de programação
                        }else{
                
                            printf("Projeto invalido!!\nDigite apenas:\n1 - Livros Digitais para Crianças\n2 - Leitor de Textos para Deficientes Visuais\n3 - Sistema de Registro de Participação em Eventos Culturais)");
                            scanf("%i", &projeto);
                            
                        }        
                    }
                    break;// break da equipe de PROGRAMAÇÃO dentro da pergunta 1
                }else if(equipe==2){//DESIGNNNNNNNN
                    
                    printf("Qual foi o projeto trabalhado ? \n1 - Livros Digitais para Crianças\n2 - Leitor de Textos para Deficientes Visuais\n3 - Sistema de Registro de Participação em Eventos Culturais)\n=> ");
                    scanf("%i", &projeto);
                    
                    while(1){
                        if(projeto==1){
                            tarefas_projeto1++;
                            tarefas_design++;
                            tarefas_design_projeto1++;

                            printf("Qual foi o tempo da tarefa (em min): "); scanf("%i",&tempo);
                            while(1){
                                if(tempo>0){
                                    total_tempo_design = total_tempo_design + tempo;
                                    total_tempo_projeto1 = total_tempo_projeto1 + tempo;
                                    total_tempo_equipeDES_projeto1 = total_tempo_equipeDES_projeto1 + tempo;
                                    break;

                                }else{
                                    printf("Tempo invalido, digite um valor maior que zero (em min): ");scanf("%i",&tempo);
                                }
                            }
                            break;//Projeto1 DEESIGN

                        }else if(projeto==2){
                            tarefas_projeto2++;
                            tarefas_design++;
                            tarefas_design_projeto2++;

                            printf("Qual foi o tempo da tarefa (em min): "); scanf("%i",&tempo);
                            while(1){
                                if(tempo>0){
                                    total_tempo_design = total_tempo_design + tempo;
                                    total_tempo_projeto2 = total_tempo_projeto2 + tempo;
                                    total_tempo_equipeDES_projeto2 = total_tempo_equipeDES_projeto2 + tempo;
                                    break;

                                }else{
                                    printf("Tempo invalido, digite um valor maior que zero (em min): ");scanf("%i",&tempo);
                                }
                            }
                            break;// projeto2 do grupo2

                        }else if(projeto==3){
                            tarefas_projeto3++;
                            tarefas_design++;
                            tarefas_design_projeto3++;

                            printf("Qual foi o tempo da tarefa (em min): "); scanf("%i",&tempo);
                            while(1){
                                if(tempo>0){
                                    total_tempo_design = total_tempo_design + tempo;
                                    total_tempo_projeto3 = total_tempo_projeto3 + tempo;
                                    total_tempo_equipeDES_projeto3 = total_tempo_equipeDES_projeto3 + tempo;
                                    break;

                                }else{
                                    printf("Tempo invalido, digite um valor maior que zero (em min): ");scanf("%i",&tempo);
                                }
                            }   
                            break;//projeto3 do Grupo2
                        }else{

                            printf("Projeto invalido!!\nDigite apenas:\n1 - Livros Digitais para Crianças\n2 - Leitor de Textos para Deficientes Visuais\n3 - Sistema de Registro de Participação em Eventos Culturais)");
                            scanf("%i", &projeto);

                        }
                    }
                    break;// break da equipe de DESISGN dentro da pergunta 1
                }else{
                    printf("Equipe invalida!! Por favor digite apenas 1 e 2 (1-programacao / 2-design): "); scanf("%i", &equipe);
                }

            }
            printf("Gostaria de fazer mais um lançamento? Digite (1-Sim | 2-Não)"); scanf("%i",&pergunta);
            if(pergunta==2){

                printf("------------------------------|EQUIPE DE PROGRAMACAO|---------------------------\n\n");
                printf(" --> Tarefas Realizadas: %i\n", tarefas_programacao);
                printf(" --> Tempo medio das tarefas %f \n", total_tempo_programacao * 1.0/tarefas_programacao);
                printf(" --> Contribuicao de tarefas no projeto 1: %f\n", (tarefas_programacao_projeto1 * 100.0 / tarefas_projeto1));
                printf(" --> Contribuicao de tarefas no projeto 2: %f\n", (tarefas_programacao_projeto2 * 100.0/ tarefas_projeto2));
                printf(" --> Contribuicao de tarefas no projeto 3: %f\n", (tarefas_programacao_projeto3 * 100.0/ tarefas_projeto3));
                printf(" --> Tempo gasto no projeto 1: %i\n", total_tempo_equipePROG_projeto1);
                printf(" --> Tempo gasto no projeto 2: %i\n", total_tempo_equipePROG_projeto2);
                printf(" --> Tempo gasto no projeto 3: %i\n", total_tempo_equipePROG_projeto3);
                printf(" --> Porcentagem do tempo total gasto no projeto 1: %f\n", (total_tempo_equipePROG_projeto1 * 100.0/ total_tempo_programacao));
                printf(" --> Porcentagem do tempo total gasto no projeto 2: %f\n", (total_tempo_equipePROG_projeto2 * 100.0/total_tempo_programacao));
                printf(" --> Porcentagem do tempo total gasto no projeto 3: %f\n", (total_tempo_equipePROG_projeto3 * 100.0/total_tempo_programacao));
                printf("------------------------------------------------------------------------------------\n");
                printf("------------------------------|EQUIPE DE DESIGN|---------------------------------\n");
                printf(" --> Tarefas Realizadas: %i\n", tarefas_design);
                printf(" --> Tempo medio das tarefas %f \n", tarefas_design * 1.0/total_tempo_design);
                printf(" --> Contribuicao de tarefas no projeto 1: %f\n", tarefas_design_projeto1 * 100.0 / tarefas_design);
                printf(" --> Contribuicao de tarefas no projeto 2: %f\n", tarefas_design_projeto2 * 100.0 / tarefas_design);
                printf(" --> Contribuicao de tarefas no projeto 3: %f\n", tarefas_design_projeto3 * 100.0 / tarefas_design);
                printf(" --> Tempo gasto no projeto 1: %i\n", total_tempo_equipeDES_projeto1); 
                printf(" --> Tempo gasto no projeto 2: %i\n", total_tempo_equipeDES_projeto2);
                printf(" --> Tempo gasto no projeto 3: %i\n", total_tempo_equipeDES_projeto3);
                printf(" --> Porcentagem do tempo total gasto em projeto 1: %f\n", total_tempo_equipeDES_projeto1 * 100.0 /total_tempo_design);
                printf(" --> Porcentagem do tempo total gasto no projeto 2: %f\n", total_tempo_equipeDES_projeto2 * 100.0 /total_tempo_design); 
                printf(" --> Porcentagem do tempo total gasto no projeto 3: %f\n", total_tempo_equipeDES_projeto3 * 100.0 /total_tempo_design);     
                printf("------------------------------|GERAL|---------------------------------\n");       
                printf(" --> Tempo Total do projeto 1: %i\n", total_tempo_projeto1);
                printf(" --> Tempo Total do projeto 2: %i\n", total_tempo_projeto2);
                printf(" --> Tempo Total do projeto 3: %i\n", total_tempo_projeto3);
                
                break;// break da pergunta 1
            }
        }else if(pergunta==2){
            printf("Ok, programa Fechando");

            break;// break da pergunta 2
        }else{
            while(pergunta!=1 && pergunta!=2){
                printf("Valor invalido, Digite apenas 1 ou 2 (1-Sim | 2-Não) "); scanf("%i", &pergunta);
            }
        }
    }
    return 0;
}
