# ![WebApp](https://github.com/ezaul/MV-ELA-MEA/blob/main/images/marque.jpg)
# MV-ELA-MEA
<table>
<tr>
<td>
 Disponibilizei este Codigo em Arduino para quem tem uma NEO-GEO 2 4 e 6 Slot. Com a Falta da MV-ELA originais fui obrigado achar uma solução para fazer meu Gabinete NEO-GEO MV4 estudando o esquema eletrico dela consegui entender e ver que era possivel fazer com um Arduino e dei o nome para MV-ELA-Arduino "MEA"
</td>
</tr>
</table>

### MV-ELA Original
Aqui segue a Foto 

![](https://github.com/ezaul/MV-ELA-MEA/blob/main/images/Mv-ela_top.jpg)

MV-ELA era placa externa fornecida com cabines MVS multi-slot originais para gerar alta tensão e comutá-la para a(s) placa(s) MV-ELC ou MV-ELD da marquise.
Quanto voce seleciona o jogo ele ilumina o MVS Mini-Marquee que esta o slot do jogo.

Com a falta dessa placa no mercado e as que achava todas destruidas resolvi dar uma estudada no esquema eletrico e ver seu funcionamento.
resolvi tentar emular estas funções no Arduino.

### Hardware Compativeis

Hardware MVS:

MV2
MV2-01
MV2B
MV2F
MV2FS
MV4 (SLOT4)
MV4F (SLOT4F)
MV4FS (SLOT4FS)
MV4FT (SLOT4FT)
MV4FT2 (SLOT4FT)
MV4FT3 (SLOT4FT)
MV6 (SLOT6)

### Este é um guia rápido de como isso funciona.

Estou utilizando em uma placa MV4 que tem uma porta MV-ELA de 8 pinos.
Isso envia os dados para alternar o MVS Mini-Marquee usando sinais binários.

### Arduino Pro Micro ATmega32U4 5V

Esquema da Placa Arduino
![](https://github.com/ezaul/MV-ELA-MEA/blob/main/images/Arduino-Leonardo.jpeg)
![](https://github.com/ezaul/MV-ELA-MEA/blob/main/images/mv-ela-mea-01.jpg)

###Pinos que sera usados
![](https://github.com/ezaul/MV-ELA-MEA/blob/main/images/mv-ela-mea-02.jpg)
![](https://github.com/ezaul/MV-ELA-MEA/blob/main/images/mv-ela-mea-03.jpg)

Utilizei um arduino para ler a porta, você precisara usar o resistor INPUT_PULLUP interno e conectar cada porta a uma entrada digital.

### Cabos e Conexões

Cabos
![](https://github.com/ezaul/MV-ELA-MEA/blob/main/images/mv-ela-mea-04.jpg)
Conexões
![](https://github.com/ezaul/MV-ELA-MEA/blob/main/images/mv-ela-mea-05.jpg)

### Conectar NEO-GEO MV

Conector MV
![](https://github.com/ezaul/MV-ELA-MEA/blob/main/images/mv-ela-mea-06.jpg)
Conector Arduino
![](https://github.com/ezaul/MV-ELA-MEA/blob/main/images/mv-ela-mea-07.jpg)


### Pinos

- Vermelho = 5v

- Marrom = Relógio. Quando o MVS Mini-Marquee é alterado, ele aumenta e neste ponto você lê os 3 bits que dizem qual MVS Mini-Marquee está aceso.

- Laranja = Bit 0

- Amarelo = Bit 1

- Verde = Bit 2

Portanto, se nenhum bit for definido, o MVS Mini-Marquee 1 deverá estar aceso.


### Fita de LED

![](https://github.com/ezaul/MV-ELA-MEA/blob/main/images/mv-ela-mea-fitaled.jpg)

Optei por utilizar uma fita de LED ws2812b que trabalha em 5v, neste modelo de fita LED. Cade LED possui um chip que voce pode programar para ligar, desligar e mudar as cores com uma
simples linha de dados que passa por cada led. Então fiz 4 tiras de 11 Leds em cada caixa para isso basta ligar:
0-11  = Letreiro 1 
11-22 = Letreiro 2
22-33 = Letreiro 3
33-44 = Letreiro 4

### Video do Resultado

![] (https://youtube.com/shorts/21-4Xfw-TaY?si=VGcggTetiOS5xVmh)

## [License](https://github.com/ezaul/MV-ELA-MEA/images/LICENSE.md)

[Ezaul Zillmer](https://github.com/ezaul)

