
<h1 align="center">📚 Libft - 42 Lisboa</h1>

<p align="center">
  <img src="https://img.shields.io/badge/status-finished-success?style=for-the-badge&logo=42&logoColor=white" />
</p>

---

## 📘 Sobre o projeto

A **Libft** é a primeira biblioteca criada na 42 Lisboa, composta por funções básicas da linguagem C que replicam comportamentos da biblioteca padrão, além de funcionalidades extras. Este projeto tem como objetivo entender a construção de bibliotecas e aprofundar o conhecimento em ponteiros, alocação de memória e manipulação de strings.

---

## 🧠 Organização da Libft

A biblioteca está dividida em três blocos principais:

- ✅ Funções obrigatórias da `<string.h>` e `<ctype.h>`;
- ➕ Funções adicionais utilitárias;
- 🔁 Funções bônus para manipulação de listas encadeadas.

Todas foram implementadas de acordo com a **Norminette** da 42.

---

## 🧪 Resultados dos testes

### 📦 Funções obrigatórias, adicionais e bônus:

| Funções | Resultados dos testes |
|--------|------------------------|
| `libft.a` | ![Testes Mandatory](./assets/mandatory_tests.png) |
| `lst_*.c` | ![Testes Bonus](./assets/bonus_tests.png) |

---

## 📂 Estrutura do projeto

```bash
libft/
├── include/
│   └── libft.h
├── src/
│   ├── *.c
├── bonus/
│   ├── *.c
├── Makefile
└── README.md
```

---

## ⚙️ Como compilar

```bash
make        # Compila a libft.a
make clean  # Remove os .o
make fclean # Remove os .o e a libft.a
make re     # clean + all
```

---

## 🧪 Como testar

### Manualmente:

1. Compile com o comando `make`.
2. Crie um arquivo `main.c` com chamadas de teste.
3. Compile: `gcc -Wall -Wextra -Werror main.c -L. -lft`
4. Execute: `./a.out`

### Automaticamente:

Use testadores externos como:

- [libft-tester](https://github.com/Tripouille/libftTester)
- [libft-warmachine](https://github.com/0x050f/libft-war-machine)
- [Francinette](https://github.com/FranFrau/Supreme-Tester-Libft)

---

## 📜 Licença

Este projeto está sob a licença MIT.

---

## 👤 Autor

**Lucas C. M. Lima**  
📍 Lisboa, Portugal | Disponível para EU  
📫 lucascml.dev@outlook.com  
🔗 [Perfil GitHub](https://github.com/Lucascml)

---

> *“Code is like humor. When you have to explain it, it’s bad.” – Cory House*
