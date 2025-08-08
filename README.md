# TrincaVolts
uma ferramenta que visa manter a paz e proporcionar a justiça pelas mãos dos mais fracos.
# TrincaVolts 3.0 ⚡️

Projeto de pulso eletromagnético com 3 baterias de 9V em série, LEDs indicadores e sistema de refrigeração ativo.

---

## Componentes

- 3 baterias de 9V (27V total em série)
- Transistor MOSFET IRFZ44N (ou similar)
- LEDs vermelho, verde e azul (com resistores de 220Ω)
- Dissipador de calor
- Mini cooler 12V
- Arduino (para controle)
- Botão disparador
- Fios, protoboard ou placa de circuito impresso

---

## Esquema elétrico

<!-- Substitua pelo caminho da imagem do esquema -->

![Esquema elétrico](./esquemas/esquema_eletrico.png)

---

## Código Arduino

O código para controle do disparo e LEDs está na pasta `codigo/controle_arduino.ino`

---

## Ficha Técnica

Confira no arquivo `docs/ficha_tecnica.md`.

---

## Como usar

1. Monte o circuito conforme o esquema elétrico.
2. Faça upload do código Arduino.
3. Aperte o botão para ativar o pulso e ligar o cooler.
4. O sistema desliga automaticamente após 3 segundos.

---
