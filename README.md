# 🚀 ROADMAP COMPLETO - SISTEMA LOW-LEVEL COM FOCO NA 42

**Duração Total Estimada**: 8-10 meses de estudo consistente  
**Objetivo**: Dominar programação de sistemas, estruturas de dados e preparar-se para o mercado de trabalho

---

## 🔥 FASE 0 – Fundamentos Absolutos e Ferramentas
**🎯 Objetivo**: Construir base em lógica, programação, ambiente Unix e ferramentas essenciais.  
**⏱️ Duração**: 3-4 semanas

### 0.1 – Lógica de Programação
- 📚 **Estudar**:
  - Algoritmos básicos (sequência, seleção, repetição)
  - Recursão
  - Pseudocódigo e fluxogramas
- 🔗 **Materiais**:
  - [Curso de Algoritmos e Lógica de Programação](https://www.coursera.org/learn/algoritmos) (Grátis)
  - [Visualgo](https://visualgo.net/) (visualização de algoritmos)
- 💻 **Mini-projeto**:
  - Criar um calculador de IMC em pseudocódigo e depois implementar em C.

### 0.2 – Introdução ao C
- 📚 **Estudar**:
  - Tipos de dados, operadores
  - Condicionais, loops
  - Funções
  - Compilação simples (gcc)
- 🔗 **Materiais**:
  - The C Programming Language – K&R (PDF grátis)
  - [Exercícios C no Beecrowd](https://www.beecrowd.com.br/)
- 💻 **Exercícios**:
  - Resolver problemas 1000–1015 no Beecrowd.
  - **Projeto 42**: Equivale ao **libft** básico

### 0.3 – Unix/Linux Básico
- 📚 **Estudar**:
  - Estrutura de diretórios Unix
  - Comandos básicos (ls, cd, chmod, man, grep)
  - Pipes e redirecionamentos
- 🔗 **Materiais**:
  - [Linux Journey](https://linuxjourney.com/)
  - [Guia Shell Linux](https://www.shellscript.sh/) (Grátis)
- 💻 **Mini-projeto**:
  - Criar um script Bash que organiza arquivos de uma pasta por extensão.

### 0.4 – Controle de Versão com Git/GitHub
- 📚 **Estudar**:
  - O que é Git e por que usá-lo
  - Comandos essenciais: `git init`, `git add`, `git commit`, `git status`, `git push`, `git pull`, `git clone`
  - Branches básicos: `git branch`, `git checkout`, `git merge`
  - Ignorando arquivos com `.gitignore`
- 🔗 **Materiais**:
  - [Git e GitHub para Iniciantes](https://www.youtube.com/watch?v=xEKo29OWILE) (Curso Grátis)
  - [Documentação oficial do Git](https://git-scm.com/doc)
- 💻 **Mini-projeto**:
  - Criar um repositório no GitHub para ser o "hub" de todos os projetos deste roadmap
  - Colocar o calculador de IMC em C no repositório, seguindo o fluxo de add, commit e push

---

## 🏗️ FASE 1 – C Avançado e Ambiente de Desenvolvimento
**🎯 Objetivo**: Dominar C puro, ponteiros, build systems e boas práticas de código.  
**⏱️ Duração**: 4-5 semanas

### 1.1 – Ponteiros e Memória
- 📚 **Estudar**:
  - Ponteiros e aritmética de ponteiros
  - Arrays vs ponteiros
  - Passagem por referência
  - Stack vs Heap
  - Gerenciamento manual de memória (malloc, free)
- 🔗 **Materiais**:
  - [Ponteiros em C - Gustavo Guanabara](https://www.youtube.com/watch?v=kkkBjbzp6I8)
  - [Ponteiros no GeeksForGeeks](https://www.geeksforgeeks.org/pointers-in-c-and-cpp-set-1-introduction-arithmetic-and-array/)
- 💻 **Mini-projeto**:
  - Implementar funções próprias: `ft_strlen`, `ft_strcpy`, `ft_strcmp` sem usar `string.h`
  - **Projeto 42**: **libft** completo

### 1.2 – Makefiles e Build Systems
- 📚 **Estudar**:
  - Estrutura de Makefiles
  - Targets phony, variáveis automáticas
  - Flags de compilação (-Wall, -Wextra, -Werror)
- 🔗 **Materiais**:
  - [Makefile Tutorial](https://makefiletutorial.com/) (Grátis)
- 💻 **Mini-projeto**:
  - Criar um Makefile que compila automaticamente múltiplos arquivos .c e gera uma biblioteca `libft.a`

### 1.3 – Debugging e Ferramentas
- 📚 **Estudar**:
  - GDB (breakpoints, watch, step)
  - Valgrind para memory leaks
  - **NOVO**: gprof e perf para profiling
  - **NOVO**: Análise de performance e otimização
- 🔗 **Materiais**:
  - [GDB Pocket Reference](https://www.gnu.org/software/gdb/documentation/) (PDF)
  - [Valgrind Quick Start](https://valgrind.org/docs/manual/quick-start.html)
- 💻 **Mini-projeto**:
  - Identificar e corrigir memory leaks em um programa propositalmente "bugado" usando Valgrind e GDB

### 1.4 – Conceitos de Linkagem
- 📚 **Estudar**:
  - Bibliotecas estáticas (.a) vs. dinâmicas (.so)
  - Processo de compilação completo (preprocessamento → compilação → montagem → linkagem)
- 🔗 **Materiais**:
  - [Como o GCC Compila um Programa](https://gcc.gnu.org/onlinedocs/)
- 💻 **Mini-projeto**:
  - Criar e linkar uma biblioteca estática com 3 funções matemáticas a um programa principal

### 1.5 – Testes Unitários em C
- 📚 **Estudar**:
  - O que são testes unitários e por que são importantes
  - Frameworks simples de teste em C (ex: Unity, CUnit) ou criar um sistema básico com macros
  - **NOVO**: Conceitos de TDD (Test-Driven Development)
- 🔗 **Materiais**:
  - [Tutorial do framework Unity](http://www.throwtheswitch.org/unity) (para C)
- 💻 **Mini-projeto**:
  - Criar testes unitários para as funções da sua libft (`ft_strlen`, etc.), testando casos normais e "edge cases" (strings vazias, nulas)
  - Integrar a execução dos testes ao Makefile com um target `make test`

---

## 🌱 FASE 2 – Estruturas de Dados e Sistemas Unix
**🎯 Objetivo**: Construir e usar estruturas de dados robustas e dominar os componentes internos do Unix.  
**⏱️ Duração**: 6-8 semanas

### 2.1 – Estruturas de Dados (Básico)
- 📚 **Estudar**:
  - Linked Lists (simples e duplas)
  - Stacks e Queues
  - Arrays Dinâmicos
- 🔗 **Materiais**:
  - [Estruturas de Dados em C - UFPR](http://www.inf.ufpr.br/cursos/ci067/Docs/NotasAula.pdf)
  - [Visualização em Visualgo](https://visualgo.net/)
- 💻 **Mini-projeto**:
  - Criar uma biblioteca com funções para listas encadeadas (add, delete, search, reverse)
  - Para cada função, criar um teste unitário correspondente

### 2.2 – Estruturas de Dados (Avançado)
- 📚 **Estudar**:
  - Complexidade de Algoritmos (Big O Notation)
  - **NOVO**: Algoritmos de ordenação (Quick Sort, Merge Sort, Heap Sort)
  - Árvores (Binárias, AVL, Red-Black)
  - Hash Tables (com tratamento de colisão)
  - Grafos (representação e buscas BFS/DFS)
  - **NOVO**: Algoritmos em grafos (Dijkstra, A*)
  - Heaps e Priority Queues
  - Paradigmas de Algoritmos: Gulosos, Divisão e Conquista
- 🔗 **Materiais**:
  - Introduction to Algorithms – CLRS (PDF)
  - [Curso gratuito de Estruturas Avançadas](https://www.youtube.com/@AlgoritmosProgramacao)
  - **NOVO**: [LeetCode](https://leetcode.com/) (para prática de algoritmos)
  - **NOVO**: [HackerRank](https://www.hackerrank.com/) (para estruturas de dados)
- 💻 **Mini-projeto**:
  - Implementar uma Árvore Binária de Busca com funções de inserção, remoção, busca e impressão (com testes)
  - Implementar uma Hash Table funcional
  - Implementar a representação de um Grafo e os algoritmos de busca BFS e DFS
  - **NOVO**: Implementar algoritmos de ordenação com análise de complexidade

### 2.3 – Unix Internals
- 📚 **Estudar**:
  - Processos: `fork`, `execve`, `wait`, `waitpid`
  - Pipes e redirecionamentos
  - Sinais: `kill`, `signal`, `sigaction`
  - **NOVO**: Debugging de programas multithread
- 🔗 **Materiais**:
  - [The Linux Programming Interface](http://man7.org/tlpi/) (Grátis)
- 💻 **Mini-projeto (Mini-shell)**:
  - **Projeto 42**: **minishell**
  - Criar um mini-shell com a seguinte progressão:
    1. Loop principal que lê o input do usuário
    2. Parsing de comandos simples e argumentos (ex: `ls -l`)
    3. Execução de comandos externos usando `fork` e `execve`
    4. Implementação de pipes (`|`)
    5. Implementação de redirecionamentos de saída e entrada (`>` e `<`)
    6. Variáveis de ambiente
    7. Built-ins: `echo`, `cd`, `pwd`, `export`, `unset`, `env`, `exit`

---

## 🌌 FASE 3 – Gráficos, Matemática e Projetos Integradores
**🎯 Objetivo**: Dominar gráficos 2D/3D e a matemática necessária para os projetos gráficos.  
**⏱️ Duração**: 4-5 semanas

### 3.1 – Gráficos com MiniLibX
- 📚 **Estudar**:
  - Uso básico da MiniLibX
  - Manipulação de janelas, pixels, imagens
  - Eventos de teclado e mouse
- 🔗 **Materiais**:
  - [Documentação e guias da MiniLibX](https://harm-smits.github.io/42docs/libs/minilibx)
- 💻 **Mini-projeto**:
  - Criar um programa que desenha formas geométricas (linhas, círculos) na tela
  - **Projeto 42**: **so_long** (jogo 2D)

### 3.2 – Matemática Aplicada
- 📚 **Estudar**:
  - Álgebra Linear: vetores, matrizes, transformações
  - Projeções (isométrica, perspectiva)
  - Trigonometria básica para rotações e cálculos
- 🔗 **Materiais**:
  - [Linear Algebra Crash Course](https://www.youtube.com/watch?v=fNk_zzaMoSs)
- 💻 **Mini-projeto**:
  - Criar uma projeção isométrica simples de um grid 2D para 3D
  - **Projeto 42**: **FdF** (wireframe 3D)

### 3.3 – **NOVO**: Projeto Integrador - Jogo 2D
- 💻 **Projeto Final da Fase**:
  - Desenvolver um jogo 2D completo usando MiniLibX
  - Integrar estruturas de dados da Fase 2
  - Implementar sistema de pontuação, colisões, animações
  - **Equivale aos projetos 42**: **so_long** + **cub3d** (básico)

---

## 🌐 FASE 4 – Redes, Concorrência e Sistemas Distribuídos
**🎯 Objetivo**: Programar servidores/clientes e entender redes e concorrência profundamente.  
**⏱️ Duração**: 5-6 semanas

### 4.1 – Redes e Sockets
- 📚 **Estudar**:
  - Modelo OSI, TCP/IP
  - Sockets TCP e UDP (server/client)
  - Multiplexação de I/O (`select`, `poll`, `epoll`)
- 🔗 **Materiais**:
  - [Beej's Guide to Network Programming](https://beej.us/guide/bgnet/)
- 💻 **Mini-projeto**:
  - Criar um servidor TCP que ecoa as mensagens recebidas de múltiplos clientes
  - **Projeto 42**: **ft_irc** (servidor IRC)

### 4.2 – Concorrência
- 📚 **Estudar**:
  - Threads com pthreads (threads, mutexes, variáveis de condição)
  - Problemas clássicos de sincronização: Jantar dos Filósofos, Produtor-Consumidor
  - **NOVO**: Debugging de programas multithread
- 🔗 **Materiais**:
  - [Pthreads Programming Tutorial](https://computing.llnl.gov/tutorials/pthreads/)
- 💻 **Mini-projeto**:
  - Implementar uma solução para o problema do Jantar dos Filósofos usando threads e mutexes
  - **Projeto 42**: **philosophers**

### 4.3 – **NOVO**: Projeto Integrador - Chat Server
- 💻 **Projeto Final da Fase**:
  - Desenvolver um servidor de chat completo
  - Suporte para múltiplos clientes simultâneos
  - Salas de chat, mensagens privadas
  - Interface cliente simples
  - **Equivale ao projeto 42**: **ft_irc** completo

---

## 🚀 FASE 5 – C++, Paradigmas Modernos e Banco de Dados
**🎯 Objetivo**: Transicionar de C para C++, aprendendo Orientação a Objetos e gerenciamento de dados.  
**⏱️ Duração**: 4-5 semanas

### 5.1 – Fundamentos do C++
- 📚 **Estudar**:
  - Diferenças entre C e C++ (streams, strings, new/delete)
  - Conceitos de Orientação a Objetos: Classes, Objetos, Encapsulamento, Herança, Polimorfismo
  - RAII (Resource Acquisition Is Initialization)
  - Sobrecarga de operadores
- 🔗 **Materiais**:
  - [Learn C++](https://learncpp.com/)
- 💻 **Mini-projeto**:
  - Refatorar a biblioteca de Lista Encadeada (da Fase 2) para uma versão em C++, usando uma classe `LinkedList`
  - **Projeto 42**: **CPP Modules 00-04**

### 5.2 – C++ Moderno e STL
- 📚 **Estudar**:
  - STL: `std::vector`, `std::string`, `std::map`, `std::list`
  - Ponteiros Inteligentes: `std::unique_ptr`, `std::shared_ptr`
  - Templates de função e classe
- 💻 **Mini-projeto**:
  - Reimplementar o projeto da Árvore Binária de Busca ou da Hash Table usando classes, templates e ponteiros inteligentes
  - **Projeto 42**: **CPP Modules 05-09**

### 5.3 – **NOVO**: Banco de Dados Básico
- 📚 **Estudar**:
  - SQL básico (SELECT, INSERT, UPDATE, DELETE)
  - Conceitos de normalização
  - Integração C/C++ com SQLite
  - Conceitos de persistência de dados
- 🔗 **Materiais**:
  - [SQLite Tutorial](https://www.sqlitetutorial.net/)
  - [SQLite C/C++ Tutorial](https://zetcode.com/db/sqlitec/)
- 💻 **Mini-projeto**:
  - Criar uma aplicação C++ que gerencia um banco de dados SQLite
  - Sistema de cadastro de usuários com operações CRUD

---

## 🏁 FASE 6 – DevOps, Web, Segurança e Observabilidade
**🎯 Objetivo**: Aprender conceitos essenciais para os projetos finais e para o mercado de trabalho.  
**⏱️ Duração**: 5-6 semanas

### 6.1 – Docker e Containers
- 📚 **Estudar**:
  - Conceitos de containers e virtualização
  - Docker básico: Dockerfile, docker build, docker run
  - Docker Compose para orquestração de múltiplos containers
- 🔗 **Materiais**:
  - [Play with Docker](https://labs.play-with-docker.com/) (Grátis)
- 💻 **Mini-projeto**:
  - Dockerizar a aplicação C++ criada na Fase 5, criando um ambiente de compilação e execução consistente
  - **Projeto 42**: **inception**

### 6.2 – Web Essentials
- 📚 **Estudar**:
  - Protocolo HTTP (verbos, status codes), APIs REST
  - HTML, CSS, JavaScript básicos para construir um frontend simples
  - Backend: Conceitos de Node.js/NestJS
- 🔗 **Materiais**:
  - [Mozilla Developer Network (MDN)](https://developer.mozilla.org/)
- 💻 **Mini-projeto**:
  - Criar um servidor web simples com Node.js que responde a requisições GET e POST
  - **Projeto 42**: **webserv**

### 6.3 – Segurança da Informação
- 📚 **Estudar**:
  - Criptografia: Hashes (para senhas), Criptografia Simétrica (AES) e Assimétrica (RSA)
  - Práticas seguras de programação: Prevenção de SQL Injection e Buffer Overflow
- 🔗 **Materiais**:
  - [Crypto101](https://www.crypto101.io/) (PDF)
- 💻 **Mini-projeto**:
  - Implementar um sistema de login simples em qualquer linguagem, garantindo que as senhas sejam armazenadas usando um hash seguro (ex: Argon2, bcrypt)

### 6.4 – **NOVO**: Observabilidade
- 📚 **Estudar**:
  - Logging estruturado
  - Métricas básicas (CPU, memória, throughput)
  - Monitoramento de aplicações
- 💻 **Mini-projeto**:
  - Implementar logging estruturado em uma aplicação C/C++
  - Criar dashboards básicos de monitoramento

### 6.5 – **NOVO**: Testes de Integração e CI/CD
- 📚 **Estudar**:
  - Testes de integração além dos unitários
  - Automação de testes com GitHub Actions
  - Conceitos básicos de CI/CD
- 💻 **Mini-projeto**:
  - Configurar pipeline de CI/CD para um dos projetos anteriores
  - Automação de testes e deployment

---

## 🎯 PROJETO FINAL INTEGRADOR
**⏱️ Duração**: 2-3 semanas adicionais

### Aplicação Web Full-Stack
- **Backend**: Servidor web em C++ com:
  - API REST
  - Banco de dados SQLite
  - Sistema de autenticação seguro
  - Logging estruturado
- **Frontend**: Interface web simples
- **DevOps**: 
  - Containerização com Docker
  - CI/CD pipeline
  - Monitoramento básico
- **Equivale ao projeto 42**: **ft_transcendence**

---

## 📚 RECURSOS ESSENCIAIS COMPLEMENTARES

### Livros Fundamentais
- **"Clean Code"** - Robert Martin
- **"The Pragmatic Programmer"** - Hunt & Thomas
- **"Computer Systems: A Programmer's Perspective"** - Bryant & O'Hallaron
- **"The C Programming Language"** - Kernighan & Ritchie
- **"Introduction to Algorithms"** - CLRS

### Plataformas de Prática
- **[LeetCode](https://leetcode.com/)** (algoritmos e estruturas de dados)
- **[HackerRank](https://www.hackerrank.com/)** (programação competitiva)
- **[Codewars](https://www.codewars.com/)** (prática geral)
- **[Project Euler](https://projecteuler.net/)** (matemática + programação)

### Sites e Documentações
- **[GeeksforGeeks](https://www.geeksforgeeks.org/)** (algoritmos e conceitos)
- **[cppreference.com](https://cppreference.com/)** (referência C/C++)
- **[Stack Overflow](https://stackoverflow.com/)** (resolução de problemas)

---

## 📊 CRONOGRAMA DETALHADO

| Fase | Semanas | Foco Principal | Projetos 42 Equivalentes |
|------|---------|----------------|---------------------------|
| **0** | 3-4 | Fundamentos | libft (básico) |
| **1** | 4-5 | C Avançado | libft (completo) |
| **2** | 6-8 | Estruturas + Unix | minishell |
| **3** | 4-5 | Gráficos + Matemática | so_long, FdF, cub3d |
| **4** | 5-6 | Redes + Concorrência | philosophers, ft_irc |
| **5** | 4-5 | C++ + OOP + BD | CPP Modules |
| **6** | 5-6 | DevOps + Web | webserv, inception |
| **Final** | 2-3 | Projeto Integrador | ft_transcendence |

**Total**: ~8-10 meses de estudo consistente

---

## ✅ COBERTURA DO CURRÍCULO 42

### Projetos Cobertos Diretamente:
- ✅ **libft** (Fases 0-1)
- ✅ **minishell** (Fase 2.3)
- ✅ **so_long** (Fase 3.1)
- ✅ **FdF** (Fase 3.2)
- ✅ **cub3d** (Fase 3.3)
- ✅ **philosophers** (Fase 4.2)
- ✅ **ft_irc** (Fase 4.1)
- ✅ **CPP Modules** (Fase 5)
- ✅ **webserv** (Fase 6.2)
- ✅ **inception** (Fase 6.1)
- ✅ **ft_transcendence** (Projeto Final)

### Habilidades Adicionais (Além da 42):
- ✨ Testes unitários e TDD
- ✨ Profiling e otimização
- ✨ Banco de dados
- ✨ Segurança da informação
- ✨ Observabilidade e monitoramento
- ✨ CI/CD e DevOps moderno

---

## 🏆 CERTIFICADOS E VALIDAÇÕES

### Durante o Percurso:
- Portfólio no GitHub com todos os projetos
- Documentação técnica de cada projeto
- Artigos/posts sobre aprendizados
- Contribuições para projetos open source

### Ao Final:
- **Diploma da 42** (se aplicável)
- **Portfólio completo** demonstrando competências
- **Conhecimento equivalente** a um desenvolvedor junior/pleno
- **Preparação completa** para entrevistas técnicas

---

## 🎯 PRÓXIMOS PASSOS

1. **Comece pela Fase 0** - não pule etapas
2. **Dedique 2-3 horas diárias** consistentes
3. **Documente tudo** no GitHub
4. **Pratique regularmente** nas plataformas sugeridas
5. **Participe da comunidade** (Discord 42, Stack Overflow, Reddit)
6. **Revise constantemente** - não apenas avance, consolide

**Lembre-se**: A consistência vale mais que a intensidade. Melhor 2 horas por dia todos os dias do que 14 horas só no fim de semana!

---

*Boa sorte na sua jornada! 🚀*
