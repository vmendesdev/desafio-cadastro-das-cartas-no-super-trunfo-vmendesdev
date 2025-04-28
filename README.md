# 🃏 Super Trunfo - Cadastro de Cartas 

<div align="center">
  <img src="https://img.shields.io/badge/Projeto%20em-C-blue.svg" alt="Projeto em C" />
  <img src="https://img.shields.io/badge/Nível-Iniciante-green.svg" alt="Nível Iniciante" />
  <img src="https://img.shields.io/badge/Status-Concluído-brightgreen.svg" alt="Status Concluído" />
</div>

---

Bem-vindo ao projeto **Super Trunfo - Cidades**, desenvolvido como parte do desafio proposto pela **Estácio de Sá**!  
Este repositório apresenta a solução para o nível **Novato**, focado no cadastro das cartas do jogo no tema **Países e Cidades**.

---

## 📚 Sobre o Projeto

O projeto implementa um sistema que:
- Permite o **cadastro de cartas** representando cidades.
- Cada carta contém informações como:
  - Estado
  - Código da carta (Ex: A01, B03)
  - Nome da cidade
  - População
  - Área (em km²)
  - PIB
  - Número de pontos turísticos
- Após o cadastro, o sistema exibe todas as informações cadastradas, de forma clara e organizada.

---

## 🎯 Desafios Propostos (Nível Novato)

O desafio "Super Trunfo - Cadastro das Cartas" para o nível Novato exigia:

- **Criar uma estrutura** (`struct`) para armazenar os dados das cidades.
- **Cadastrar 32 cidades** manualmente, usando `scanf` para entrada de dados.
- **Exibir as informações** de cada carta após o cadastro.
- Utilizar boas práticas como:
  - Organização do código
  - Modularização por funções
  - Comentários explicativos

---

## ⚙️ Funcionalidades Desenvolvidas

- **Cadastro de cartas**  
  O programa solicita interativamente ao usuário os dados de cada cidade e armazena na memória.

- **Exibição das cartas**  
  Após o cadastro de todas as cidades, o programa lista todas as informações cadastradas.

- **Validação de entrada**  
  Cada leitura de entrada (`scanf`) verifica se os dados foram inseridos corretamente.

- **Estrutura de Dados**  
  Utilização de `struct` para organizar melhor as propriedades de cada cidade.

---

## 🛠️ Como Executar o Projeto

**1. Clonar o repositório:**

```bash
git clone https://github.com/vmendesdev/desafio-cadastro-das-cartas-no-super-trunfo-vmendesdev.git
cd desafio-cadastro-das-cartas-no-super-trunfo-vmendesdev
```

**2. Compilar o código:**

```bash
gcc CartasSuperTrunfo.c -o CartasSuperTrunfo.exe
```

**3. Executar:**

```bash
CartasSuperTrunfo.exe
```

---

## 📋 Estrutura do Código

- `typedef struct` → Definição da estrutura `CartaCidade`.
- `cadastrarCarta()` → Função para receber os dados da cidade via terminal.
- `exibirCarta()` → Função para mostrar os dados formatados na tela.
- `main()` →  
  - Laço para cadastro das 32 cartas.  
  - Laço para exibição de todas as cartas cadastradas.

---

## 🚀 Tecnologias Utilizadas

- Linguagem C
- Compilador GCC
- Terminal (para interação usuário-sistema)

---

## 📈 Evoluções Futuras

Este projeto é a primeira etapa do desafio Super Trunfo.  
As próximas evoluções podem incluir:
- Cálculo de densidade populacional e PIB per capita (Nível Aventureiro)
- Comparação de cartas e super poderes (Nível Mestre)

---

## 👩‍💻 Autora

Desenvolvido com 💻❤️ por **Vanessa Melo Mendes**.

- GitHub: [@vmendesdev](https://github.com/vmendesdev)

---

> Este projeto faz parte do meu portfólio pessoal e demonstra habilidades práticas em lógica de programação, estruturas de decisão e desenvolvimento de aplicações em C.

---

# 🏆 Obrigado por visitar meu projeto!
