# Desafio Super Trunfo - Países - Cadastro das Cartas

Bem-vindo ao desafio "Super Trunfo - Países"! No jogo Super Trunfo, os jogadores comparam as propriedades das cartas para determinar a mais forte. O tema deste Super Trunfo é "Países," onde você comparará as propriedades das cidades.

A empresa MateCheck contratou você para desenvolver a parte inicial do jogo, que consiste no cadastro das cartas.

O desafio está dividido em três níveis: Novato, Aventureiro e Mestre, com cada nível adicionando mais complexidade ao anterior. Você deve escolher qual desafio quer realizar.

### 🚨 Atenção: 
O nível Novato do desafio é focado apenas no cadastro das cartas, utilizando as funções scanf para ler os dados e printf para exibi-los.

## 🎮 Nível Novato

No nível Novato, você iniciará criando o sistema básico do jogo Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades. 

Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4. A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).

### 🚩 Objetivo:
- Criar cartas representando cidades, contendo as seguintes propriedades:
  - **População**
  - **Área**
  - **PIB**
  - **Número de pontos turísticos**
  
### ⚙️ Funcionalidades do Sistema:
- O sistema permitirá ao usuário cadastrar cartas de cidades, inserindo manualmente os dados via terminal de comando.
- Após o cadastro, o sistema exibirá os dados de cada cidade de forma clara e organizada.

### 📥 Entrada e 📤 Saída de Dados:
- O usuário insere os dados de cada carta interativamente.
- Após o cadastro, os dados são exibidos com todas as propriedades da cidade, uma por linha.

---

## 🛡️ Nível Aventureiro

No nível Aventureiro, você expandirá o sistema para incluir propriedades calculadas, permitindo uma análise mais detalhada das cartas.

### 🆕 Diferença em relação ao Nível Novato:
- **Novas Propriedades Calculadas:**
  - **Densidade Populacional:** População dividida pela área da cidade.
  - **PIB per Capita:** PIB total dividido pela população.

### ⚙️ Funcionalidades do Sistema:
- O sistema agora calculará automaticamente a Densidade Populacional e o PIB per Capita com base nos dados inseridos.
- Essas novas propriedades serão adicionadas às informações exibidas para cada cidade.

### 📥 Entrada e 📤 Saída de Dados:
- O usuário continua inserindo os dados de cada carta interativamente.
- O sistema exibirá os dados, incluindo as novas propriedades calculadas, de forma clara e organizada.

---

## 🏆 Nível Mestre

No nível Mestre, você implementará comparações entre as cartas, utilizando operadores relacionais e manipulando grandes números com precisão.

### 🆕 Diferença em relação ao Nível Aventureiro:
- **Comparação de Cartas:**
  - O sistema permitirá ao usuário comparar duas cartas com base nas propriedades inseridas e calculadas.
  - Cada carta terá um "Super Poder", que é a soma de todas as propriedades.
  
### ⚙️ Funcionalidades do Sistema:
- O sistema utilizará operadores relacionais para determinar a carta vencedora com base nas propriedades comparadas.
- A comparação considerará:
  - **Densidade Populacional:** Vence a carta com menor valor.
  - **Outras Propriedades:** Vence a carta com maior valor.
- O resultado das comparações será exibido claramente para cada propriedade.

### 📥 Entrada e 📤 Saída de Dados:
- O usuário insere as cartas a serem comparadas.
- O sistema exibe os resultados das comparações, indicando a carta vencedora para cada propriedade.

---

# ⚠️ Importante!!!
Você pode escolher qualquer um dos desafios para desenvolver. Sinta-se à vontade para começar pelo desafio que mais lhe interessa.

# Desafio Super Trunfo - Países - Comparação das Cartas

Bem-vindo ao desafio "Super Trunfo - Países"! Neste projeto, você desenvolverá um sistema para comparar cartas baseadas em atributos de cidades. O desafio é dividido em três níveis: Novato, Aventureiro e Mestre. Cada nível adiciona novas funcionalidades e complexidades, permitindo um aprendizado progressivo.

## 🏅 Nível Novato

No nível Novato, você começará implementando a lógica básica de comparação entre cartas utilizando estruturas de decisão `if` e `if-else`.

### 🚩 Objetivos:
- **Cadastro de Cartas:** O sistema permitirá ao usuário cadastrar cartas de cidades, incluindo informações como estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
- **Comparação de Cartas:** O sistema comparará os atributos de duas cartas e determinará a vencedora com base em uma propriedade específica (população, área, PIB, etc.), escolhida no código.
- **Exibição de Resultados:** Após a comparação, o sistema exibirá qual carta venceu com base na regra: maior valor vence, exceto em densidade populacional, onde o menor valor é o vencedor.

### 📥 Entrada de Dados:
- Os dados das cartas serão inseridos manualmente via terminal.
- O sistema solicitará interativamente as informações de cada carta.

### 📤 Saída de Dados:
- Após o cadastro, as propriedades da cidade serão exibidas de forma organizada.
- O resultado da comparação será mostrado, indicando a carta vencedora.

---

## 🏅 Nível Aventureiro

No nível Aventureiro, você expandirá o sistema para incluir a comparação aninhada e a criação de um menu interativo usando `switch`.

### 🆕 Diferença em relação ao Nível Novato:
- **Menu Interativo:** O usuário poderá escolher diferentes atributos para comparação através de um menu.
- **Comparação Aninhada:** Implementação de lógica de comparação mais complexa, utilizando estruturas aninhadas para tomar decisões baseadas em múltiplos atributos.

### 🚩 Novas Funcionalidades:
- **Cadastro de Cartas:** Similar ao nível Novato, com a adição de comparação de múltiplos atributos.
- **Menu Interativo:** Uso de `switch` para criar um menu que permite ao jogador escolher os atributos a serem comparados.
- **Exibição de Resultados:** O sistema exibirá o resultado da comparação, indicando qual carta venceu e qual atributo foi utilizado.

---

## 🏅 Nível Mestre

No nível Mestre, o desafio se intensifica com a adição de funcionalidades avançadas, como menus dinâmicos e lógica de decisão complexa com operadores ternários.

### 🆕 Diferença em relação ao Nível Aventureiro:
- **Escolha de Dois Atributos:** O usuário poderá escolher dois atributos para comparação entre as cartas.
- **Lógica de Decisão Complexa:** Implementação de estruturas de decisão aninhadas e encadeadas, além do uso de operadores ternários para determinar a carta vencedora.
- **Menus Dinâmicos:** Os menus serão dinâmicos, permitindo uma navegação fluida entre as opções de comparação.

### 🚩 Novas Funcionalidades:
- **Comparação de Dois Atributos:** O sistema comparará dois atributos simultaneamente para determinar a carta vencedora.
- **Lógica Avançada:** Uso de operadores ternários e lógica aninhada para lidar com comparações complexas.
- **Empates:** O sistema será capaz de lidar com empates, exibindo mensagens apropriadas.
- **Exibição de Resultados:** Exibição dos resultados das comparações de forma clara e interativa.

---

## 📋 Requisitos Funcionais Comuns
- **Cadastro de Cartas:** O sistema deve permitir o cadastro de cartas com as informações necessárias.
- **Comparação:** O sistema deve comparar as cartas e determinar a vencedora com base nas regras estabelecidas.
- **Exibição de Resultados:** Os resultados devem ser exibidos de forma clara, indicando a carta vencedora.

## 📌 Requisitos Não Funcionais Comuns
- **Usabilidade:** A interface do usuário deve ser simples e intuitiva.
- **Performance:** O sistema deve executar operações sem atrasos perceptíveis.
- **Manutenibilidade:** O código deve ser bem estruturado e documentado.
- **Confiabilidade:** O sistema deve ser robusto e capaz de lidar com entradas inválidas de forma adequada.

---

Boa sorte no desenvolvimento deste desafio e aproveite para aprender e se divertir enquanto progride pelos níveis!

Equipe de Ensino - MateCheck

Ao concluir todos os níveis, você terá criado um sistema incial para o jogo Super Trunfo, com funcionalidades de cadastro, cálculo e comparação de propriedades. 

Boa sorte e divirta-se programando!

Equipe de Ensino - MateCheck
