#include<stdio.h>
#include<stdlib.h>

int linha(int sudoku[9][9]){
    int k = 0, u = 0, n = 0;
    for(k = 0; k <8; k++){
        for( u = 0; u<=8; u++){
            for(n = 0; n <= 8; n++){
                if(n != u){ 
                    if(sudoku[k][u] == sudoku[k][n]){
                        printf("Sudoku errado\n");
                        return 0;
                    }
                }
            }
        }
    }
    return true;
}
int coluna(int sudoku[9][9]){
        int y = 0, r = 0, t = 0;
        for(y = 0; y <= 8; y++){
            for(r = 0; r <= 8; r++){
                for(t = 0; t <= 8; t++){
                    if(r != t){
                        if(sudoku[y][r] == sudoku[y][t]){
                            printf("Sudoku errado \n");
                            return 0;
                        }
                    }
                }
            }
        }
        return true;
}
int quadrado(int sudoku[9][9], int inicio, int fim){
    int q = 0,w = 0, total = 0;

    for( q = 0; q < 3; q++){
        for( w = inicio; w <= fim; w++){
            total += sudoku[q][w];
        }
    }
    if (total > 45){
        printf("Sudoku errado\n");
        return 0;
    }else{
        total = 0;
        for( q = 3; q < 6; q++){
            for( w = inicio; w <= fim; w++){
                total += sudoku[q][w];
        }
        if (total > 45){
            printf("Sudoku errado\n");
            return 0;
        }else{
            total = 0;
            for( q = 3; q < 6; q++){
                for( w = inicio; w <= fim; w++){
                    total += sudoku[q][w];
                }
                if (total > 45){
                    printf("Sudoku errado\n");
                    return 0;
                }
            
            }
            } 
        }
    }
    return true;
}

int main(){   
    int sudoku[9][9] = {
        {5, 3, 5, 0, 7, 0, 0, 0, 0},  //  dois cincos na mesma linha
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };
    // int sudoku[9][9] = {
    //     {5, 3, 4, 6, 7, 8, 9, 1, 2},
    //     {6, 7, 2, 1, 9, 5, 3, 4, 8},
    //     {1, 9, 8, 3, 4, 2, 5, 6, 7},
    //     {8, 5, 9, 7, 6, 1, 4, 2, 3},
    //     {4, 2, 6, 8, 5, 3, 7, 9, 1},
    //     {7, 1, 3, 9, 2, 4, 8, 5, 6},
    //     {9, 6, 1, 5, 3, 7, 2, 8, 4},
    //     {2, 8, 7, 4, 1, 9, 6, 3, 5},
    //     {3, 4, 5, 2, 8, 6, 1, 7, 9}
    // };
    linha(sudoku);
    coluna(sudoku);
    quadrado(sudoku,0,2);
    quadrado(sudoku,3,5);
    quadrado(sudoku,6,8);
    return 0;
    }

