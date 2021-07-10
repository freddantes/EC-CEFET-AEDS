# EC-CEFET-AEDS I

<h2>RELATÓRIO DO PROBLEMA 11 DA LISTA DE AEDS I - Frederico Dantés</h2>

<ul><b>PROBLEMA:</b></ul> O problema consiste em elaborar um código estruturado, para simular as permutas de dados entre o disco e a memória de um computador, uma espécie de sistema operacional.
<p>
<ul><b>DESAFIOS:</b></ul> Estruturar as funções desses processos de forma a atingir o objetivo solicitado, de forma correta e de maneira organizada. Os processos de permuta das informações. Existem limitações, como no caso da limitação de até 5 arquivos gravados na memória por procedimento, o excedente a isto deverá ser gravado após a retirada dos arquivos mais antigos, para tal será utilizada a técnica da Swap.
<p>
<ul><b>PROCEDIMENTOS:</b></ul> Para atingir os objetivos descritos no problema, serão necessários alguns que alguns procedimentos sejam implantados com o código, serão eles:
<p>
<p>
<b>Inicia Disco -></b> Cria a matriz do disco, ou seja, inicia uma matriz "zerada" de forma a ser preenchida com os dados dos arquivos que serão lidos pelo programa.
<p>
<p>
<b>Carrega Disco -></b> Faz a leitura do documentos de texto que contém os arquivos e após ess leitura, ele preenche a matriz de disco, para tal ele utiliza, cada "célula" da matriz para um arquivo distinto. Essa "quebra" da linha dos arquivos será feita pela tokenização a partir do separador ','.
<p>
<p>
<b>Push / Pop -></b> Como a estrutura linear a ser adotada para o Disco, neste caso, será a pilha, utilizaremos dos procedimentos Push e Pop, utilizados nesse tipo de estrutura, que nada mais será do que o aumento(push) ou diminuição(pop) da pilha.
<p>
<p>
<b>Inicia Memoria -></b> Utiliza da mesma lógica do Inicia Disco, porém neste caso com a Memória. Um ponto diferente é que existe um limite de arquivos a serem gravados na memória, se restringindo a cinco arquivos no máximo. Com isso, os processos que possuírem arquivos excedentes a essa limitação, deverá substituir os arquivos mais antigos desse processo para a inserção desses excedentes. Para realizar isso, será utilizada uma matriz auxiliar(swap) que será explicada junto aos demais procedimentos referentes.
<p>
<p>
<b>Enfileira -></b> A memória será feita utilizando-se da estrutura linear FILA, isso se dará devido ao fato de ser uma estrutura de operação ágil e facilitará a inserção dos dados. Com isso o procedimento descrito, tem a função de inserir os arquivos na fila. Como existe a possibilidade de os dados excederem os 5 campos, nesses casos, deve-se retirar o elemento mais antigo para a inserção do novo.
<p>
<p>
<b>Desenfileira -></b> Seguindo a mesma lógica do procedimento anterior, porém neste caso ao invés de inserir, ele serve para retirar os dados da fila.
<p>
<p>
<b>Inicia Swap -></b> Conforme as outras inicialização, este procedimento tem o objetivo de criar a matriz auxiliar SWAP, que irá servir para "guardar" os dados que excederem o limite de 5 campos da memória. Com isso, o programa não precisará de dividir novamente os arquivos para preencher a memória, ele irá reservar os dados excedentes.
<p>
<p>
<b>Solicita Swap -></b> O procedimento tem o objetivo de verificar se o limite de 5 campos de arquivo será excedida no processo para preenchimento na memória. Caso este limite seja excedido ele irá controlar em quanto foi excedido, de forma a inserir na memória após a retirada desse número de campos que foram excedidos.
<p>
<p>
<b>Swap Memoria -></b> O procedimento que complementa o SWAP, pois é neste ponto em que os campos "reservados" na matriz swap irão finalmente serem gravados na memória, após a retirada da quantidade necessária de arquivos mais antigos.
<p>
<p>
<b>Token -></b> A tokenização será realizda de forma a partir os arquivos que estarão inscritos nos documentos de texto, de forma a serem separados pela ',' e com isso serão utilizados para o preenchimento do Disco e da Memória.
<p>
<ul><b>ESQUEMA GRÁFICO DOS PROCESSOS:</b></ul>
<p>
<p>
<b>Inicia Disco:</b>
<p>
<img src="https://user-images.githubusercontent.com/85570101/125145230-e09e9d00-e0f6-11eb-9169-686de9c1bbaa.png">
<p>
<b>Carrega Disco:</b>
<p>
<img src="https://user-images.githubusercontent.com/85570101/125145169-b6e57600-e0f6-11eb-9e0c-e879c81e61a0.png">
<p>
<b>PUSH / POP:</b>
<p>
<img src="https://user-images.githubusercontent.com/85570101/125145386-59055e00-e0f7-11eb-89ad-fab662e0d3c5.png">
<p>
<b>Inicia Memoria:</b> 
<p>
<img src="https://user-images.githubusercontent.com/85570101/125145512-e052d180-e0f7-11eb-9d10-6764d73fde19.png">
<p>
<b>Enfileira:</b> 
<p>
<img src="https://user-images.githubusercontent.com/85570101/125145604-3889d380-e0f8-11eb-9394-3bf254c01487.png">
<p>
<b>Desenfileira:</b> 
<p>
<img src="https://user-images.githubusercontent.com/85570101/125145620-50615780-e0f8-11eb-8826-79c0b1d041cc.png">
<p>
<b>Inicia Swap:</b> 
<p>
<img src="https://user-images.githubusercontent.com/85570101/125145644-6bcc6280-e0f8-11eb-91ba-a375b8fc8914.png">
<p>
<b>Solicita Swap:</b> 
<p>
<img src="https://user-images.githubusercontent.com/85570101/125145738-e9906e00-e0f8-11eb-9323-2d01b038da2a.png">
<p>
<b>Swap Memoria:</b>
<p>
<img src="https://user-images.githubusercontent.com/85570101/125145848-6cb1c400-e0f9-11eb-8e53-da44708699ab.png">
<p>
<b>Token:</b>
<p>
<img src="https://user-images.githubusercontent.com/85570101/125145957-024d5380-e0fa-11eb-8cda-6689c9070f31.png">
<p>
<ul><b>FLUXO DO PROCESSO:</b></ul>
<p>
<p>
<img src="https://user-images.githubusercontent.com/85570101/125147663-22354500-e103-11eb-8a63-55a05f893bf4.png">
<p>
<b>ETAPAS:</b>
<p>
1- O Disco é inicializado.<br>
2- O documento de texto com os arquivos é lido e tokenizado.<br>
3- A matriz de Disco e preenchida com os tokens dos arquivos.<br>
4- O documento de texto com os processos é lido e tokenizado.<br>
5- A Memória é iniciada e vai ser preenchida com os tokens dos arquivos conforme descrito nos processos.<br>
6- Caso exista algum excedente ao limite de 5 arquivos nos processos, será iniciada e Swap e esses excedentes serão reservados lá.<br>
7- As primeiras entradas de arquivo na memória serão devolvidas ao Disco. Esse número será o mesmo dos excedentes.<br>
8- Com o espaço liberado, os excedentes que estavam na Swap serão passadas à Memória.<br>
9- Caso o arquivo necessário para um processo já esteja na Memória, o processo irá buscar diretamente de lá, como acesso válido. Entretanto, se o arquivo não tiver carregado na Memória, ele irá acessr o Disco para carregar este arquivo na Memória, esse processo determina um <i>page miss</i>, que é um indicador de ineficácia.
<p>
<ul><b>OPORTUNIDADE DE MELHORIA:</b></ul>
<p>
Conforme dito, a quantidade de <i>page miss</i> de um programa está diretamente relacionada à eficácia do mesmo, afinal, toda vez que o sistema pede para acessar um arquivo e o mesmo não se encontra na Memória, ele deve buscar no Disco e isso gera um aumento excessivo de operações do sistema, tornando-se prejudicial.Sendo assim, é extremamente interessante buscar formas que acarretem na diminuição desse índice.
<p>
Existem formas que podem ser adotadas de maneira que façam com que nas vezes em que o sistema precisa de determinado arquivo, a chance de ele estar presente em Memória seja maior e com isso não ocorra uma grande quantidade de <i>page miss</i>. Uma ideia para que isso ocorra é criar um índice de chamadas de cada arquivo pelo sistema, com isso é possível criar uma classificação de recorrência desses arquivos e ao precisar devolver algum deles para a memória, optar por algum que tenha menos chamadas pois assim a possibilidade de manter um que será chamado novamente aumenta.
<p>
Outra possibilidade seria ao ler os processos, identificar se existem arquivos duplicados em algum processo e, caso exista, mapeá-lo para que ele não seja a opção a ser devolvida ao Disco em caso de necessidade devido a arquivos excedentes ao espaço da Memória. Conforme dito anteriormente, existem diversas possibilidades, seja criando algum controle ou alterando a estruturação dos procedimentos. O importante é sempre buscar o aprimoramento do código de forma a torná-lo melhor estruturado e organizado, melhorando o seu desempenho.
<p>
<ul><b>CONCLUSÃO:</b></ul>
<p>
Entender a dinâmica de como funciona um sistema operacional é de extrema importância, considerar a relação de coexistência entre a Memória e o Disco e a troca de informações entre essas estruturas faz com que compreendamos quais possíveis gargalos possam existir, assim como é possível vislumbrar quais melhorias seriam possíveis. Isto é, considerando essa proposta em específico que, apesar de ser bem menos complexa do que um sistema operacional convencional, nos traz a idéia de como é o processo.
<p>
Interessante também perceber o quanto instruções simples, quando combinadas, podem resultar em procedimentos elaborados com as mais diversas funções e que podemos adequar para atividades específicas, mostrando a versatilidade dos algoritmos e estruturas de dados.
