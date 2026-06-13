    // lower_bound faz a busca binária na lista ordenada de casas
    //seja um valor qualquer do vetor
    auto it = lower_bound(casas.begin(), casas.end(), valor);
        
    // Subtraindo o iterador inicial, descobrimos o índice desse valor instantaneamente
    int indicedovetor = it - casas.begin();