# TrincaVolts 2.0⚡️


![Status](https://img.shields.io/badge/Status-Experimental-yellow?style=for-the-badge&logo=zapier)
![Bateria](https://img.shields.io/badge/Bateria-27V-red?style=for-the-badge&logo=batman)
![Controle](https://img.shields.io/badge/Controle-Arduino-blue?style=for-the-badge&logo=arduino)
![LEDs](https://img.shields.io/badge/LEDs-RGB-green?style=for-the-badge&logo=visual-studio-code)
![Pulso](https://img.shields.io/badge/Pulso-3s-orange?style=for-the-badge&logo=power)
![Refrigeração](https://img.shields.io/badge/Cooler-Ativo-lightblue?style=for-the-badge&logo=cooling)
![MOSFET](https://img.shields.io/badge/MOSFET-IRFZ44N-darkblue?style=for-the-badge&logo=electronics)

Descrição:
O TrincaVolts 2.0 é um dispositivo de pulso eletromagnético portátil que visa desligar eletrônicos próximos de forma controlada, proporcionando uma ferramenta de defesa e justiça tecnológica para quem não possui acesso a recursos avançados. Projetado para ser compacto, seguro e eficiente, o sistema conta com 3 baterias de 9V em série, indicadores visuais e refrigeração ativa.

> Aviso de segurança: Este dispositivo é experimental e deve ser usado apenas para fins educativos ou em testes controlados. Nunca utilize em equipamentos que contenham dados sensíveis ou sistemas críticos.




---

Trambolhos 👨🏻‍🏭🛢

Tensão: 27V DC (3x 9V em série)

Transistor chaveador: MOSFET IRFZ44N (ou equivalente, N-channel, 49A, 55V)

Refrigeração ativa: Mini cooler 12V + dissipador de alumínio

---

Componentes

Bateria 9V	3	Em série (27V total).

MOSFET IRFZ44N	1	Chaveamento de alta corrente.

Arduino UNO/Nano	1	Para controle do disparo e LEDs.

LED vermelho	1	Com resistor 220Ω.

LED verde	1	Com resistor 220Ω.

LED azul	1	Com resistor 220Ω.

Dissipador de alumínio	1	Para MOSFET.

Mini cooler 12V	1	Para resfriamento ativo.

Botão pulsador	1	Para disparo manual.

Fios e cabos	Diversos	Conexões e prototipagem.

Protoboard ou PCI	1	Base para montagem do circuito.


---

Montagem e Uso

1. Montagem do Circuito: Siga o esquema elétrico com atenção. Use protoboard para testes e depois migre para PCI.


2. Upload do Código: Conecte o Arduino via USB e carregue o código.


3. Teste de LEDs: Verifique se os LEDs acendem corretamente.


4. Ativação do Pulso: Pressione o botão para disparar o pulso de 3 segundos. O cooler ligará automaticamente.


5. Resfriamento: Aguarde alguns segundos entre os pulsos para evitar sobreaquecimento do MOSFET.




---

Ninguém é doido ☣

Não use em equipamentos críticos (como computadores com dados importantes, equipamentos médicos ou veículos).

Evite exposição prolongada de baterias e MOSFET a altas correntes sem refrigeração.

---

Manual do Imundo

Arquivo completo disponível em: docs/ficha_tecnica.md

---

🥵 o que ainda falta fazer 

-Adicionar controle remoto via RF ou Bluetooth.

-Implementar modulação do pulso para diferentes intensidades.

-Integrar sensor de proximidade para ativação automática.

-Registrar logs de uso via Arduino para análise de desempenho.

⚠️⚠️⚠️

> **“O TrincaVolts 3.0 é a justiça portátil:**  
> um pulso de energia concentrada, capaz de desligar eletrônicos com precisão.  
> Um projeto para quem sabe que o poder também pode estar nas mãos dos mais fracos.”