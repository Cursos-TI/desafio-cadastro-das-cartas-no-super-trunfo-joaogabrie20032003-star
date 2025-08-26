# 🌍 Super Trunfo - Países 🇧🇷✈️

Bem-vindo ao desafio **Super Trunfo - Países**! Este projeto é um jogo simples em linguagem C, no estilo Super Trunfo, focado em cidades fictícias de um país dividido em estados e municípios.

## 🎯 Objetivo

O jogo consiste em comparar atributos de **cartas de cidades** para ver qual é a mais poderosa! Ele foi dividido em **3 níveis de dificuldade**, cada um adicionando novas funcionalidades ao jogo.

---

## 🧩 Níveis Implementados

### 🟢 Nível Novato: Cadastro Básico
📌 Funções:
- Cadastro de 2 cartas
- Atributos: Código, População, Área, PIB, Pontos Turísticos
- Exibição organizada dos dados

### 🟡 Nível Aventureiro: Cálculo de Atributos
📌 Adições:
- Cálculo de:
  - Densidade Populacional 🧮
  - PIB per Capita 💸

### 🔴 Nível Mestre: Comparação e Super Poder
📌 Adições:
- Comparação de cartas por atributo
- Cálculo do **Super Poder**:
  - Soma de todos os atributos (incluindo PIB per capita e densidade populacional invertida)

---

## 📥 Entrada

O usuário digita, via terminal:
- Código da carta (ex: A01)
- População (`int` ou `unsigned long int`)
- Área (`float`)
- PIB (`float`)
- Pontos turísticos (`int`)

---

## 📤 Saída

O programa exibe:
- Todos os dados inseridos
- Valores calculados (densidade, PIB per capita)
- Resultado da comparação (no nível Mestre)
- Vencedor por atributo 🏆

---

## 🛠️ Como Compilar

Para compilar o código em um terminal:

```bash
gcc CartasSuperTrunfo.c -o CartasSuperTrunfo.exe

E para rodar:
./CartasSuperTrunfo.exe

💡 ATENÇÃO!

✅ Certifique-se de estar no diretório correto onde está localizado o arquivo CartasSuperTrunfo.c antes de compilar!
🛑 Evita erros como No such file or directory.

📌 Requisitos

Compilador GCC instalado ✅

Terminal configurado com UTF-8 para evitar problemas com acentuação

Visual Studio Code recomendado para edição

edição

💻 Organização do Código

O código foi estruturado em 3 blocos principais para facilitar a leitura:

Nível Novato

Nível Aventureiro

Nível Mestre

Cada bloco é independente e pode ser comentado/descomentado conforme o desafio.

👨‍💻 Autor

Projeto realizado por João Gabriel

🏁 Resultado Final

Com esse sistema você pode simular uma disputa entre cidades e aprender conceitos importantes de programação em C, como:

Entrada e saída de dados

Operações matemáticas

Organização de código

Comparações lógicas