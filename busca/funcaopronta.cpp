    // lower_bound faz a busca binária na lista ordenada de casas



    //retorna o indice do primeiro elemento que é maior ou igual a x
      auto it = lower_bound(casas.begin(), casas.end(), valor) - v.begin();
    //retorna o indice do primeiro elemento que é estritamente maior que x
      auto it = upper_bound(casas.begin(),casas.end(),valor) - v.begin();
    //acha a quantidade de valores repetidos do "valor"
    int repetidos= upper_bound()-lower_bound();
      //ou
    //seja um valor qualquer do vetor
    auto it = lower_bound(casas.begin(), casas.end(), valor);
        
    // Subtraindo o iterador inicial, descobrimos o índice desse valor instantaneamente
    int indicedovetor = it - casas.begin();