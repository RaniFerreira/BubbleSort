# ***🚀 Implementação do Bubble Sort em C++***

📌 Sobre o repositório

Este projeto apresenta a implementação do algoritmo de ordenação Bubble Sort em C++, incluindo tanto a versão simples quanto a otimizada. O objetivo é entender como o algoritmo funciona e comparar o desempenho das duas abordagens.
A versão simples percorre o vetor repetidamente, comparando e trocando elementos adjacentes que estão fora de ordem até que toda a lista esteja ordenada.
A versão otimizada interrompe a execução quando nenhuma troca ocorre em uma iteração, indicando que o vetor já está ordenado, tornando o processo mais eficiente em alguns casos.

🎯 Objetivo

✔️ Compreender o funcionamento do Bubble Sort.

 ✔️ Implementar e testar tanto a versão simples quanto a otimizada.
 
 ✔️ Comparar o desempenho das abordagens, analisando número de iterações e tempo de execução.

 📜 Versão Simples
 
O Bubble Sort percorre a lista diversas vezes, comparando elementos adjacentes e realizando trocas sempre que necessário. O processo continua até que todos os elementos estejam ordenados.

📌 Complexidade:

Pior caso: O(n²) → Lista em ordem reversa.
Melhor caso: O(n²) → Sem otimização, sempre percorre o vetor inteiro.

🔧 Implementação:



<div style="display: flex; justify-content: center; gap: 10px;">
    <img src="https://github.com/RaniFerreira/BubbleSort/blob/main/img/s1.png" width="300" height="250">
    <img src="https://github.com/RaniFerreira/BubbleSort/blob/main/img/s2.png" width="300" height="250">
</div>

Caso Teste: 

<img src="https://github.com/RaniFerreira/BubbleSort/blob/main/img/s3.png" width="200" height="150">


⚡ Versão Otimizada

A versão otimizada reduz execuções desnecessárias ao interromper o algoritmo se nenhuma troca for feita em uma iteração, o que significa que a lista já está ordenada.

📌 Complexidade:

Pior caso: O(n²) → Lista em ordem reversa.

Melhor caso: O(n) → Lista já ordenada.


🔧 Implementação:


<div style="display: flex; justify-content: center; gap: 10px;">
    <img src="https://github.com/RaniFerreira/BubbleSort/blob/main/img/bb1.png" width="300" height="250">
    <img src="https://github.com/RaniFerreira/BubbleSort/blob/main/img/bb2.png" width="300" height="250">
</div>

Caso Teste: 

<img src="https://github.com/RaniFerreira/BubbleSort/blob/main/img/s3.png" width="200" height="150">

📊 Testes e Comparação de Desempenho

📌 O código mede:

 ✅ Número de iterações na versão simples e otimizada.
 
 ✅ Tempo de execução para diferentes tamanhos de entrada.
 
📌 Resultados esperados:

Listas ordenadas: A versão otimizada é significativamente mais rápida (O(n) em vez de O(n²)).

Listas aleatórias: A otimização reduz algumas iterações desnecessárias.

Listas em ordem reversa: Ambas as versões continuam O(n²).


📚 Conclusão

🔹 O Bubble Sort não é o algoritmo mais eficiente para grandes conjuntos de dados.

 🔹 A versão otimizada reduz iterações desnecessárias, melhorando o desempenho em alguns casos.
 
 🔹 Para dados extensos, algoritmos como Quick Sort ou Merge Sort são mais adequados (O(n log n)).

🤝 Contribuições

Sinta-se à vontade para abrir issues ou enviar pull requests com melhorias! 😊

📌 Autor: Ranielly Ferreira
 





