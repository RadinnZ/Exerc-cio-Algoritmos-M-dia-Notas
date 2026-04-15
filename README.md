# Cadastro de Alunos

Programa em C++ que cadastra até 5 alunos com suas notas, calcula a média de cada um e exibe uma tabela com a situação de cada aluno.

---

## Como compilar e rodar

```bash
g++ alunos.cpp -o alunos
./alunos
```

---

## Como usar

1. O programa pergunta quantos alunos serão cadastrados (máximo 5)
2. Para cada aluno, digite o nome e as 3 notas separadas por espaço
3. Ao final, o programa exibe a tabela com todos os dados e informa quem teve a maior média

**Exemplo de entrada:**
```
Quantos alunos? (max 5): 2

Digite o nome do aluno 1: João
Digite as 3 notas de João: 7.5 6.0 8.0

Digite o nome do aluno 2: Maria
Digite as 3 notas de Maria: 5.0 6.0 5.5
```

**Exemplo de saída:**
```
ALUNO           N1    N2    N3   MEDIA    SITUACAO
João           7.5   6.0   8.0     7.2    Aprovado
Maria          5.0   6.0   5.5     5.5   Reprovado

Aluno com maior media: João (7.2)
```

---

## Como o código funciona

### Vetores
Os dados dos alunos são guardados em três vetores:
- `nomes[5]` — armazena o nome de cada aluno
- `notas[5][3]` — armazena as 3 notas de cada aluno
- `medias[5]` — armazena a média calculada de cada aluno

### Função calcularMedia
Recebe as 3 notas e retorna a soma dividida por 3. É chamada uma vez para cada aluno durante o cadastro.

### Primeiro while — cadastro
Percorre de 0 até a quantidade de alunos. A cada volta pede o nome e as notas, chama a função de média e salva tudo nos vetores.

### Segundo while — tabela
Percorre os alunos novamente. Para cada um, decide a situação com `if/else` (média >= 7 é Aprovado, senão Reprovado) e imprime a linha na tela.

### Terceiro while — maior média
Começa assumindo que o aluno 0 tem a maior média. Compara com os demais e atualiza o índice sempre que encontrar uma média maior. No final exibe o nome do vencedor.

---

## Requisitos

- Compilador C++ (g++)
