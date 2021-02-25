EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L 4xxx:4051 U1
U 1 1 60481B08
P 4850 2950
F 0 "U1" H 5394 2996 50  0000 L CNN
F 1 "4051" H 5394 2905 50  0000 L CNN
F 2 "Package_DIP:DIP-16_W7.62mm" H 4850 2950 50  0001 C CNN
F 3 "http://www.intersil.com/content/dam/Intersil/documents/cd40/cd4051bms-52bms-53bms.pdf" H 4850 2950 50  0001 C CNN
	1    4850 2950
	1    0    0    -1  
$EndComp
Wire Wire Line
	4350 3250 4250 3250
Wire Wire Line
	4250 3850 4850 3850
Connection ~ 4850 3850
Wire Wire Line
	4850 3850 4950 3850
$Comp
L power:GND #PWR03
U 1 1 60482D4F
P 4250 3850
F 0 "#PWR03" H 4250 3600 50  0001 C CNN
F 1 "GND" H 4255 3677 50  0000 C CNN
F 2 "" H 4250 3850 50  0001 C CNN
F 3 "" H 4250 3850 50  0001 C CNN
	1    4250 3850
	1    0    0    -1  
$EndComp
Connection ~ 4250 3850
$Comp
L Device:C C2
U 1 1 604831DD
P 4700 1950
F 0 "C2" V 4448 1950 50  0000 C CNN
F 1 "0.1u" V 4539 1950 50  0000 C CNN
F 2 "Capacitor_THT:C_Disc_D3.0mm_W1.6mm_P2.50mm" H 4738 1800 50  0001 C CNN
F 3 "~" H 4700 1950 50  0001 C CNN
	1    4700 1950
	0    1    1    0   
$EndComp
$Comp
L Device:CP C1
U 1 1 604885C4
P 1800 2800
F 0 "C1" V 1545 2800 50  0000 C CNN
F 1 "10u" V 1636 2800 50  0000 C CNN
F 2 "Capacitor_THT:CP_Radial_D5.0mm_P2.50mm" H 1838 2650 50  0001 C CNN
F 3 "~" H 1800 2800 50  0001 C CNN
	1    1800 2800
	0    1    1    0   
$EndComp
Wire Wire Line
	1950 2800 1950 3150
Wire Wire Line
	1950 3150 1900 3150
Connection ~ 1950 3150
$Comp
L power:GND #PWR01
U 1 1 6048B8E7
P 1650 2800
F 0 "#PWR01" H 1650 2550 50  0001 C CNN
F 1 "GND" H 1655 2627 50  0000 C CNN
F 2 "" H 1650 2800 50  0001 C CNN
F 3 "" H 1650 2800 50  0001 C CNN
	1    1650 2800
	1    0    0    -1  
$EndComp
Wire Wire Line
	4850 1950 4850 2050
$Comp
L power:GND #PWR04
U 1 1 6048C611
P 4550 1950
F 0 "#PWR04" H 4550 1700 50  0001 C CNN
F 1 "GND" H 4555 1777 50  0000 C CNN
F 2 "" H 4550 1950 50  0001 C CNN
F 3 "" H 4550 1950 50  0001 C CNN
	1    4550 1950
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x05_Male J1
U 1 1 60495652
P 1700 3350
F 0 "J1" H 1808 3731 50  0000 C CNN
F 1 "Conn_01x05_Male" H 1808 3640 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x05_P2.54mm_Horizontal" H 1700 3350 50  0001 C CNN
F 3 "~" H 1700 3350 50  0001 C CNN
	1    1700 3350
	1    0    0    -1  
$EndComp
$Comp
L Device:R R1
U 1 1 604A613D
P 3450 2400
F 0 "R1" V 3450 2400 50  0000 C CNN
F 1 "1Meg" V 3400 2600 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3380 2400 50  0001 C CNN
F 3 "~" H 3450 2400 50  0001 C CNN
	1    3450 2400
	0    1    1    0   
$EndComp
$Comp
L Device:R R2
U 1 1 604AAB33
P 3450 2500
F 0 "R2" V 3450 2500 50  0000 C CNN
F 1 "1Meg" V 3400 2700 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3380 2500 50  0001 C CNN
F 3 "~" H 3450 2500 50  0001 C CNN
	1    3450 2500
	0    1    1    0   
$EndComp
$Comp
L Device:R R3
U 1 1 604AAE48
P 3450 2600
F 0 "R3" V 3450 2600 50  0000 C CNN
F 1 "1Meg" V 3400 2800 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3380 2600 50  0001 C CNN
F 3 "~" H 3450 2600 50  0001 C CNN
	1    3450 2600
	0    1    1    0   
$EndComp
$Comp
L Device:R R4
U 1 1 604AB14B
P 3450 2700
F 0 "R4" V 3450 2700 50  0000 C CNN
F 1 "1Meg" V 3400 2900 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3380 2700 50  0001 C CNN
F 3 "~" H 3450 2700 50  0001 C CNN
	1    3450 2700
	0    1    1    0   
$EndComp
$Comp
L Device:R R5
U 1 1 604AB466
P 3450 2800
F 0 "R5" V 3450 2800 50  0000 C CNN
F 1 "1Meg" V 3400 3000 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3380 2800 50  0001 C CNN
F 3 "~" H 3450 2800 50  0001 C CNN
	1    3450 2800
	0    1    1    0   
$EndComp
$Comp
L Device:R R6
U 1 1 604AB730
P 3450 2900
F 0 "R6" V 3450 2900 50  0000 C CNN
F 1 "1Meg" V 3400 3100 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3380 2900 50  0001 C CNN
F 3 "~" H 3450 2900 50  0001 C CNN
	1    3450 2900
	0    1    1    0   
$EndComp
$Comp
L Device:R R7
U 1 1 604ABA9A
P 3450 3000
F 0 "R7" V 3450 3000 50  0000 C CNN
F 1 "10k" V 3400 3200 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3380 3000 50  0001 C CNN
F 3 "~" H 3450 3000 50  0001 C CNN
	1    3450 3000
	0    1    1    0   
$EndComp
Wire Wire Line
	1900 3350 4350 3350
Wire Wire Line
	1900 3450 4350 3450
Wire Wire Line
	1900 3550 4350 3550
Wire Wire Line
	3600 2400 4350 2400
Wire Wire Line
	4350 2400 4350 2350
Connection ~ 4350 2350
Wire Wire Line
	4350 2450 4350 2500
Wire Wire Line
	4350 2500 3600 2500
Connection ~ 4350 2450
Wire Wire Line
	3600 2600 4350 2600
Wire Wire Line
	4350 2600 4350 2550
Connection ~ 4350 2550
Wire Wire Line
	4350 2650 4350 2700
Wire Wire Line
	4350 2700 3600 2700
Connection ~ 4350 2650
Wire Wire Line
	3600 2800 4350 2800
Wire Wire Line
	4350 2800 4350 2750
Connection ~ 4350 2750
Wire Wire Line
	4350 2850 4350 2900
Wire Wire Line
	4350 2900 3600 2900
Connection ~ 4350 2850
Wire Wire Line
	3600 3000 4350 3000
Wire Wire Line
	4350 3000 4350 2950
Connection ~ 4350 2950
Wire Wire Line
	3300 2400 3300 2500
Connection ~ 3300 2500
Wire Wire Line
	3300 2500 3300 2600
Connection ~ 3300 2600
Wire Wire Line
	3300 2600 3300 2700
Connection ~ 3300 2700
Wire Wire Line
	3300 2700 3300 2800
Connection ~ 3300 2800
Wire Wire Line
	3300 2800 3300 2900
Connection ~ 3300 2900
Wire Wire Line
	3300 2900 3300 3000
Connection ~ 3850 2450
Wire Wire Line
	3850 2450 3850 2350
Connection ~ 3850 2550
Wire Wire Line
	3850 2550 3850 2450
Connection ~ 3850 2650
Wire Wire Line
	3850 2650 3850 2550
Connection ~ 3850 2750
Wire Wire Line
	3850 2750 3850 2650
Connection ~ 3850 2850
Wire Wire Line
	3850 2850 3850 2750
Wire Wire Line
	3850 2950 3850 2850
$Comp
L Connector:Conn_01x02_Male J3
U 1 1 604C548C
P 5550 2350
F 0 "J3" H 5522 2232 50  0000 R CNN
F 1 "Conn_01x02_Male" H 5522 2323 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Horizontal" H 5550 2350 50  0001 C CNN
F 3 "~" H 5550 2350 50  0001 C CNN
	1    5550 2350
	-1   0    0    1   
$EndComp
Wire Wire Line
	3850 2150 3300 2150
Wire Wire Line
	3300 2150 3300 2400
Connection ~ 3300 2400
Wire Wire Line
	3300 2150 3300 1500
Wire Wire Line
	3300 1500 5350 1500
Wire Wire Line
	5350 1500 5350 2250
Connection ~ 3300 2150
$Comp
L power:VDD #PWR05
U 1 1 604CE1F8
P 4850 1950
F 0 "#PWR05" H 4850 1800 50  0001 C CNN
F 1 "VDD" H 4865 2123 50  0000 C CNN
F 2 "" H 4850 1950 50  0001 C CNN
F 3 "" H 4850 1950 50  0001 C CNN
	1    4850 1950
	1    0    0    -1  
$EndComp
Connection ~ 4850 1950
$Comp
L power:PWR_FLAG #FLG02
U 1 1 604CEC8D
P 2850 3250
F 0 "#FLG02" H 2850 3325 50  0001 C CNN
F 1 "PWR_FLAG" H 2850 3423 50  0000 C CNN
F 2 "" H 2850 3250 50  0001 C CNN
F 3 "~" H 2850 3250 50  0001 C CNN
	1    2850 3250
	1    0    0    -1  
$EndComp
$Comp
L power:VDD #PWR02
U 1 1 6048A518
P 2550 3150
F 0 "#PWR02" H 2550 3000 50  0001 C CNN
F 1 "VDD" H 2565 3323 50  0000 C CNN
F 2 "" H 2550 3150 50  0001 C CNN
F 3 "" H 2550 3150 50  0001 C CNN
	1    2550 3150
	1    0    0    -1  
$EndComp
Wire Wire Line
	1950 3150 2250 3150
$Comp
L power:PWR_FLAG #FLG01
U 1 1 604D9AEF
P 2250 3150
F 0 "#FLG01" H 2250 3225 50  0001 C CNN
F 1 "PWR_FLAG" H 2250 3323 50  0000 C CNN
F 2 "" H 2250 3150 50  0001 C CNN
F 3 "~" H 2250 3150 50  0001 C CNN
	1    2250 3150
	1    0    0    -1  
$EndComp
Connection ~ 2250 3150
Wire Wire Line
	2250 3150 2550 3150
Wire Wire Line
	4250 3250 2850 3250
Connection ~ 4250 3250
Wire Wire Line
	4250 3250 4250 3850
Connection ~ 2850 3250
Wire Wire Line
	2850 3250 1900 3250
$Comp
L Connector_Generic:Conn_02x08_Odd_Even J2
U 1 1 602DFCF7
P 4150 2750
F 0 "J2" H 4200 2125 50  0000 C CNN
F 1 "Conn_02x08_Odd_Even" H 4200 2216 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_2x08_P2.54mm_Horizontal" H 4150 2750 50  0001 C CNN
F 3 "~" H 4150 2750 50  0001 C CNN
	1    4150 2750
	-1   0    0    1   
$EndComp
Wire Wire Line
	3850 2150 3850 2350
Connection ~ 3850 2350
$Comp
L power:VDD #PWR?
U 1 1 60375FF5
P 3100 3050
F 0 "#PWR?" H 3100 2900 50  0001 C CNN
F 1 "VDD" H 3115 3223 50  0000 C CNN
F 2 "" H 3100 3050 50  0001 C CNN
F 3 "" H 3100 3050 50  0001 C CNN
	1    3100 3050
	1    0    0    -1  
$EndComp
Wire Wire Line
	3850 3050 3100 3050
$EndSCHEMATC
