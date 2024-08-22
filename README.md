# Desafio-cartas-super-trunfo-WFrauches89

O **Super Trunfo** é um jogo onde os jogadores comparam as propriedades de suas cartas para determinar quem tem a mais forte. Cada carta representa uma cidade de um país dividido em estados.

## Estrutura das Cartas

Cada país é dividido em oito estados, identificados pelas letras de **A a H**. Cada estado tem quatro cidades, numeradas de **01 a 04**. A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, **A01**, **A02**, **B01**, **B02**).

Cada carta de cidade contém as seguintes informações:

- **Estado:** Letra do estado (A-H)
- **Código da Carta:** Identificador único da carta (ex: **A01**)
- **Nome da Cidade:** Nome da cidade
- **População:** Número de habitantes
- **Área:** Área total da cidade em quilômetros quadrados (km²)
- **PIB:** Produto Interno Bruto da cidade
- **Número de Pontos Turísticos:** Quantidade de pontos turísticos famosos

## Cadastro das Cartas

O sistema permite ao usuário cadastrar as cartas de cidades com as seguintes informações:

- **Estado (char)**
- **Código da Carta (char[])**
- **Nome da Cidade (char[])**
- **População (int)**
- **Área em km² (float)**
- **PIB (float)**
- **Número de Pontos Turísticos (int)**

### Exemplo de Dados Cadastrados

Após o cadastro de uma cidade, o sistema exibirá os dados da seguinte forma:
```c
  1  Estado: A
  2  Código da Carta: A01
  3  Nome da Cidade: São Paulo
  4  População: 12325000
  5  Área: 1521.11 km²
  6  PIB: 699.28 bilhões de reais
  7  Número de Pontos Turísticos: 50
```
## Requisitos Funcionais

- Operação via terminal ou prompt de comando.
- Cadastro interativo das cartas de cidades.
- Código único para cada carta, composto pela letra do estado e um número de 01 a 04.
- Exibição clara e organizada dos dados cadastrados.

## Requisitos Não Funcionais

- **Usabilidade:** Interface de linha de comando simples e intuitiva.
- **Performance:** Operações rápidas e sem atrasos perceptíveis.
- **Documentação:** Código bem documentado com comentários e instruções claras.
- **Manutenabilidade:** Código claro com nomes de variáveis que facilitam a compreensão e manutenção.

## Código Fonte

O código fonte do sistema está disponível no arquivo `.c`. Para informações detalhadas sobre o código, veja o arquivo `Super_trunfo.c`.
