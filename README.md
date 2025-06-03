# 🃏 Lógica Super Trunfo em C

Este repositório contém a implementação completa de um jogo inspirado no Super Trunfo, desenvolvido em linguagem C como parte de um desafio acadêmico dividido em três níveis de dificuldade: Novato, Aventureiro e Mestre. A cada etapa, novas funcionalidades e desafios de programação foram introduzidos para fortalecer o domínio da linguagem e a lógica computacional.

---

## Desafio Nível Novato - Cadastro de Cartas

Neste primeiro estágio, o objetivo é criar a base do jogo: o cadastro de cartas representando cidades fictícias ou reais, com atributos importantes.

// 💡 Sobre o Projeto

O programa permite o cadastro de duas cartas com as seguintes informações:

- Estado (letra de A a H)
- Código da Carta (ex: A01, B02)
- Nome da Cidade
- População
- Área (em km²)
- PIB (Produto Interno Bruto)
- Número de Pontos Turísticos

Após o cadastro, as informações são exibidas de forma organizada na tela, simulando uma carta de Super Trunfo.

// 🛠️ Tecnologias Utilizadas

- Linguagem C  
- Compilador GCC  
- Terminal (entrada e saída padrão)

- Exemplo de Saida
![image](https://github.com/user-attachments/assets/f2781ae7-fedf-46b4-8b5b-b50e1925609c)
---

## Desafio Nível Aventureiro - Cálculos Avançados

Na segunda fase, o projeto foi aprimorado com cálculos que enriquecem os atributos das cartas, oferecendo novas possibilidades de comparação.

// 💡 Sobre o Projeto

Dois novos atributos são calculados automaticamente a partir das informações cadastradas:

- **Densidade Demográfica**: população dividida pela área.
- **PIB per Capita**: PIB total dividido pela população.

Esses cálculos são exibidos com duas casas decimais, oferecendo ao jogador mais dados estratégicos para futuras comparações.

// ✅ Funcionalidades Implementadas

- Cálculo automático de densidade populacional
- Cálculo de PIB per capita
- Aprimoramento da exibição dos dados
- Reforço de conceitos matemáticos e uso de `float`

// 🛠️ Tecnologias Utilizadas

- Linguagem C  
- Compilador GCC  
- Terminal (entrada e saída padrão)  

---

## Desafio Nível Mestre - Comparação Avançada de Cartas

No desafio final, o projeto evolui para implementar a lógica completa de uma **batalha entre duas cartas**, usando **múltiplos atributos** definidos dinamicamente pelo jogador.

// 💡 Sobre o Projeto

O programa agora permite comparar duas cartas a partir de **dois atributos distintos**, escolhidos por meio de menus interativos. A lógica de comparação inclui regras específicas para cada tipo de dado.

// Regras de Comparação:

- A maioria dos atributos seguem a regra: **maior valor vence**.
- A única exceção é a **Densidade Demográfica**, onde **vence o menor valor**.

Após a escolha, o programa:

- Realiza a comparação dos dois atributos individualmente
- Soma os valores dos atributos de cada carta
- Declara a carta com a maior soma como vencedora
- Em caso de soma igual, exibe “Empate!”

// Funcionalidades Importantes

- **Menus Dinâmicos com `switch-case`**: o segundo atributo não pode ser igual ao primeiro.
- **Uso do operador ternário** para decisões mais limpas.
- **Validação de entradas** com tratamento de erros e mensagens informativas.
- **Exibição clara e organizada** do nome dos países, atributos escolhidos, valores, somas e vencedor da rodada.

// ✅ Funcionalidades Implementadas

- Escolha dinâmica de atributos para comparação
- Comparação com regras específicas por tipo de atributo
- Soma dos atributos e definição de vencedor
- Tratamento de empates
- Interface com menus interativos
- Organização visual da saída de dados

// 🛠️ Tecnologias Utilizadas

- Linguagem C  
- Compilador GCC  
- Terminal (entrada e saída padrão)  

---

// 📚 Aprendizados ao Longo do Projeto

- Declaração e manipulação de variáveis de diferentes tipos (`char`, `int`, `float`, `unsigned long`)
- Uso de estruturas condicionais (`if-else`, `switch`)
- Aplicação de operadores aritméticos e ternários
- Validação de entrada e tratamento de erros
- Organização, legibilidade e boas práticas de código
- Pensamento lógico para resolução de problemas reais

---

Este projeto demonstrou o poder da programação em C para construir sistemas interativos e lógicos. Ao longo das três fases, foi possível aprofundar conhecimentos técnicos, desenvolver habilidades de resolução de problemas e criar uma aplicação funcional, divertida e educativa.
