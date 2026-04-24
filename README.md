# 📧 Detector de SPAM com Autômato (C++)

Projeto desenvolvido em **C++** para identificar **palavras suspeitas em e-mails** e classificá-los como **SPAM** com base na frequência dessas ocorrências.

---

## 🚀 Funcionalidades

- 🔍 Análise de conteúdo de e-mails  
- ⚠️ Identificação de palavras suspeitas  
- 📊 Classificação automática (SPAM / NÃO SPAM)  
- 🧠 Uso de conceitos de **autômatos** e processamento de strings  

---

## 🧠 Como funciona

O programa realiza os seguintes passos:

1. Lê o conteúdo de um e-mail  
2. Busca por palavras previamente definidas como suspeitas  
3. Conta a quantidade de ocorrências  
4. Classifica o e-mail com base em um limite definido  

---

## 🛠️ Tecnologias

- **C++**
- Lógica de programação
- Estruturas de dados básicas
- Conceitos de autômatos

---

## 📂 Estrutura do Projeto

```

📁 automato-spam
├── main.cpp
├── Imagens png
└── README.md

````

> 📌 A pasta **Imagens png** pode conter exemplos visuais da execução ou diagramas do autômato.

---

## ▶️ Como executar

1. Compile o código:
```bash
g++ main.cpp -o spam_detector
````

2. Execute:

```bash
./spam_detector
```

---

## 📌 Exemplo

**Entrada:**

```
Parabéns! Você ganhou um prêmio exclusivo, clique agora!
```

**Saída:**

```
⚠️ Este e-mail foi classificado como SPAM
```

---

## 👥 Colaboradores

* 👨‍💻 Eduardo
* 👩‍💻 Sarah
* 👨‍💻 Thiago

---

## 📄 Licença

Projeto com fins **acadêmicos e educacionais**.

---

## 💡 Melhorias futuras

* Expandir a lista de palavras suspeitas
* Ajustar o critério de classificação
* Criar interface gráfica
* Adicionar leitura de arquivos reais de e-mail
