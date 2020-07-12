# Casa Automatizada Orientação a Objetos

Nós podemos usar Orientação a Objetos no arduino, mas será que é uma boa forma de se programar?!

Na faculdade eu cursei uma matéria chamada “Microprocessadores e Microcontroladores”, para os íntimos MM. Nesta disciplina estudamos como funciona o hardware por trás de microprocessadores e microcontroladores, conceitos como arquitetura, memória, etc . Depois disso, nós estudamos sobre alguns conceitos específicos da programação de microcontroladores.

Um dos principais pontos que o professor fez questão de repetir inúmeras vezes, é a questão da memória. Microcontroladores possuem pouca memória e por isso nossos códigos devem ser sempre o mais enxuto possível. Outro ponto que ajudaria na gestão da memória é a utilização de variáveis locais sempre que possível fugindo do uso de variáveis globais.
Em uma das aulas, perguntei ao professor sobre o uso de orientação a objetos e sua resposta foi direta: “não tem porquê usar”. Na sua fala ele citou inúmeros motivos para a não utilização de orientação a objetos em projetos microcontrolados.

Eu tendo a concordar com ele. Na minha pouca experiência sobre esses sistemas, o uso de memória sempre foi um problema considerável. Quando eu comecei a programar microcontrolados, foi usando o PIC. Quem é um pouco mais velho deve se lembrar dele, era bem menos amigável que o arduino e um pouco mais complexo de se programar.
Ao programar sistemas usando PIC ou similares, deveremos nos atentar para o uso de memória e então, a orientação a objetos será uma enorme furada. A boa notícia é que estamos falando de arduino.

Dentro deste lindo universo do arduino, podemos usar orientação a objetos quase que indiscriminadamente. Raramente nossos projetos são grandes o bastante para que se exceda a memória da nossa placa, se isso acontecer, você provavelmente terá que remodelá-lo procurando economizar o uso de memória. Mas qual é a vantagem de se usar Orientação a objetos?! A principal, na minha opinião, é a reutilização de código. Se você possui várias lâmpadas, que funcionam do mesmo modo ou de modos similares, e você utiliza o conceito de objetos, você economizará e muito o número de linhas de código.

