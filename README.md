# Jogo de Apostas com Round Robin
Este repositório trata-se de um jogo simples via terminal que procurar simular o funcionamento do **escalonamento circular (round robin)**. Feito utilizando a linguagem de programaçäo **C++**;

## Contexto do Round Robin
*Round Robin* ou escalonamento circular, é um algoritmo simples que reparte de maneira uniforme o tempo da CPU entre todos os processos prontos para a execução. Esse tempo trata-se do *quantum*. É a versão preemptiva do FIFO, ou seja, iniciou-se x processos, o primeiro a rodar terminou de utilizar o quantum pré-estabelecido mas ainda possui dados que devem ser processados pela CPU, esse processo irá para o final da fila dos processos a serem executados. 
Podemos obter deadlocks no round robin caso seus processos utilizem recursos compartilhados, como arquivos, memórias ou dispositivos.

## Compilação e execução:

### Pré-requisitos

- Sistema operacional Linux;
- Possuir as bibliotecas necessárias para compilação e execução de C/C++.
- Possuir o CMake instalado. Exemplo de instalação no Linux Pop-OS (baseado no ubuntu):
```bash
sudo apt install cmake
```

### Executar esse script para compilar e rodar o projeto

```bash
mkdir build && cd build
cmake ../
make
./game
```
### Para recompilar apenas utilize:

```bash
make
```

### E para executar apenas utilize:

```bash
./game
```
## Explicação e demonstração em vídeo:
### 1. O que é Round Robin:

### 2. Funcionamento do código #1:

### 3. Funcionamento do código #2:

### 4. Demonstração:

## Referências:
- https://www-geeksforgeeks-org.translate.goog/operating-systems/program-for-round-robin-scheduling-for-the-same-arrival-time/?_x_tr_sl=en&_x_tr_tl=pt&_x_tr_hl=pt&_x_tr_pto=tc
- https://stackoverflow.com/questions/5132908/round-robin-scheduling-and-deadlock
- https://deinfo.uepg.br/~alunoso/2016/ROUNDROBIN/