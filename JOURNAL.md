---
title: "Veekos"
author: "adr"
description: "Veekos is a 21-key wireless Bluetooth Macropad that uses XIAO nrf52840 sense as its microcontroller chip. Each key has its own diode"
created_at: "2026-05-10"
---

# 2026-09-17: Writing firmware

**Total time spent: 2.8 hours**

Since there was a change of plans between Xiao RP2040 and and nrf52840 sense. So, my time was not fully tracked through Hackatime. 
![Screenshot_2026-09-17_at_9.05.47_PM.png](https://cdn.hackclub.com/01a0b002-86ac-7117-b9fe-e198ea8e9c99/Screenshot_2026-09-17_at_9.05.47_PM.png)

# 2026-09-16: Assembly

**Total time spent: 0.56 hours**

After finishing the PCB and case, I had to assemble everything. I started by exporting the PCB from KiCad, then used Fusion's feature to insert components. I inserted the bottom case first, and then aligned its height to the PCB accordingly. Then I imported the top case and aligned it with the rest. Final look:
![Veekos-full.png](https://cdn.hackclub.com/01a0aa33-6ecf-7259-98a0-33b2c1fe395f/Veekos-full.png)

# 2026-09-16: Making case

**Total time spent: 2.19 hours**

Bottom Case:
![Screenshot_2026-09-15_at_1.43.05_PM.png](https://cdn.hackclub.com/01a0a420-8a77-76e4-b830-a72df1abe08a/Screenshot_2026-09-15_at_1.43.05_PM.png)
![Screenshot_2026-09-15_at_1.45.42_PM.png](https://cdn.hackclub.com/01a0a422-eb71-75b4-8a0a-7c7e47aba695/Screenshot_2026-09-15_at_1.45.42_PM.png)
![Screenshot_2026-09-15_at_1.46.07_PM.png](https://cdn.hackclub.com/01a0a423-47ae-7da4-9cc1-07d951e9979c/Screenshot_2026-09-15_at_1.46.07_PM.png)
![image.png](https://cdn.hackclub.com/01a0a425-0c00-75d8-bfac-8bf0604c5a6b/image.png)
![Screenshot_2026-09-15_at_1.48.26_PM.png](https://cdn.hackclub.com/01a0a425-6bb1-7744-add7-cbca13df4daa/Screenshot_2026-09-15_at_1.48.26_PM.png)
![Screenshot_2026-09-15_at_1.48.42_PM.png](https://cdn.hackclub.com/01a0a425-a678-7a34-bd94-4bad241d30a5/Screenshot_2026-09-15_at_1.48.42_PM.png)
![Screenshot_2026-09-15_at_1.50.07_PM.png](https://cdn.hackclub.com/01a0a426-ee15-7fba-8b3b-096460871c5f/Screenshot_2026-09-15_at_1.50.07_PM.png)
![Screenshot_2026-09-15_at_1.50.25_PM.png](https://cdn.hackclub.com/01a0a427-4115-7ebe-ad79-1f3fad90efe0/Screenshot_2026-09-15_at_1.50.25_PM.png)
![image.png](https://cdn.hackclub.com/01a0a427-d2d0-75af-a08f-ca503eee74f8/image.png)
![Screenshot_2026-09-15_at_1.54.07_PM.png](https://cdn.hackclub.com/01a0a42a-a1a1-70a7-a1ae-3d03610c4832/Screenshot_2026-09-15_at_1.54.07_PM.png)
Top part:
![Screenshot_2026-09-16_at_3.43.38_PM.png](https://cdn.hackclub.com/01a0aa2a-c643-7408-a57e-77503acf75aa/Screenshot_2026-09-16_at_3.43.38_PM.png)
![Screenshot_2026-09-16_at_3.44.09_PM.png](https://cdn.hackclub.com/01a0aa2c-352f-7ff0-92c5-6af3a15c4ab8/Screenshot_2026-09-16_at_3.44.09_PM.png)
![Screenshot_2026-09-16_at_3.44.16_PM.png](https://cdn.hackclub.com/01a0aa2c-5573-7ae2-9414-bce5f09e0318/Screenshot_2026-09-16_at_3.44.16_PM.png)
![Screenshot_2026-09-16_at_3.44.43_PM.png](https://cdn.hackclub.com/01a0aa2c-78f6-7233-8a9f-0f32dc0c9051/Screenshot_2026-09-16_at_3.44.43_PM.png)
![Screenshot_2026-09-16_at_3.45.00_PM.png](https://cdn.hackclub.com/01a0aa2c-9929-78f1-8312-bfd8e89bebc8/Screenshot_2026-09-16_at_3.45.00_PM.png)
Forgot the mounting holes :p, had to redo the whole
![Screenshot_2026-09-16_at_4.46.22_PM.png](https://cdn.hackclub.com/01a0aa2c-ec6c-7bfb-a758-5889484b504f/Screenshot_2026-09-16_at_4.46.22_PM.png)
![Screenshot_2026-09-16_at_5.55.02_PM.png](https://cdn.hackclub.com/01a0aa2d-8fdf-7d91-88fd-47c5b04933ab/Screenshot_2026-09-16_at_5.55.02_PM.png)

# 2026-09-15: Adding 3D model

**Total time spent: 0.7 hours**

After I was done with the routing and technical stuff, I had to add the 3D model for each component. This also had to be done manually, component by component. 
![Screenshot_2026-09-15_at_1.25.53_PM.png](https://cdn.hackclub.com/01a0a411-c63b-7fe6-abcc-790d7b2b28fc/Screenshot_2026-09-15_at_1.25.53_PM.png)

# 2026-09-15: Routing and silkscreen changes

**Total time spent: 2.8 hours**

After placing all the keys and diodes, I wired them to the XIAO nrf52840 sense, and then I made the edges of the pcb curved. Now, for the silkscreen, i removed each line and edge of the silkscreen of each key manually so that i could cover the whole pcb in a beautiful silkscreen. This part took time since you had to go in edit footprint for each key one by one and then select the silkscreen edges, careful not to select anything else and then delete. Look before silkscreen(after routing):
![image.png](https://cdn.hackclub.com/01a0a408-f666-7fa2-8e70-70ed749b0b0c/image.png)
And then final look:
![Screenshot_2026-09-15_at_1.17.41_PM.png](https://cdn.hackclub.com/01a0a409-461c-726b-a809-b3b6810ad295/Screenshot_2026-09-15_at_1.17.41_PM.png)

# 2026-05-16: PCB making time!!!

**Total time spent: 2.4 hours**

First, I arranged all the keys together, with precision up to three decimal places. 
![Screenshot 2026-05-10 at 9.12.41 PM.png](https://cdn.hackclub.com/019e2eec-ae78-7ffd-b037-bea85e777574/Screenshot%202026-05-10%20at%209.12.41%E2%80%AFPM.png)

And after that, I also placed all the diodes 
![Screenshot 2026-05-12 at 7.19.20 PM.png](https://cdn.hackclub.com/019e2eed-3a7d-7ad6-a96d-f709a0539f55/Screenshot%202026-05-12%20at%207.19.20%E2%80%AFPM.png)

# 2026-05-11: Schematic

**Total time spent: 2.5 hours**

I went through some macropads, and the 21-key macropad looked the best to me. I chose this layout and made its rough matrix on the image
![layout.png](https://cdn.hackclub.com/019e1662-54f6-781e-a3ad-d2d34af0726b/layout.png)

After that, in the Kicad schematic, I placed all the symbols together according to the matrix along with the XIAO. 
![sch-no wire.png](https://cdn.hackclub.com/019e1663-8f38-7879-a3cf-46ffc8b6e666/sch-no%20wire.png)

After that, I wired all the keys together
![sch-wired.png](https://cdn.hackclub.com/019e1663-f910-7562-b9ea-1ad0059d98f8/sch-wired.png)

After wiring all the keys together, I connected everything to the XIAO and closed the unused ports
![sch-complete.png](https://cdn.hackclub.com/019e1664-d383-7ef4-a3b2-407ea35037a6/sch-complete.png) 

Finally, in the schematic, I assigned all the footprints carefully according to the layout:
![sch-complete.png](https://cdn.hackclub.com/019e1666-0853-78df-9d62-5adc765d2bc4/sch-complete.png)

Done with the schematic, now moving on to PCB

