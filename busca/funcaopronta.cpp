    // lower_bound faz a busca binária na lista ordenada de casas

  //retorna o indice do primeiro elemento que é menor ou igual a x

  sort(casas.rbegin(),casas.rend);//ordena decrescente
  auto it=lower_bound(casas.begin(),casas.end(),valor,greater<ll>())- v.begin();
  




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

    //se nao encontrar retorna casas.end()