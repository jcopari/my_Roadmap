# Roadmap Completo – Domínio Total do Currículo 42 (+ Estrutura de Dados Completa)

---

🔥 **FASE 0 – Fundamentos Absolutos e Ferramentas**
🎯 **Objetivo:** Construir base em lógica, programação, ambiente Unix e ferramentas essenciais.

### 0.1 – Lógica de Programação
* **📚 Estudar:**
    * Algoritmos básicos (sequência, seleção, repetição)
    * Recursão
    * Pseudocódigo e fluxogramas
* **🔗 Materiais:**
    * Curso de Algoritmos e Lógica de Programação (Grátis)
    * Visualgo (visualização de algoritmos)
* **💻 Mini-projeto:**
    * Criar um calculador de IMC em pseudocódigo e depois implementar em C.

### 0.2 – Introdução ao C
* **📚 Estudar:**
    * Tipos de dados, operadores
    * Condicionais, loops
    * Funções
    * Compilação simples (gcc)
* **🔗 Materiais:**
    * The C Programming Language – K&R (PDF grátis)
    * Exercícios C no Beecrowd
* **💻 Exercícios:**
    * Resolver problemas 1000–1015 no Beecrowd.

### 0.3 – Unix/Linux Básico
* **📚 Estudar:**
    * Estrutura de diretórios Unix
    * Comandos básicos (ls, cd, chmod, man, grep)
    * Pipes e redirecionamentos
* **🔗 Materiais:**
    * Linux Journey
    * Guia Shell Linux (Grátis)
* **💻 Mini-projeto:**
    * Criar um script Bash que organiza arquivos de uma pasta por extensão.

### 0.4 – Controle de Versão com Git/GitHub
* **📚 Estudar:**
    * O que é Git e por que usá-lo.
    * Comandos essenciais: `git init`, `git add`, `git commit`, `git status`, `git push`, `git pull`, `git clone`.
    * Branches básicos: `git branch`, `git checkout`.
    * Ignorando arquivos com `.gitignore`.
* **🔗 Materiais:**
    * Git e GitHub para Iniciantes (Curso Grátis)
    * Documentação oficial do Git
* **💻 Mini-projeto:**
    * Criar um repositório no GitHub para ser o "hub" de todos os projetos deste roadmap.
    * Colocar o calculador de IMC em C no repositório, seguindo o fluxo de `add`, `commit` e `push`.

---

🏗️ **FASE 1 – C Avançado e Ambiente de Desenvolvimento**
🎯 **Objetivo:** Dominar C puro, ponteiros, build systems e boas práticas de código.

### 1.1 – Ponteiros e Memória
* **📚 Estudar:**
    * Ponteiros e aritmética de ponteiros
    * Arrays vs ponteiros
    * Passagem por referência
    * Stack vs Heap
* **🔗 Materiais:**
    * Ponteiros em C - Gustavo Guanabara (vídeo)
    * Ponteiros no GeeksForGeeks
* **💻 Mini-projeto:**
    * Implementar funções próprias: ft_strlen, ft_strcpy, ft_strcmp sem usar string.h.

### 1.2 – Makefiles e Build Systems
* **📚 Estudar:**
    * Estrutura de Makefiles
    * Targets phony, variáveis automáticas
* **🔗 Materiais:**
    * Makefile Tutorial (Grátis)
* **💻 Mini-projeto:**
    * Criar um Makefile que compila automaticamente múltiplos arquivos .c e gera uma biblioteca `libft.a`.

### 1.3 – Debugging e Ferramentas
* **📚 Estudar:**
    * GDB (breakpoints, watch, step)
    * Valgrind para memory leaks
* **🔗 Materiais:**
    * GDB Pocket Reference (PDF)
    * Valgrind Quick Start
* **💻 Mini-projeto:**
    * Identificar e corrigir memory leaks em um programa propositalmente “bugado” usando Valgrind e GDB.

### 1.4 – Conceitos de Linkagem
* **📚 Estudar:**
    * Bibliotecas estáticas (`.a`) vs. dinâmicas (`.so`)
    * Processo de compilação completo (preprocessamento → compilação → montagem → linkagem)
* **🔗 Materiais:**
    * Como o GCC Compila um Programa
* **💻 Mini-projeto:**
    * Criar e linkar uma biblioteca estática com 3 funções matemáticas a um programa principal.

### 1.5 – Testes Unitários em C
* **📚 Estudar:**
    * O que são testes unitários e por que são importantes.
    * Frameworks simples de teste em C (ex: Unity, CUnit) ou criar um sistema básico com macros.
* **🔗 Materiais:**
    * Tutorial do framework Unity (para C)
* **💻 Mini-projeto:**
    * Criar testes unitários para as funções da sua `libft` (ft_strlen, etc.), testando casos normais e "edge cases" (strings vazias, nulas). Integrar a execução dos testes ao Makefile com um target `make test`.

---

🌱 **FASE 2 – Estruturas de Dados e Sistemas Unix**
🎯 **Objetivo:** Construir e usar estruturas de dados robustas e dominar os componentes internos do Unix.

### 2.1 – Estruturas de Dados (Básico)
* **📚 Estudar:**
    * Linked Lists (simples e duplas)
    * Stacks e Queues
    * Arrays Dinâmicos
* **🔗 Materiais:**
    * Estruturas de Dados em C - UFPR (PDF)
    * Visualização em Visualgo
* **💻 Mini-projeto:**
    * Criar uma biblioteca com funções para listas encadeadas (add, delete, search, reverse). Para cada função, criar um teste unitário correspondente.

### 2.2 – Estruturas de Dados (Avançado)
* **📚 Estudar:**
    * Complexidade de Algoritmos (Big O Notation)
    * Árvores (Binárias, AVL, Red-Black)
    * Hash Tables (com tratamento de colisão)
    * Grafos (representação e buscas BFS/DFS)
    * Heaps e Priority Queues
    * Paradigmas de Algoritmos: Gulosos, Divisão e Conquista.
* **🔗 Materiais:**
    * Introduction to Algorithms – CLRS (PDF)
    * Curso gratuito de Estruturas Avançadas (YouTube)
* **💻 Mini-projeto:**
    * Implementar uma Árvore Binária de Busca com funções de inserção, remoção, busca e impressão (com testes).
    * Implementar uma Hash Table funcional.
    * Implementar a representação de um Grafo e os algoritmos de busca BFS e DFS.

### 2.3 – Unix Internals
* **📚 Estudar:**
    * Processos: `fork`, `execve`, `wait`, `waitpid`
    * Pipes e redirecionamentos
    * Sinais: `kill`, `signal`, `sigaction`
* **🔗 Materiais:**
    * The Linux Programming Interface (Grátis)
* **💻 Mini-projeto (Mini-shell):**
    * Criar um mini-shell com a seguinte progressão:
        1.  Loop principal que lê o input do usuário.
        2.  Parsing de comandos simples e argumentos (ex: `ls -l`).
        3.  Execução de comandos externos usando `fork` e `execve`.
        4.  Implementação de pipes (`|`).
        5.  Implementação de redirecionamentos de saída e entrada (`>` e `<`).

---

🌌 **FASE 3 – Gráficos e Matemática**
🎯 **Objetivo:** Dominar gráficos 2D/3D e a matemática necessária para os projetos gráficos.

### 3.1 – Gráficos com MiniLibX
* **📚 Estudar:**
    * Uso básico da MiniLibX
    * Manipulação de janelas, pixels, imagens
    * Eventos de teclado e mouse
* **🔗 Materiais:**
    * Documentação e guias da MiniLibX
* **💻 Mini-projeto:**
    * Criar um programa que desenha formas geométricas (linhas, círculos) na tela.

### 3.2 – Matemática Aplicada
* **📚 Estudar:**
    * Álgebra Linear: vetores, matrizes, transformações
    * Projeções (isométrica, perspectiva)
    * Trigonometria básica para rotações e cálculos
* **🔗 Materiais:**
    * Linear Algebra Crash Course (YouTube)
* **💻 Mini-projeto:**
    * Criar uma projeção isométrica simples de um grid 2D para 3D.

---

🌐 **FASE 4 – Redes e Concorrência**
🎯 **Objetivo:** Programar servidores/clientes e entender redes e concorrência profundamente.

### 4.1 – Redes e Sockets
* **📚 Estudar:**
    * Modelo OSI, TCP/IP
    * Sockets TCP e UDP (server/client)
    * Multiplexação de I/O (`select`, `poll`, `epoll`)
* **🔗 Materiais:**
    * Beej’s Guide to Network Programming
* **💻 Mini-projeto:**
    * Criar um servidor TCP que ecoa as mensagens recebidas de múltiplos clientes.

### 4.2 – Concorrência
* **📚 Estudar:**
    * Threads com `pthreads` (threads, mutexes, variáveis de condição)
    * Problemas clássicos de sincronização: Jantar dos Filósofos, Produtor-Consumidor
* **🔗 Materiais:**
    * Pthreads Programming Tutorial
* **💻 Mini-projeto:**
    * Implementar uma solução para o problema do Jantar dos Filósofos usando threads e mutexes.

---

🚀 **FASE 5 – C++ e Paradigmas Modernos**
🎯 **Objetivo:** Transicionar de C para C++, aprendendo Orientação a Objetos e o poder da Standard Template Library (STL).

### 5.1 – Fundamentos do C++
* **📚 Estudar:**
    * Diferenças entre C e C++ (streams, strings, new/delete).
    * Conceitos de Orientação a Objetos: Classes, Objetos, Encapsulamento, Herança, Polimorfismo.
    * RAII (Resource Acquisition Is Initialization).
    * Sobrecarga de operadores.
* **🔗 Materiais:**
    * Learn C++ (learncpp.com)
* **💻 Mini-projeto:**
    * Refatorar a biblioteca de Lista Encadeada (da Fase 2) para uma versão em C++, usando uma classe `LinkedList`.

### 5.2 – C++ Moderno e STL
* **📚 Estudar:**
    * STL: `std::vector`, `std::string`, `std::map`, `std::list`.
    * Ponteiros Inteligentes: `std::unique_ptr`, `std::shared_ptr`.
    * Templates de função e classe.
* **💻 Mini-projeto:**
    * Reimplementar o projeto da Árvore Binária de Busca ou da Hash Table usando classes, templates e ponteiros inteligentes.

---

🏁 **FASE 6 – DevOps, Web e Segurança**
🎯 **Objetivo:** Aprender conceitos essenciais para os projetos finais e para o mercado de trabalho.

### 6.1 – Docker e Containers
* **📚 Estudar:**
    * Conceitos de containers e virtualização.
    * Docker básico: `Dockerfile`, `docker build`, `docker run`.
    * Docker Compose para orquestração de múltiplos containers.
* **🔗 Materiais:**
    * Play with Docker (Grátis)
* **💻 Mini-projeto:**
    * Dockerizar a aplicação C++ criada na Fase 5, criando um ambiente de compilação e execução consistente.

### 6.2 – Web Essentials
* **📚 Estudar:**
    * Protocolo HTTP (verbos, status codes), APIs REST.
    * HTML, CSS, JavaScript básicos para construir um frontend simples.
    * Backend: Conceitos de Node.js/NestJS.
* **🔗 Materiais:**
    * Mozilla Developer Network (MDN)
* **💻 Mini-projeto:**
    * Criar um servidor web simples com Node.js que responde a requisições GET e POST.

### 6.3 – Segurança da Informação
* **📚 Estudar:**
    * Criptografia: Hashes (para senhas), Criptografia Simétrica (AES) e Assimétrica (RSA).
    * Práticas seguras de programação: Prevenção de SQL Injection e Buffer Overflow.
* **🔗 Materiais:**
    * Crypto101 (PDF)
* **💻 Mini-projeto:**
    * Implementar um sistema de login simples em qualquer linguagem, garantindo que as senhas sejam armazenadas usando um hash seguro (ex: Argon2, bcrypt).
