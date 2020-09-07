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
L Connector:Conn_01x14_Female J1
U 1 1 5F52D9F5
P 3750 4300
F 0 "J1" H 3650 3400 50  0000 C CNN
F 1 "Conn_01x14_Female" H 3650 3300 50  0000 C CNN
F 2 "" H 3750 4300 50  0001 C CNN
F 3 "~" H 3750 4300 50  0001 C CNN
	1    3750 4300
	-1   0    0    -1  
$EndComp
$Comp
L Interface_UART:MAX485E U1
U 1 1 5F533BE3
P 8250 4750
F 0 "U1" H 8250 5431 50  0000 C CNN
F 1 "MAX485E" H 8250 5340 50  0000 C CNN
F 2 "" H 8250 4050 50  0001 C CNN
F 3 "https://datasheets.maximintegrated.com/en/ds/MAX1487E-MAX491E.pdf" H 8250 4800 50  0001 C CNN
	1    8250 4750
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x14_Female J2
U 1 1 5F538110
P 6150 4300
F 0 "J2" H 6050 3350 50  0000 L CNN
F 1 "Conn_01x14_Female" H 5750 3250 50  0000 L CNN
F 2 "" H 6150 4300 50  0001 C CNN
F 3 "~" H 6150 4300 50  0001 C CNN
	1    6150 4300
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 3700 4050 3700
Wire Wire Line
	3950 3900 4050 3900
Wire Wire Line
	3950 4000 4050 4000
Wire Wire Line
	3950 4200 4050 4200
Wire Wire Line
	3950 4600 4050 4600
Wire Wire Line
	3950 4700 4050 4700
Wire Wire Line
	3950 4900 4050 4900
Wire Wire Line
	5750 3700 5850 3700
Wire Wire Line
	5950 3800 5850 3800
Wire Wire Line
	5750 3900 5850 3900
Wire Wire Line
	5750 4000 5850 4000
Wire Wire Line
	5950 4100 5850 4100
Wire Wire Line
	5750 4200 5850 4200
Wire Wire Line
	5750 4400 5850 4400
Wire Wire Line
	5950 4800 5850 4800
Wire Wire Line
	5750 4900 5850 4900
Wire Wire Line
	5950 5000 5850 5000
$Comp
L power:GND #PWR09
U 1 1 5F572EF9
P 8250 5350
F 0 "#PWR09" H 8250 5100 50  0001 C CNN
F 1 "GND" H 8255 5177 50  0000 C CNN
F 2 "" H 8250 5350 50  0001 C CNN
F 3 "" H 8250 5350 50  0001 C CNN
	1    8250 5350
	1    0    0    -1  
$EndComp
Wire Wire Line
	5850 4900 5850 4950
Connection ~ 5850 4900
Wire Wire Line
	5850 4900 5950 4900
Wire Wire Line
	5850 4800 5850 4850
Connection ~ 5850 4800
Wire Wire Line
	5850 4800 5750 4800
Wire Wire Line
	7850 4750 7850 4850
Connection ~ 7850 4850
Wire Wire Line
	5750 4700 5850 4700
Wire Wire Line
	5850 4700 5850 4750
Wire Wire Line
	7750 4750 7750 4650
Wire Wire Line
	7750 4650 7850 4650
Connection ~ 5850 4700
Wire Wire Line
	5850 4700 5950 4700
$Comp
L power:+5V #PWR08
U 1 1 5F5B330A
P 8250 3900
F 0 "#PWR08" H 8250 3750 50  0001 C CNN
F 1 "+5V" H 8265 4073 50  0000 C CNN
F 2 "" H 8250 3900 50  0001 C CNN
F 3 "" H 8250 3900 50  0001 C CNN
	1    8250 3900
	1    0    0    -1  
$EndComp
Wire Wire Line
	8250 3900 8250 3950
$Comp
L power:+5V #PWR04
U 1 1 5F5BF8EF
P 4900 4150
F 0 "#PWR04" H 4900 4000 50  0001 C CNN
F 1 "+5V" H 4915 4323 50  0000 C CNN
F 2 "" H 4900 4150 50  0001 C CNN
F 3 "" H 4900 4150 50  0001 C CNN
	1    4900 4150
	1    0    0    -1  
$EndComp
Wire Wire Line
	5850 4750 7750 4750
Wire Wire Line
	5850 4850 7850 4850
Wire Wire Line
	5850 4950 7850 4950
Wire Wire Line
	6300 2750 6600 2750
Wire Wire Line
	8850 2750 8850 4950
Wire Wire Line
	8850 4950 8650 4950
Wire Wire Line
	8650 4650 8650 2850
Wire Wire Line
	8650 2850 6550 2850
Wire Wire Line
	6300 2950 6300 3000
Wire Wire Line
	6300 3000 5500 3000
Wire Wire Line
	1950 3000 1950 4150
Wire Wire Line
	1950 4150 4050 4150
Wire Wire Line
	4050 4150 4050 4100
Connection ~ 4050 4100
Wire Wire Line
	4050 4100 3950 4100
Wire Wire Line
	6300 3250 6300 3300
Wire Wire Line
	6300 3300 5550 3300
Wire Wire Line
	2050 3300 2050 4050
Wire Wire Line
	2050 4050 3000 4050
Wire Wire Line
	4050 4050 4050 4000
Connection ~ 4050 4000
Wire Wire Line
	3950 5000 4050 5000
Wire Wire Line
	4050 3850 3350 3850
Wire Wire Line
	3050 3850 3000 3850
$Comp
L Device:R R3
U 1 1 5F6CCD9E
P 3200 3950
F 0 "R3" V 3150 4100 50  0000 C CNN
F 1 "1Meg" V 3150 4350 50  0000 C CNN
F 2 "" V 3130 3950 50  0001 C CNN
F 3 "~" H 3200 3950 50  0001 C CNN
	1    3200 3950
	0    1    1    0   
$EndComp
Wire Wire Line
	4050 3950 3350 3950
Wire Wire Line
	3050 3950 3000 3950
$Comp
L Device:R R4
U 1 1 5F6CEFBF
P 3200 4250
F 0 "R4" V 3150 4400 50  0000 C CNN
F 1 "1Meg" V 3150 4650 50  0000 C CNN
F 2 "" V 3130 4250 50  0001 C CNN
F 3 "~" H 3200 4250 50  0001 C CNN
	1    3200 4250
	0    1    1    0   
$EndComp
Wire Wire Line
	4050 4250 3350 4250
Wire Wire Line
	3050 4250 3000 4250
$Comp
L Device:R R5
U 1 1 5F6D14BC
P 3200 4350
F 0 "R5" V 3150 4500 50  0000 C CNN
F 1 "1Meg" V 3150 4750 50  0000 C CNN
F 2 "" V 3130 4350 50  0001 C CNN
F 3 "~" H 3200 4350 50  0001 C CNN
	1    3200 4350
	0    1    1    0   
$EndComp
Wire Wire Line
	4050 4350 3350 4350
Wire Wire Line
	3050 4350 3000 4350
$Comp
L Device:R R6
U 1 1 5F6D3BDC
P 3200 4550
F 0 "R6" V 3150 4700 50  0000 C CNN
F 1 "1Meg" V 3150 4950 50  0000 C CNN
F 2 "" V 3130 4550 50  0001 C CNN
F 3 "~" H 3200 4550 50  0001 C CNN
	1    3200 4550
	0    1    1    0   
$EndComp
Wire Wire Line
	4050 4550 3350 4550
Wire Wire Line
	3050 4550 3000 4550
$Comp
L Device:R R7
U 1 1 5F6D6604
P 3200 4650
F 0 "R7" V 3150 4800 50  0000 C CNN
F 1 "1Meg" V 3150 5050 50  0000 C CNN
F 2 "" V 3130 4650 50  0001 C CNN
F 3 "~" H 3200 4650 50  0001 C CNN
	1    3200 4650
	0    1    1    0   
$EndComp
Wire Wire Line
	4050 4650 3350 4650
Wire Wire Line
	3050 4650 3000 4650
$Comp
L Device:R R8
U 1 1 5F6D923F
P 3200 4750
F 0 "R8" V 3150 4900 50  0000 C CNN
F 1 "1Meg" V 3150 5150 50  0000 C CNN
F 2 "" V 3130 4750 50  0001 C CNN
F 3 "~" H 3200 4750 50  0001 C CNN
	1    3200 4750
	0    1    1    0   
$EndComp
Wire Wire Line
	4050 4750 3350 4750
Wire Wire Line
	3050 4750 3000 4750
$Comp
L Device:R R9
U 1 1 5F6DC211
P 3200 4850
F 0 "R9" V 3150 5000 50  0000 C CNN
F 1 "1Meg" V 3150 5250 50  0000 C CNN
F 2 "" V 3130 4850 50  0001 C CNN
F 3 "~" H 3200 4850 50  0001 C CNN
	1    3200 4850
	0    1    1    0   
$EndComp
Wire Wire Line
	4050 4850 3350 4850
Wire Wire Line
	3050 4850 3000 4850
$Comp
L Device:R R10
U 1 1 5F6DF40B
P 3200 4950
F 0 "R10" V 3150 5100 50  0000 C CNN
F 1 "1Meg" V 3150 5350 50  0000 C CNN
F 2 "" V 3130 4950 50  0001 C CNN
F 3 "~" H 3200 4950 50  0001 C CNN
	1    3200 4950
	0    1    1    0   
$EndComp
Wire Wire Line
	4050 4950 3350 4950
Wire Wire Line
	3050 4950 3000 4950
$Comp
L Device:R R11
U 1 1 5F6EBA1B
P 3200 5050
F 0 "R11" V 3150 5200 50  0000 C CNN
F 1 "1Meg" V 3150 5450 50  0000 C CNN
F 2 "" V 3130 5050 50  0001 C CNN
F 3 "~" H 3200 5050 50  0001 C CNN
	1    3200 5050
	0    1    1    0   
$EndComp
Wire Wire Line
	4050 5050 3350 5050
Wire Wire Line
	3050 5050 3000 5050
Wire Wire Line
	6850 3750 6900 3750
Wire Wire Line
	5850 3750 6550 3750
$Comp
L Device:R R12
U 1 1 5F71280A
P 6700 3750
F 0 "R12" V 6650 3950 50  0000 C CNN
F 1 "1Meg" V 6650 4150 50  0000 C CNN
F 2 "" V 6630 3750 50  0001 C CNN
F 3 "~" H 6700 3750 50  0001 C CNN
	1    6700 3750
	0    -1   1    0   
$EndComp
Wire Wire Line
	6850 3850 6900 3850
Wire Wire Line
	5850 3850 6550 3850
$Comp
L Device:R R13
U 1 1 5F7161A4
P 6700 3850
F 0 "R13" V 6650 4050 50  0000 C CNN
F 1 "1Meg" V 6650 4250 50  0000 C CNN
F 2 "" V 6630 3850 50  0001 C CNN
F 3 "~" H 6700 3850 50  0001 C CNN
	1    6700 3850
	0    -1   1    0   
$EndComp
Wire Wire Line
	6850 3950 6900 3950
Wire Wire Line
	5850 3950 6550 3950
$Comp
L Device:R R14
U 1 1 5F719CFC
P 6700 3950
F 0 "R14" V 6650 4150 50  0000 C CNN
F 1 "1Meg" V 6650 4350 50  0000 C CNN
F 2 "" V 6630 3950 50  0001 C CNN
F 3 "~" H 6700 3950 50  0001 C CNN
	1    6700 3950
	0    -1   1    0   
$EndComp
Wire Wire Line
	6850 4050 6900 4050
Wire Wire Line
	5850 4050 6550 4050
$Comp
L Device:R R15
U 1 1 5F71DA21
P 6700 4050
F 0 "R15" V 6650 4250 50  0000 C CNN
F 1 "1Meg" V 6650 4450 50  0000 C CNN
F 2 "" V 6630 4050 50  0001 C CNN
F 3 "~" H 6700 4050 50  0001 C CNN
	1    6700 4050
	0    -1   1    0   
$EndComp
Wire Wire Line
	6850 4150 6900 4150
Wire Wire Line
	5850 4150 6550 4150
$Comp
L Device:R R16
U 1 1 5F721992
P 6700 4150
F 0 "R16" V 6650 4350 50  0000 C CNN
F 1 "1Meg" V 6650 4550 50  0000 C CNN
F 2 "" V 6630 4150 50  0001 C CNN
F 3 "~" H 6700 4150 50  0001 C CNN
	1    6700 4150
	0    -1   1    0   
$EndComp
Wire Wire Line
	6850 4250 6900 4250
Wire Wire Line
	5850 4250 6550 4250
$Comp
L Device:R R17
U 1 1 5F725B5E
P 6700 4250
F 0 "R17" V 6650 4450 50  0000 C CNN
F 1 "1Meg" V 6650 4650 50  0000 C CNN
F 2 "" V 6630 4250 50  0001 C CNN
F 3 "~" H 6700 4250 50  0001 C CNN
	1    6700 4250
	0    -1   1    0   
$EndComp
Wire Wire Line
	5950 4300 5850 4300
Wire Wire Line
	6850 4350 6900 4350
Wire Wire Line
	5850 4350 6550 4350
$Comp
L Device:R R18
U 1 1 5F73365F
P 6700 4350
F 0 "R18" V 6650 4550 50  0000 C CNN
F 1 "1Meg" V 6650 4750 50  0000 C CNN
F 2 "" V 6630 4350 50  0001 C CNN
F 3 "~" H 6700 4350 50  0001 C CNN
	1    6700 4350
	0    -1   1    0   
$EndComp
Wire Wire Line
	6850 4450 6900 4450
Wire Wire Line
	5850 4450 6550 4450
$Comp
L Device:R R19
U 1 1 5F737C8B
P 6700 4450
F 0 "R19" V 6650 4650 50  0000 C CNN
F 1 "1Meg" V 6650 4850 50  0000 C CNN
F 2 "" V 6630 4450 50  0001 C CNN
F 3 "~" H 6700 4450 50  0001 C CNN
	1    6700 4450
	0    -1   1    0   
$EndComp
Wire Wire Line
	6850 5050 6900 5050
Wire Wire Line
	5850 5050 6550 5050
$Comp
L Device:R R20
U 1 1 5F73C5D9
P 6700 5050
F 0 "R20" V 6650 5250 50  0000 C CNN
F 1 "1Meg" V 6650 5450 50  0000 C CNN
F 2 "" V 6630 5050 50  0001 C CNN
F 3 "~" H 6700 5050 50  0001 C CNN
	1    6700 5050
	0    -1   1    0   
$EndComp
$Comp
L Device:R R2
U 1 1 5F6CAF00
P 3200 3850
F 0 "R2" V 3150 4000 50  0000 C CNN
F 1 "1Meg" V 3150 4250 50  0000 C CNN
F 2 "" V 3130 3850 50  0001 C CNN
F 3 "~" H 3200 3850 50  0001 C CNN
	1    3200 3850
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR03
U 1 1 5F753CFB
P 4900 4450
F 0 "#PWR03" H 4900 4200 50  0001 C CNN
F 1 "GND" H 4905 4277 50  0000 C CNN
F 2 "" H 4900 4450 50  0001 C CNN
F 3 "" H 4900 4450 50  0001 C CNN
	1    4900 4450
	1    0    0    -1  
$EndComp
Wire Wire Line
	3000 3850 3000 3950
Connection ~ 3000 3950
Wire Wire Line
	3000 3950 3000 4050
Connection ~ 3000 4250
Wire Wire Line
	3000 4250 3000 4350
Connection ~ 3000 4350
Connection ~ 3000 4550
Wire Wire Line
	3000 4550 3000 4650
Connection ~ 3000 4650
Wire Wire Line
	3000 4650 3000 4750
Connection ~ 3000 4750
Wire Wire Line
	3000 4750 3000 4850
Connection ~ 3000 4850
Wire Wire Line
	3000 4850 3000 4950
Connection ~ 3000 4950
Wire Wire Line
	3000 4950 3000 5050
Connection ~ 3000 5050
Wire Wire Line
	6900 3750 6900 3850
Connection ~ 6900 3850
Wire Wire Line
	6900 3850 6900 3950
Connection ~ 6900 3950
Wire Wire Line
	6900 3950 6900 4050
Connection ~ 6900 4050
Wire Wire Line
	6900 4050 6900 4150
Connection ~ 6900 4150
Wire Wire Line
	6900 4150 6900 4250
Connection ~ 6900 4250
Wire Wire Line
	6900 4250 6900 4350
Connection ~ 6900 4350
Wire Wire Line
	6900 4350 6900 4450
Connection ~ 6900 4450
Connection ~ 6900 5050
Wire Wire Line
	5850 3700 5850 3750
Connection ~ 5850 3700
Wire Wire Line
	5850 3700 5950 3700
Wire Wire Line
	5850 3800 5850 3850
Connection ~ 5850 3800
Wire Wire Line
	5850 3800 5750 3800
Wire Wire Line
	5850 3900 5850 3950
Connection ~ 5850 3900
Wire Wire Line
	5850 3900 5950 3900
Wire Wire Line
	5850 4450 5850 4400
Connection ~ 5850 4400
Wire Wire Line
	5850 4400 5950 4400
Wire Wire Line
	5850 4350 5850 4300
Connection ~ 5850 4300
Wire Wire Line
	5850 4300 5750 4300
Wire Wire Line
	5850 4250 5850 4200
Connection ~ 5850 4200
Wire Wire Line
	5850 4200 5950 4200
Wire Wire Line
	5850 4150 5850 4100
Connection ~ 5850 4100
Wire Wire Line
	5850 4100 5750 4100
Wire Wire Line
	5850 4050 5850 4000
Connection ~ 5850 4000
Wire Wire Line
	5850 4000 5950 4000
Wire Wire Line
	5850 5050 5850 5000
Connection ~ 5850 5000
Wire Wire Line
	5850 5000 5750 5000
Wire Wire Line
	4050 4350 4050 4300
Connection ~ 4050 4300
Wire Wire Line
	4050 4300 3950 4300
Wire Wire Line
	4050 4250 4050 4200
Connection ~ 4050 4200
Wire Wire Line
	4050 3950 4050 3900
Connection ~ 4050 3900
Wire Wire Line
	4050 3850 4050 3800
Connection ~ 4050 3800
Wire Wire Line
	4050 3800 3950 3800
Wire Wire Line
	4050 4500 4050 4550
Connection ~ 4050 4500
Wire Wire Line
	4050 4500 3950 4500
Wire Wire Line
	4050 5050 4050 5000
Connection ~ 4050 5000
Wire Wire Line
	4050 4950 4050 4900
Connection ~ 4050 4900
Wire Wire Line
	4050 4850 4050 4800
Connection ~ 4050 4800
Wire Wire Line
	4050 4800 3950 4800
Wire Wire Line
	4050 4750 4050 4700
Connection ~ 4050 4700
Wire Wire Line
	4050 4650 4050 4600
Connection ~ 4050 4600
Wire Wire Line
	6300 3450 6300 3350
Wire Wire Line
	6300 3050 6300 3150
$Comp
L power:+5V #PWR05
U 1 1 5F7FF43F
P 7450 3150
F 0 "#PWR05" H 7450 3000 50  0001 C CNN
F 1 "+5V" H 7465 3323 50  0000 C CNN
F 2 "" H 7450 3150 50  0001 C CNN
F 3 "" H 7450 3150 50  0001 C CNN
	1    7450 3150
	1    0    0    -1  
$EndComp
$Comp
L power:PWR_FLAG #FLG01
U 1 1 5F7FFF0A
P 7150 3150
F 0 "#FLG01" H 7150 3225 50  0001 C CNN
F 1 "PWR_FLAG" H 7150 3323 50  0000 C CNN
F 2 "" H 7150 3150 50  0001 C CNN
F 3 "~" H 7150 3150 50  0001 C CNN
	1    7150 3150
	1    0    0    -1  
$EndComp
Connection ~ 7150 3150
Wire Wire Line
	7150 3150 7450 3150
Wire Wire Line
	4050 3600 3350 3600
Wire Wire Line
	3050 3600 3000 3600
$Comp
L Device:R R1
U 1 1 5F83C4C1
P 3200 3600
F 0 "R1" V 3150 3750 50  0000 C CNN
F 1 "10k" V 3150 4000 50  0000 C CNN
F 2 "" V 3130 3600 50  0001 C CNN
F 3 "~" H 3200 3600 50  0001 C CNN
	1    3200 3600
	0    1    1    0   
$EndComp
Wire Wire Line
	4050 3600 4050 3700
Connection ~ 4050 3700
$Comp
L power:+5V #PWR01
U 1 1 5F84E551
P 3000 3600
F 0 "#PWR01" H 3000 3450 50  0001 C CNN
F 1 "+5V" H 3015 3773 50  0000 C CNN
F 2 "" H 3000 3600 50  0001 C CNN
F 3 "" H 3000 3600 50  0001 C CNN
	1    3000 3600
	1    0    0    -1  
$EndComp
$Comp
L Device:C C3
U 1 1 5F880157
P 8100 3950
F 0 "C3" V 7848 3950 50  0000 C CNN
F 1 "1.5u" V 7939 3950 50  0000 C CNN
F 2 "" H 8138 3800 50  0001 C CNN
F 3 "~" H 8100 3950 50  0001 C CNN
	1    8100 3950
	0    1    1    0   
$EndComp
Connection ~ 8250 3950
Wire Wire Line
	8250 3950 8250 4250
$Comp
L power:GND #PWR07
U 1 1 5F880B01
P 7900 3950
F 0 "#PWR07" H 7900 3700 50  0001 C CNN
F 1 "GND" H 7905 3777 50  0000 C CNN
F 2 "" H 7900 3950 50  0001 C CNN
F 3 "" H 7900 3950 50  0001 C CNN
	1    7900 3950
	1    0    0    -1  
$EndComp
Wire Wire Line
	7900 3950 7950 3950
$Comp
L Device:CP C1
U 1 1 5F88C5AF
P 6950 3300
F 0 "C1" H 7068 3346 50  0000 L CNN
F 1 "10u" H 7068 3255 50  0000 L CNN
F 2 "" H 6988 3150 50  0001 C CNN
F 3 "~" H 6950 3300 50  0001 C CNN
	1    6950 3300
	1    0    0    -1  
$EndComp
Wire Wire Line
	7150 3450 7450 3450
Connection ~ 7150 3450
$Comp
L power:PWR_FLAG #FLG02
U 1 1 5F800DA7
P 7150 3450
F 0 "#FLG02" H 7150 3525 50  0001 C CNN
F 1 "PWR_FLAG" H 7150 3623 50  0000 C CNN
F 2 "" H 7150 3450 50  0001 C CNN
F 3 "~" H 7150 3450 50  0001 C CNN
	1    7150 3450
	1    0    0    1   
$EndComp
$Comp
L power:GND #PWR06
U 1 1 5F61AA0C
P 7450 3450
F 0 "#PWR06" H 7450 3200 50  0001 C CNN
F 1 "GND" H 7455 3277 50  0000 C CNN
F 2 "" H 7450 3450 50  0001 C CNN
F 3 "" H 7450 3450 50  0001 C CNN
	1    7450 3450
	1    0    0    -1  
$EndComp
Connection ~ 6950 3150
Wire Wire Line
	6950 3150 7150 3150
Connection ~ 6950 3450
Wire Wire Line
	6950 3450 7150 3450
$Comp
L S8B-XH-A-1_LF__SN_:S8B-XH-A-1_LF__SN_ J4
U 1 1 5F8F8C9E
P 6300 2750
F 0 "J4" H 6592 3015 50  0000 C CNN
F 1 "S8B-XH-A-1_LF__SN_" H 6592 2924 50  0000 C CNN
F 2 "S8BXHA1LFSN" H 6950 2850 50  0001 L CNN
F 3 "http://www.jst-mfg.com/product/pdf/eng/eXH.pdf" H 6950 2750 50  0001 L CNN
F 4 "CONN HEADER R/A 8POS 2.5MM" H 6950 2650 50  0001 L CNN "Description"
F 5 "6.1" H 6950 2550 50  0001 L CNN "Height"
F 6 "" H 6950 2450 50  0001 L CNN "RS Part Number"
F 7 "" H 6950 2350 50  0001 L CNN "RS Price/Stock"
F 8 "JST (JAPAN SOLDERLESS TERMINALS)" H 6950 2250 50  0001 L CNN "Manufacturer_Name"
F 9 "S8B-XH-A-1(LF)(SN)" H 6950 2150 50  0001 L CNN "Manufacturer_Part_Number"
	1    6300 2750
	-1   0    0    -1  
$EndComp
$Comp
L S8B-XH-A-1_LF__SN_:S8B-XH-A-1_LF__SN_ J3
U 1 1 5F91383D
P 6250 1650
F 0 "J3" H 6542 1915 50  0000 C CNN
F 1 "S8B-XH-A-1_LF__SN_" H 6542 1824 50  0000 C CNN
F 2 "S8BXHA1LFSN" H 6900 1750 50  0001 L CNN
F 3 "http://www.jst-mfg.com/product/pdf/eng/eXH.pdf" H 6900 1650 50  0001 L CNN
F 4 "CONN HEADER R/A 8POS 2.5MM" H 6900 1550 50  0001 L CNN "Description"
F 5 "6.1" H 6900 1450 50  0001 L CNN "Height"
F 6 "" H 6900 1350 50  0001 L CNN "RS Part Number"
F 7 "" H 6900 1250 50  0001 L CNN "RS Price/Stock"
F 8 "JST (JAPAN SOLDERLESS TERMINALS)" H 6900 1150 50  0001 L CNN "Manufacturer_Name"
F 9 "S8B-XH-A-1(LF)(SN)" H 6900 1050 50  0001 L CNN "Manufacturer_Part_Number"
	1    6250 1650
	-1   0    0    -1  
$EndComp
Wire Wire Line
	6250 1850 6250 1900
Wire Wire Line
	6250 1900 5500 1900
Wire Wire Line
	5500 1900 5500 3000
Connection ~ 5500 3000
Wire Wire Line
	5500 3000 1950 3000
Wire Wire Line
	6250 2150 6250 2200
Wire Wire Line
	6250 2200 5550 2200
Wire Wire Line
	5550 2200 5550 3300
Connection ~ 5550 3300
Wire Wire Line
	5550 3300 2050 3300
Wire Wire Line
	6300 3450 6450 3450
Connection ~ 6300 3450
Wire Wire Line
	6300 3150 6500 3150
Connection ~ 6300 3150
Wire Wire Line
	6250 2250 6250 2350
Wire Wire Line
	6250 2350 6450 2350
Wire Wire Line
	6450 2350 6450 3450
Connection ~ 6250 2350
Connection ~ 6450 3450
Wire Wire Line
	6450 3450 6950 3450
Wire Wire Line
	6250 1950 6250 2050
Wire Wire Line
	6250 2050 6500 2050
Wire Wire Line
	6500 2050 6500 3150
Connection ~ 6250 2050
Connection ~ 6500 3150
Wire Wire Line
	6500 3150 6950 3150
Wire Wire Line
	6250 1750 6550 1750
Wire Wire Line
	6550 1750 6550 2850
Connection ~ 6550 2850
Wire Wire Line
	6550 2850 6300 2850
Wire Wire Line
	6250 1650 6600 1650
Wire Wire Line
	6600 1650 6600 2750
Connection ~ 6600 2750
Wire Wire Line
	6600 2750 8850 2750
Connection ~ 3000 4050
Wire Wire Line
	3000 4050 4050 4050
Wire Wire Line
	3000 4050 3000 4250
$Comp
L Device:C C?
U 1 1 5F565C3C
P 4650 4300
F 0 "C?" V 4398 4300 50  0000 C CNN
F 1 "0.1u" V 4489 4300 50  0000 C CNN
F 2 "" H 4688 4150 50  0001 C CNN
F 3 "~" H 4650 4300 50  0001 C CNN
	1    4650 4300
	-1   0    0    1   
$EndComp
$Comp
L Device:C C?
U 1 1 5F5721A0
P 5050 4300
F 0 "C?" V 4798 4300 50  0000 C CNN
F 1 "0.01u" V 4889 4300 50  0000 C CNN
F 2 "" H 5088 4150 50  0001 C CNN
F 3 "~" H 5050 4300 50  0001 C CNN
	1    5050 4300
	-1   0    0    1   
$EndComp
Wire Wire Line
	3000 4350 3000 4550
Wire Wire Line
	3950 4400 4050 4400
Wire Wire Line
	6900 4450 6900 5050
Wire Wire Line
	5750 4600 5800 4600
Wire Wire Line
	5750 4500 5800 4500
Wire Wire Line
	4050 4400 4050 4450
Wire Wire Line
	4050 4450 4650 4450
Wire Wire Line
	5200 4450 5200 4650
Wire Wire Line
	5200 4650 5800 4650
Wire Wire Line
	5800 4650 5800 4600
Connection ~ 4050 4400
Connection ~ 5800 4600
Wire Wire Line
	5800 4600 5950 4600
Wire Wire Line
	5800 4500 5800 4550
Connection ~ 5800 4500
Wire Wire Line
	5800 4500 5950 4500
Wire Wire Line
	4050 5000 4150 5000
Wire Wire Line
	4050 4900 4150 4900
Wire Wire Line
	4150 4800 4050 4800
Wire Wire Line
	4050 4700 4150 4700
Wire Wire Line
	4050 4600 4150 4600
Wire Wire Line
	4150 4500 4050 4500
Wire Wire Line
	4050 4400 4150 4400
Wire Wire Line
	4150 4300 4050 4300
Wire Wire Line
	4050 4200 4150 4200
Wire Wire Line
	4150 4100 4050 4100
Wire Wire Line
	4050 4000 4150 4000
Wire Wire Line
	4050 3900 4150 3900
Wire Wire Line
	4150 3800 4050 3800
Wire Wire Line
	4050 3700 4150 3700
$Comp
L PIC16F18857-I_SP:PIC16F18857-I_SP IC1
U 1 1 5F52C094
P 4150 3700
F 0 "IC1" H 4950 3965 50  0000 C CNN
F 1 "PIC16F18857-I_SP" H 4950 3874 50  0000 C CNN
F 2 "DIP794W56P254L3486H508Q28N" H 5600 3800 50  0001 L CNN
F 3 "http://uk.rs-online.com/web/p/products/9053195" H 5600 3700 50  0001 L CNN
F 4 "MCU 8-bit 32 MHz 56KB Prog 5V SPDIP-28 Microchip PIC16F18857-I/SP, 8bit Microcontroller, 32MHz, 56 kB Flash, 28-Pin SPDIP" H 5600 3600 50  0001 L CNN "Description"
F 5 "5.08" H 5600 3500 50  0001 L CNN "Height"
F 6 "9053195" H 5600 3400 50  0001 L CNN "RS Part Number"
F 7 "http://uk.rs-online.com/web/p/products/9053195" H 5600 3300 50  0001 L CNN "RS Price/Stock"
F 8 "Microchip" H 5600 3200 50  0001 L CNN "Manufacturer_Name"
F 9 "PIC16F18857-I/SP" H 5600 3100 50  0001 L CNN "Manufacturer_Part_Number"
	1    4150 3700
	1    0    0    -1  
$EndComp
Connection ~ 4650 4450
Wire Wire Line
	4650 4450 4900 4450
Wire Wire Line
	4650 4150 4900 4150
Connection ~ 5050 4450
Wire Wire Line
	5050 4450 5200 4450
Connection ~ 5050 4150
Wire Wire Line
	5350 4150 5350 4550
Wire Wire Line
	5350 4550 5800 4550
Wire Wire Line
	5050 4150 5350 4150
Connection ~ 4900 4450
Wire Wire Line
	4900 4450 5050 4450
Connection ~ 4900 4150
Wire Wire Line
	4900 4150 5050 4150
Wire Wire Line
	3000 5400 6900 5400
Wire Wire Line
	3000 5050 3000 5400
Wire Wire Line
	6900 5050 6900 5400
$EndSCHEMATC
