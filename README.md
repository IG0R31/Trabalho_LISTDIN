# Lista Dinâmica com Redimensionamento Automático

##### Este projeto implementa uma lista ordenada dinâmica em C++ que suporta expansão e contração automáticas de sua capacidade com base no número de elementos armazenados. Ele utiliza técnicas de alocação dinâmica de memória para gerenciar eficientemente o espaço utilizado.

# FUNÇÕES

    Adição de Elementos

    °Adiciona valores à lista de forma 
    ordenada.

    °Duplica a capacidade da lista automaticamente quando o limite atual é alcançado.
Remoção de Elementos

    °Remove elementos específicos, colocando a capacidade da lista pela metade quando o número de elementos cair para 25% da capacidade atual.


    °Redimensionamento Automático

    °Libera memória desnecessária ao diminuir a capacidade da lista.


# MÉTODOS

Utilizando as dicas que foram enviadas em C, fiz a troca para C++. Baseado no código que foi enviado utilizei as seguintes formas: 

    Lista(int cap_inicial = 50)

    Construtor que inicializa a lista com capacidade padrão de 50 elementos.
    
    °~Lista()
    Destrutor que libera a memória alocada dinamicamente.
    
    °adiciona(int valor)
    Adiciona um elemento à lista e redimensiona se necessário.
    
    °deletar(int valor)
    Remove um elemento da lista e redimensiona se necessário.
    
    °print()
    Exibe os elementos armazenados na lista.
    
    °realocar(int n_capacidades)
    Redimensiona a capacidade da lista.


