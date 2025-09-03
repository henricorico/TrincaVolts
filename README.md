TrincaVolts 2.0 ⚡️

Descrição:
O TrincaVolts 2.0 é um dispositivo de pulso eletromagnético portátil que visa desligar eletrônicos próximos de forma controlada, proporcionando uma ferramenta de defesa e justiça tecnológica para quem não possui acesso a recursos avançados. Projetado para ser compacto, seguro e eficiente, o sistema conta com 3 baterias de 9V em série, indicadores visuais e refrigeração ativa.

> Aviso de segurança: Este dispositivo é experimental e deve ser usado apenas para fins educativos ou em testes controlados. Nunca utilize em equipamentos que contenham dados sensíveis ou sistemas críticos.




---

Características Técnicas

Tensão de operação: 27V DC (3x 9V em série)

Transistor chaveador: MOSFET IRFZ44N (ou equivalente, N-channel, 49A, 55V)

Controle: Arduino UNO ou Nano

Indicação visual: LEDs RGB (3 cores) com resistores de 220Ω

Refrigeração ativa: Mini cooler 12V + dissipador de alumínio

Tempo de pulso: 3 segundos (configurável via software)

Botão de disparo: Momentâneo, para controle manual do pulso



---

Componentes

Componente	Quantidade	Especificação

Bateria 9V	3	Em série (27V total)
MOSFET IRFZ44N	1	Chaveamento de alta corrente
Arduino UNO/Nano	1	Para controle do disparo e LEDs
LED vermelho	1	Com resistor 220Ω
LED verde	1	Com resistor 220Ω
LED azul	1	Com resistor 220Ω
Dissipador de alumínio	1	Para MOSFET
Mini cooler 12V	1	Para resfriamento ativo
Botão pulsador	1	Para disparo manual
Fios e cabos	Diversos	Conexões e prototipagem
Protoboard ou PCI	1	Base para montagem do circuito



---

Esquema Elétrico

O circuito deve ser montado conforme o diagrama abaixo, que indica a ligação das baterias, MOSFET, LEDs, Arduino e cooler.



> Observação: Certifique-se de respeitar polaridades e conexões de massa comum (GND). O cooler deve ser ligado de forma que resfrie o MOSFET e as baterias durante o pulso.




---

Código Arduino (Controle de Disparo e LEDs)

O Arduino gerencia:

Disparo do pulso pelo MOSFET

Indicadores visuais via LEDs RGB

Ativação do cooler durante o pulso


Código disponível em: codigo/controle_arduino.ino

Sugestão de melhoria: É possível implementar debounce no botão, controle de tempo configurável e desligamento automático de segurança.


---

Montagem e Uso

1. Montagem do Circuito: Siga o esquema elétrico com atenção. Use protoboard para testes e depois migre para PCI.


2. Upload do Código: Conecte o Arduino via USB e carregue o código.


3. Teste de LEDs: Verifique se os LEDs acendem corretamente.


4. Ativação do Pulso: Pressione o botão para disparar o pulso de 3 segundos. O cooler ligará automaticamente.


5. Resfriamento: Aguarde alguns segundos entre os pulsos para evitar sobreaquecimento do MOSFET.




---

Segurança e Recomendações

Não use em equipamentos críticos (como computadores com dados importantes, equipamentos médicos ou veículos).

Evite exposição prolongada de baterias e MOSFET a altas correntes sem refrigeração.

Use proteção ocular e luvas durante testes.

Nunca conecte a baterias de forma incorreta, pois isso pode danificar o circuito ou provocar acidentes.



---

Ficha Técnica

Arquivo completo disponível em: docs/ficha_tecnica.md

Inclui:

Diagramas detalhados

Valores de resistores e tensões de operação

Curvas de corrente do MOSFET

Recomendações de montagem e manutenção



---

Sugestões de Evolução (Opcional)

Adicionar controle remoto via RF ou Bluetooth.

Implementar modulação do pulso para diferentes intensidades.

Integrar sensor de proximidade para ativação automática.

Registrar logs de uso via Arduino para análise de desempenho.