6. Resolva a questão 3 para o caso de oito esferas, com três pesagens. 


pesa1 [1, 2 ,3] - [4, 5, 6]    fora [7, 8]
456 desceu
se ficar em equilibrio 7 ou 8 é mais leve ou pesada
    pesa2 [7, 1] fora [2, 3, 4, 5, 6, 8]

    se ficar em equilibrio 8 é mais leve ou pesado
        pesa3 [8, 1] fora [2, 3, 4, 5, 6, 7]
        se 8 subir
            é mais leve
        se 8 descer
            é pesado
    se 7 subir
        é mais leve
    se 7 descer
        é mais pesado
senao
    troca [5, 6] por [7, 8]
    pesa2 [1, 2, 3] - [4, 7, 8]   fora [5,6]
    se ficar em equilibrio
        pesa3 [5, 6] fora [1, 2, 3, 4, 7, 8]
        se 5 descer
            5 é mais pesado
        senao
            6 é mais pesado
    se a balanca [4, 7, 8] continuar embaixo
        [1, 2, 3] tem uma bola mais leve
        pesa3 [1] - [2] fora [3, 4, 5, 6, 7, 8]
        se ficar em equilibrio
            3 é mais leve
        ou se 1 subir
            1 é mais leve
        senao
            2 é mais leve
