# Veekos
<img width="1349" height="733" alt="Veekos-full" src="https://github.com/user-attachments/assets/2ee6ad90-e796-4062-84fd-7146f31d5694" />

Veekos is a 21-key wireless Bluetooth Macropad that uses the XIAO nRF52840 Sense as its microcontroller chip. Each key has its own diode assigned; the diodes are 1N4148.<br>

<h3>About the project</h3>
It has 21 keys, and its connectivity is through Bluetooth. <br>
In the design, you may see that there is no sign of the battery. This is because the Xiao already has an SMD space for connecting the battery, so I do not need to connect it to any pins.  <br>
<img width="204" height="247" alt="image" src="https://github.com/user-attachments/assets/ce927787-53b5-4477-a590-a6322dbc9823" /> <br>

<h3>Why I made this</h3>
I have made many small macro pads consisting of 4-6keys, but this time, I wanted to go big with 21 keys. Also, this one is going to be connected via Bluetooth, giving me a huge relief from wired macro pads. 

<h3>Challenges faced</h3>
Although there were no major problems or challenges, while making its case, I had to change the measurement of the top part twice to make it match the bottom part. <br>
Also, I had to put the 3d model for each key manually in the KiCad PCB editor, along with removing the silkscreen of each key. This was a tedious task, but I did it :)

<h2>Schematic</h2>
<img width="972" height="643" alt="Screenshot 2026-09-17 at 8 14 47 PM" src="https://github.com/user-attachments/assets/cfaba6fe-e61e-41fd-92b6-f76d6da0ee3c" />

<h2>PCB(without silkscreen art)</h2>
<img width="498" height="644" alt="Screenshot 2026-09-17 at 8 15 34 PM" src="https://github.com/user-attachments/assets/5bfd3440-b4f3-4393-9fd2-76bfbbfffb9c" />

<h2>PCB(with silkscreen art)</h2>
<img width="495" height="657" alt="Screenshot 2026-09-17 at 8 16 14 PM" src="https://github.com/user-attachments/assets/ddb94927-ee29-4088-af21-37d9731d1b8d" />

<h2>PCB(3D view)</h2>
<img width="481" height="586" alt="Screenshot 2026-09-17 at 8 18 13 PM" src="https://github.com/user-attachments/assets/325a7264-4567-4a9a-83db-ace7aa0de986" />

<h2>BOM</h2>
| Name                   |   Quantity | Cost             | Link                                                                                                         |
|:-----------------------|-----------:|:-----------------|:-------------------------------------------------------------------------------------------------------------|
| XIAO nrf52840 sense    |          1 | $24.05           | https://robu.in/product/seeed-studio-xiao-nrf52840-sense-tinyml-tensorflow-lite-imu-microphone-bluetooth5-0/ |
| PCB (from JLCPCB)      |          1 | $20.45           | https://jlcpcb.com/                                                                                          |
| 1N4148 Diodes          |         21 | $2 (Self-funded) | https://amzn.in/d/07wEWb6X                                                                                   |
| 3.7v LiPo Battery      |          1 | $3.06            | https://amzn.in/d/050THvbC                                                                                   |
| TP4056 Charger Module  |          1 | $1.20            | https://amzn.in/d/01OvmiZk                                                                                   |
| DSA Keycaps gradient   |          1 | $6.40            | https://curiositycaps.in/products/21-keys-numpad-thick-pbt-cherry-pbt-keycaps                                |
| Cherry MX Keys         |         21 | $6.30            | https://stackskb.com/store/click-inc-of-linear-switch-pack-of-10/                                            |
| Stainless steel screws |          4 | 2 (Self-funded)  | https://stackskb.com/store/m2-screw-8mm-stainless-steel/                                                     |
| 2u Stablizers          |          3 | $3.45            | https://stackskb.com/store/genuine-cherry-mx-plate-mount-stabilizers-2u/                                     |
| Shipping               |          1 | $2.00            | https://stackskb.com                                                                                         |
| Total                  |        nan | $66.91           | nan                                                                                                          |
| Total funding required |        nan | $63.00           | nan                                                                                                          |

## Total Pricing
The total price comes out to be 6043 INR ($63) [ SHIPPING INCLUDED ]


The pricing might slightly vary due to flash sales, and dollar market trends.
