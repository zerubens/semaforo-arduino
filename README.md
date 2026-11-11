// Semáforo — versão 2 (carros + pedestres)
const int VERMELHO = 12;
const int AMARELO  = 11;
const int VERDE    = 10;

const int PED_VERMELHO = 9;
const int PED_VERDE    = 8;

void setup() {
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(PED_VERMELHO, OUTPUT);
  pinMode(PED_VERDE, OUTPUT);
}

void loop() {
  // Fase verde: carros seguem, pedestres esperam
  digitalWrite(VERDE, HIGH);
  digitalWrite(PED_VERMELHO, HIGH);
  delay(4000);
  digitalWrite(VERDE, LOW);

  // Fase amarela: carros se preparam para parar
  digitalWrite(AMARELO, HIGH);
  delay(2000);
  digitalWrite(AMARELO, LOW);

  // Fase vermelha: carros param, pedestres atravessam
  digitalWrite(VERMELHO, HIGH);
  digitalWrite(PED_VERMELHO, LOW);
  digitalWrite(PED_VERDE, HIGH);
  delay(5000);
  digitalWrite(PED_VERDE, LOW);
  digitalWrite(VERMELHO, LOW);
}
## Uso na escola
O projeto do semáforo com Arduino é uma maneira simples e interessante de aproximar os alunos nas aulas de Ciência e de Tecnologia. Em vez de apenas ouvir explicações teóricas, eles conseguem observar na prática como os conceitos funcionam. Durante a montagem do circuito, os estudantes percebem que a corrente elétrica precisa de um caminho completo para circular. Eles observam que a energia sai da fonte, passa pelos componentes e retorna ao sistema, permitindo que o LED acenda. Essa experiência ajuda a compreender melhor como funcionam os circuitos elétricos e por que eles precisam estar fechados para operar corretamente.
A atividade também possibilita discutir a função de cada componente. Os alunos podem entender, por exemplo, que o resistor de 220 Ω serve para controlar a quantidade de corrente elétrica que passa pelo LED, evitando que ele seja danificado. Além disso, descobrem que o LED possui polaridade, ou seja, deve ser ligado na posição correta para funcionar. Nesse contexto, o professor pode retomar conceitos importantes, como a diferença entre materiais condutores e isolantes.
Outro aspecto interessante é a relação com o tema energia. Ao observar os LEDs em funcionamento, os estudantes identificam a transformação da energia elétrica em energia luminosa e, em menor quantidade, em energia térmica. Essa observação permite conversar sobre eficiência energética e comparar os LEDs com lâmpadas incandescentes, destacando as vantagens do uso de tecnologias mais econômicas e sustentáveis.
As cores do semáforo também podem ser exploradas em sala de aula. Os alunos podem discutir por que as cores vermelha, amarela e verde foram escolhidas para a sinalização de trânsito e como o cérebro interpreta essas informações no dia a dia. Além disso, o semáforo de pedestres abre espaço para reflexões sobre segurança no trânsito, prevenção de acidentes, respeito às regras e convivência em sociedade, fortalecendo temas relacionados à cidadania.
A programação do semáforo desenvolve ainda o pensamento computacional. Ao definir tempos de funcionamento para cada luz, os estudantes percebem que os dispositivos eletrônicos executam comandos seguindo uma sequência organizada de instruções.
Como proposta prática, o professor pode iniciar a aula perguntando: “Como um semáforo sabe a hora de mudar?”. Em seguida, os alunos podem montar e testar o projeto no Tinkercad, modificar os tempos das luzes, fazer previsões e registrar suas observações. Dessa forma, aprendem investigando, trabalhando em grupo e relacionando conhecimentos científicos com situações reais do cotidiano, tornando a aprendizagem mais significativa, dinâmica e acessível.

<img width="1919" height="884" alt="image" src="https://github.com/user-attachments/assets/fbc133f2-9587-4a27-ad69-653c591754b2" />
