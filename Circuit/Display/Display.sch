EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A3 16535 11693
encoding utf-8
Sheet 1 1
Title "LEDs board"
Date "2021-02-17"
Rev "Proto"
Comp "okemessi"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Wire Wire Line
	9700 7950 9400 7950
Wire Wire Line
	7500 9200 7800 9200
NoConn ~ 9400 8050
NoConn ~ 7500 9300
$Comp
L Display_Character:LTS-6960HR AFF4
U 1 1 60B00F71
P 7000 9600
F 0 "AFF4" H 7000 10267 50  0000 C CNN
F 1 "LTS-6960HR" H 7000 10176 50  0000 C CNN
F 2 "Display_7Segment:7SegmentLED_LTS6760_LTS6780" H 7000 9000 50  0001 C CNN
F 3 "https://datasheet.octopart.com/LTS-6960HR-Lite-On-datasheet-11803242.pdf" H 7000 9600 50  0001 C CNN
	1    7000 9600
	1    0    0    -1  
$EndComp
NoConn ~ 5600 9200
NoConn ~ 7500 7950
$Comp
L Device:LED D4
U 1 1 60B83C58
P 3450 10000
F 0 "D4" H 3443 9745 50  0000 C CNN
F 1 "LED" H 3443 9836 50  0000 C CNN
F 2 "LED_THT:LED_D3.0mm" H 3450 10000 50  0001 C CNN
F 3 "~" H 3450 10000 50  0001 C CNN
	1    3450 10000
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D3
U 1 1 60B83140
P 3450 9700
F 0 "D3" H 3443 9445 50  0000 C CNN
F 1 "LED" H 3443 9536 50  0000 C CNN
F 2 "LED_THT:LED_D3.0mm" H 3450 9700 50  0001 C CNN
F 3 "~" H 3450 9700 50  0001 C CNN
	1    3450 9700
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D2
U 1 1 60B826D7
P 3450 9400
F 0 "D2" H 3443 9145 50  0000 C CNN
F 1 "LED" H 3443 9236 50  0000 C CNN
F 2 "LED_THT:LED_D3.0mm" H 3450 9400 50  0001 C CNN
F 3 "~" H 3450 9400 50  0001 C CNN
	1    3450 9400
	1    0    0    -1  
$EndComp
Wire Bus Line
	9800 7250 10350 7250
Connection ~ 9800 7250
Wire Bus Line
	8000 7450 6100 7450
NoConn ~ 9400 8650
Wire Wire Line
	8100 8550 8400 8550
Wire Wire Line
	8400 8450 8100 8450
Wire Wire Line
	8100 8350 8400 8350
Wire Wire Line
	8400 8250 8100 8250
Wire Wire Line
	8100 8150 8400 8150
Wire Wire Line
	8400 8050 8100 8050
Wire Wire Line
	8100 7950 8400 7950
$Comp
L Display_Character:LTS-6960HR AFF5
U 1 1 60B49BFA
P 8900 8350
F 0 "AFF5" H 8900 9017 50  0000 C CNN
F 1 "LTS-6960HR" H 8900 8926 50  0000 C CNN
F 2 "Display_7Segment:7SegmentLED_LTS6760_LTS6780" H 8900 7750 50  0001 C CNN
F 3 "https://datasheet.octopart.com/LTS-6960HR-Lite-On-datasheet-11803242.pdf" H 8900 8350 50  0001 C CNN
	1    8900 8350
	1    0    0    -1  
$EndComp
Entry Wire Line
	9700 7950 9800 8050
Text Label 8100 8550 0    50   ~ 0
LED_S6
Text Label 8100 8450 0    50   ~ 0
LED_S5
Text Label 8100 8350 0    50   ~ 0
LED_S4
Text Label 8100 8250 0    50   ~ 0
LED_S3
Text Label 8100 8150 0    50   ~ 0
LED_S2
Text Label 8100 8050 0    50   ~ 0
LED_S1
Text Label 8100 7950 0    50   ~ 0
LED_S0
Entry Wire Line
	8000 8450 8100 8550
Entry Wire Line
	8000 8350 8100 8450
Entry Wire Line
	8000 8250 8100 8350
Entry Wire Line
	8000 8150 8100 8250
Entry Wire Line
	8000 8050 8100 8150
Entry Wire Line
	8000 7950 8100 8050
Entry Wire Line
	8000 7850 8100 7950
Wire Bus Line
	7900 7250 9800 7250
Connection ~ 7900 7250
NoConn ~ 7500 9900
NoConn ~ 7500 8650
Wire Wire Line
	6200 9800 6500 9800
Wire Wire Line
	6500 9700 6200 9700
Wire Wire Line
	6200 9600 6500 9600
Wire Wire Line
	6500 9500 6200 9500
Wire Wire Line
	6200 9400 6500 9400
Wire Wire Line
	6500 9300 6200 9300
Wire Wire Line
	6200 9200 6500 9200
Entry Wire Line
	7800 9200 7900 9300
Text Label 6200 9800 0    50   ~ 0
LED_S6
Text Label 6200 9700 0    50   ~ 0
LED_S5
Text Label 6200 9600 0    50   ~ 0
LED_S4
Text Label 6200 9500 0    50   ~ 0
LED_S3
Text Label 6200 9400 0    50   ~ 0
LED_S2
Text Label 6200 9300 0    50   ~ 0
LED_S1
Text Label 6200 9200 0    50   ~ 0
LED_S0
Entry Wire Line
	6100 9700 6200 9800
Entry Wire Line
	6100 9600 6200 9700
Entry Wire Line
	6100 9500 6200 9600
Entry Wire Line
	6100 9400 6200 9500
Entry Wire Line
	6100 9300 6200 9400
Entry Wire Line
	6100 9200 6200 9300
Entry Wire Line
	6100 9100 6200 9200
Wire Wire Line
	7500 8050 7800 8050
Wire Wire Line
	6200 8550 6500 8550
Wire Wire Line
	6500 8450 6200 8450
Wire Wire Line
	6200 8350 6500 8350
Wire Wire Line
	6500 8250 6200 8250
Wire Wire Line
	6200 8150 6500 8150
Wire Wire Line
	6500 8050 6200 8050
Wire Wire Line
	6200 7950 6500 7950
$Comp
L Display_Character:LTS-6960HR AFF3
U 1 1 60B00F52
P 7000 8350
F 0 "AFF3" H 7000 9017 50  0000 C CNN
F 1 "LTS-6960HR" H 7000 8926 50  0000 C CNN
F 2 "Display_7Segment:7SegmentLED_LTS6760_LTS6780" H 7000 7750 50  0001 C CNN
F 3 "https://datasheet.octopart.com/LTS-6960HR-Lite-On-datasheet-11803242.pdf" H 7000 8350 50  0001 C CNN
	1    7000 8350
	1    0    0    -1  
$EndComp
Entry Wire Line
	7800 8050 7900 8150
Text Label 6200 8550 0    50   ~ 0
LED_S6
Text Label 6200 8450 0    50   ~ 0
LED_S5
Text Label 6200 8350 0    50   ~ 0
LED_S4
Text Label 6200 8250 0    50   ~ 0
LED_S3
Text Label 6200 8150 0    50   ~ 0
LED_S2
Text Label 6200 8050 0    50   ~ 0
LED_S1
Text Label 6200 7950 0    50   ~ 0
LED_S0
Entry Wire Line
	6100 8450 6200 8550
Entry Wire Line
	6100 8350 6200 8450
Entry Wire Line
	6100 8250 6200 8350
Entry Wire Line
	6100 8150 6200 8250
Entry Wire Line
	6100 8050 6200 8150
Entry Wire Line
	6100 7950 6200 8050
Entry Wire Line
	6100 7850 6200 7950
Connection ~ 6100 7450
Wire Bus Line
	4200 7450 6100 7450
Wire Bus Line
	4100 7250 6000 7250
Wire Bus Line
	6000 7250 7900 7250
Connection ~ 6000 7250
NoConn ~ 5600 9900
NoConn ~ 5600 8650
Wire Wire Line
	5600 9300 5900 9300
Wire Wire Line
	4300 9800 4600 9800
Wire Wire Line
	4600 9700 4300 9700
Wire Wire Line
	4300 9600 4600 9600
Wire Wire Line
	4600 9500 4300 9500
Wire Wire Line
	4300 9400 4600 9400
Wire Wire Line
	4600 9300 4300 9300
Wire Wire Line
	4300 9200 4600 9200
$Comp
L Display_Character:LTS-6960HR AFF2
U 1 1 60A89D10
P 5100 9600
F 0 "AFF2" H 5100 10267 50  0000 C CNN
F 1 "LTS-6960HR" H 5100 10176 50  0000 C CNN
F 2 "Display_7Segment:7SegmentLED_LTS6760_LTS6780" H 5100 9000 50  0001 C CNN
F 3 "https://datasheet.octopart.com/LTS-6960HR-Lite-On-datasheet-11803242.pdf" H 5100 9600 50  0001 C CNN
	1    5100 9600
	1    0    0    -1  
$EndComp
Entry Wire Line
	5900 9300 6000 9400
Text Label 4300 9800 0    50   ~ 0
LED_S6
Text Label 4300 9700 0    50   ~ 0
LED_S5
Text Label 4300 9600 0    50   ~ 0
LED_S4
Text Label 4300 9500 0    50   ~ 0
LED_S3
Text Label 4300 9400 0    50   ~ 0
LED_S2
Text Label 4300 9300 0    50   ~ 0
LED_S1
Text Label 4300 9200 0    50   ~ 0
LED_S0
Entry Wire Line
	4200 9700 4300 9800
Entry Wire Line
	4200 9600 4300 9700
Entry Wire Line
	4200 9500 4300 9600
Entry Wire Line
	4200 9400 4300 9500
Entry Wire Line
	4200 9300 4300 9400
Entry Wire Line
	4200 9200 4300 9300
Entry Wire Line
	4200 9100 4300 9200
Wire Wire Line
	5600 8050 5900 8050
Wire Wire Line
	4300 8550 4600 8550
Wire Wire Line
	4600 8450 4300 8450
Wire Wire Line
	4300 8350 4600 8350
Wire Wire Line
	4600 8250 4300 8250
Wire Wire Line
	4300 8150 4600 8150
Wire Wire Line
	4600 8050 4300 8050
Wire Wire Line
	4300 7950 4600 7950
Wire Wire Line
	4000 10000 3700 10000
$Comp
L Display_Character:LTS-6960HR AFF1
U 1 1 6090E8FF
P 5100 8350
F 0 "AFF1" H 5100 9017 50  0000 C CNN
F 1 "LTS-6960HR" H 5100 8926 50  0000 C CNN
F 2 "Display_7Segment:7SegmentLED_LTS6760_LTS6780" H 5100 7750 50  0001 C CNN
F 3 "https://datasheet.octopart.com/LTS-6960HR-Lite-On-datasheet-11803242.pdf" H 5100 8350 50  0001 C CNN
	1    5100 8350
	1    0    0    -1  
$EndComp
$Comp
L Device:R R1
U 1 1 6077F45E
P 3250 5200
F 0 "R1" V 3300 5000 50  0000 C CNN
F 1 "220" V 3300 4800 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3180 5200 50  0001 C CNN
F 3 "~" H 3250 5200 50  0001 C CNN
	1    3250 5200
	0    -1   -1   0   
$EndComp
Text Label 4000 10000 2    50   ~ 0
LED_D6
Text Label 4000 8400 2    50   ~ 0
LED_D5
Text Label 7800 9200 2    50   ~ 0
LED_D4
Text Label 5900 9300 2    50   ~ 0
LED_D3
Text Label 9700 7950 2    50   ~ 0
LED_D2
Text Label 7800 8050 2    50   ~ 0
LED_D1
Text Label 5900 8050 2    50   ~ 0
LED_D0
Wire Wire Line
	7750 6000 10250 6000
Wire Wire Line
	7750 5900 10250 5900
Wire Wire Line
	7750 5800 10250 5800
Wire Wire Line
	7750 5700 10250 5700
Wire Wire Line
	7750 5600 10250 5600
Wire Wire Line
	7750 5500 10250 5500
Wire Wire Line
	7750 5400 10250 5400
Text Label 10250 5400 2    50   ~ 0
LED_D0
Text Label 10250 5500 2    50   ~ 0
LED_D1
Text Label 10250 5600 2    50   ~ 0
LED_D2
Text Label 10250 5700 2    50   ~ 0
LED_D3
Text Label 10250 5800 2    50   ~ 0
LED_D4
Text Label 10250 5900 2    50   ~ 0
LED_D5
Text Label 10250 6000 2    50   ~ 0
LED_D6
Entry Wire Line
	10350 5500 10250 5400
Entry Wire Line
	10350 5600 10250 5500
Entry Wire Line
	10350 5700 10250 5600
Entry Wire Line
	10350 5800 10250 5700
Entry Wire Line
	10350 5900 10250 5800
Entry Wire Line
	10350 6000 10250 5900
Entry Wire Line
	10350 6100 10250 6000
Entry Wire Line
	5900 8050 6000 8150
Entry Wire Line
	4000 10000 4100 10100
Entry Wire Line
	4000 8400 4100 8500
Entry Wire Line
	4000 8400 4100 8500
Connection ~ 3700 9400
Wire Wire Line
	3600 9400 3700 9400
Wire Wire Line
	3700 9400 3700 9700
Wire Wire Line
	3700 9700 3700 10000
Connection ~ 3700 9700
Wire Wire Line
	3600 9700 3700 9700
Connection ~ 3700 10000
Wire Wire Line
	3700 10000 3600 10000
Wire Wire Line
	3700 9100 3700 9400
Wire Wire Line
	3600 9100 3700 9100
Wire Wire Line
	2800 5800 3100 5800
Wire Wire Line
	3100 5700 2800 5700
Wire Wire Line
	2800 5600 3100 5600
Wire Wire Line
	3100 5500 2800 5500
Wire Wire Line
	2800 5400 3100 5400
Wire Wire Line
	3100 5300 2800 5300
Wire Wire Line
	2800 5200 3100 5200
Text Label 2800 10000 0    50   ~ 0
LED_S6
Text Label 2800 9700 0    50   ~ 0
LED_S5
Text Label 2800 9400 0    50   ~ 0
LED_S4
Text Label 2800 9100 0    50   ~ 0
LED_S3
Wire Wire Line
	3300 10000 2800 10000
Wire Wire Line
	2800 9700 3300 9700
Wire Wire Line
	3300 9400 2800 9400
Wire Wire Line
	2800 9100 3300 9100
Entry Wire Line
	2700 9900 2800 10000
Entry Wire Line
	2700 9600 2800 9700
Entry Wire Line
	2700 9300 2800 9400
Entry Wire Line
	2700 9000 2800 9100
Text Label 2800 8700 0    50   ~ 0
LED_S2
Text Label 2800 8600 0    50   ~ 0
LED_S1
Text Label 2800 8500 0    50   ~ 0
LED_S0
Wire Wire Line
	3300 8700 2800 8700
Wire Wire Line
	2800 8600 3300 8600
Wire Wire Line
	3300 8500 2800 8500
Entry Wire Line
	2700 8600 2800 8700
Entry Wire Line
	2700 8500 2800 8600
Entry Wire Line
	2700 8400 2800 8500
Text Label 2800 8400 0    50   ~ 0
LED_S6
Text Label 2800 8300 0    50   ~ 0
LED_S5
Text Label 2800 8200 0    50   ~ 0
LED_S4
Text Label 2800 8100 0    50   ~ 0
LED_S3
Text Label 2800 8000 0    50   ~ 0
LED_S2
Text Label 2800 7900 0    50   ~ 0
LED_S1
Text Label 2800 7800 0    50   ~ 0
LED_S0
Wire Wire Line
	2800 8300 3300 8300
Wire Wire Line
	3300 8200 2800 8200
Wire Wire Line
	2800 8100 3300 8100
Wire Wire Line
	2800 7900 3300 7900
Wire Wire Line
	3300 7800 2800 7800
Entry Wire Line
	2700 8300 2800 8400
Entry Wire Line
	2700 8200 2800 8300
Entry Wire Line
	2700 8100 2800 8200
Entry Wire Line
	2700 8000 2800 8100
Entry Wire Line
	2700 7900 2800 8000
Entry Wire Line
	2700 7800 2800 7900
Entry Wire Line
	2700 7700 2800 7800
Text Label 4300 8550 0    50   ~ 0
LED_S6
Text Label 4300 8450 0    50   ~ 0
LED_S5
Text Label 4300 8350 0    50   ~ 0
LED_S4
Text Label 4300 8250 0    50   ~ 0
LED_S3
Text Label 4300 8150 0    50   ~ 0
LED_S2
Text Label 4300 8050 0    50   ~ 0
LED_S1
Text Label 4300 7950 0    50   ~ 0
LED_S0
Entry Wire Line
	4200 8450 4300 8550
Entry Wire Line
	4200 8350 4300 8450
Entry Wire Line
	4200 8250 4300 8350
Entry Wire Line
	4200 8150 4300 8250
Entry Wire Line
	4200 8050 4300 8150
Entry Wire Line
	4200 7950 4300 8050
Entry Wire Line
	4200 7850 4300 7950
Connection ~ 4200 7450
Connection ~ 2700 7450
Wire Bus Line
	2700 7450 4200 7450
Text Label 2800 5800 0    50   ~ 0
LED_S6
Text Label 2800 5700 0    50   ~ 0
LED_S5
Text Label 2800 5600 0    50   ~ 0
LED_S4
Text Label 2800 5500 0    50   ~ 0
LED_S3
Text Label 2800 5400 0    50   ~ 0
LED_S2
Text Label 2800 5300 0    50   ~ 0
LED_S1
Text Label 2800 5200 0    50   ~ 0
LED_S0
Wire Wire Line
	3900 5800 3400 5800
Wire Wire Line
	3400 5700 3900 5700
Wire Wire Line
	3900 5600 3400 5600
Wire Wire Line
	3400 5500 3900 5500
Wire Wire Line
	3900 5400 3400 5400
Wire Wire Line
	3400 5300 3900 5300
Wire Wire Line
	3900 5200 3400 5200
Entry Wire Line
	2700 5700 2800 5800
Entry Wire Line
	2700 5600 2800 5700
Entry Wire Line
	2700 5500 2800 5600
Entry Wire Line
	2700 5400 2800 5500
Entry Wire Line
	2700 5300 2800 5400
Entry Wire Line
	2700 5200 2800 5300
Entry Wire Line
	2700 5100 2800 5200
$Comp
L Device:LED D1
U 1 1 60331377
P 3450 9100
F 0 "D1" H 3443 8845 50  0000 C CNN
F 1 "LED" H 3443 8936 50  0000 C CNN
F 2 "LED_THT:LED_D3.0mm" H 3450 9100 50  0001 C CNN
F 3 "~" H 3450 9100 50  0001 C CNN
	1    3450 9100
	1    0    0    -1  
$EndComp
$Comp
L Device:R R7
U 1 1 60B99B64
P 3250 5800
F 0 "R7" V 3300 5600 50  0000 C CNN
F 1 "220" V 3300 5400 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3180 5800 50  0001 C CNN
F 3 "~" H 3250 5800 50  0001 C CNN
	1    3250 5800
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R6
U 1 1 60B99366
P 3250 5700
F 0 "R6" V 3300 5500 50  0000 C CNN
F 1 "220" V 3300 5300 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3180 5700 50  0001 C CNN
F 3 "~" H 3250 5700 50  0001 C CNN
	1    3250 5700
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R5
U 1 1 60B98B37
P 3250 5600
F 0 "R5" V 3300 5400 50  0000 C CNN
F 1 "220" V 3300 5200 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3180 5600 50  0001 C CNN
F 3 "~" H 3250 5600 50  0001 C CNN
	1    3250 5600
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R4
U 1 1 60B98389
P 3250 5500
F 0 "R4" V 3300 5300 50  0000 C CNN
F 1 "220" V 3300 5100 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3180 5500 50  0001 C CNN
F 3 "~" H 3250 5500 50  0001 C CNN
	1    3250 5500
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R3
U 1 1 60B97BFD
P 3250 5400
F 0 "R3" V 3300 5200 50  0000 C CNN
F 1 "220" V 3300 5000 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3180 5400 50  0001 C CNN
F 3 "~" H 3250 5400 50  0001 C CNN
	1    3250 5400
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R2
U 1 1 60B974C8
P 3250 5300
F 0 "R2" V 3300 5100 50  0000 C CNN
F 1 "220" V 3300 4900 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0204_L3.6mm_D1.6mm_P7.62mm_Horizontal" V 3180 5300 50  0001 C CNN
F 3 "~" H 3250 5300 50  0001 C CNN
	1    3250 5300
	0    -1   -1   0   
$EndComp
Connection ~ 3700 8000
Connection ~ 3700 9100
Connection ~ 3700 8700
Wire Wire Line
	3700 9100 3700 8700
Connection ~ 3700 8600
Wire Wire Line
	3700 8600 3700 8700
Wire Wire Line
	3700 8500 3700 8600
Connection ~ 3700 8400
Connection ~ 3700 8300
Wire Wire Line
	3700 8200 3700 8300
Wire Wire Line
	3700 8300 3700 8400
Connection ~ 3700 8200
Connection ~ 3700 8100
Wire Wire Line
	3700 8100 3700 8200
Wire Wire Line
	3700 8000 3700 8100
Connection ~ 3700 7900
Wire Wire Line
	3700 7900 3700 8000
Wire Wire Line
	3700 7800 3700 7900
Wire Wire Line
	3700 8400 4000 8400
Wire Wire Line
	3300 8400 2800 8400
Wire Wire Line
	3300 8000 2800 8000
$Comp
L LED:HDSP-4830_2 BAR1
U 1 1 60332800
P 3500 8300
F 0 "BAR1" H 3500 8967 50  0000 C CNN
F 1 "HDSP-4830_2" H 3500 8876 50  0000 C CNN
F 2 "Display:HDSP-4830" H 3500 7500 50  0001 C CNN
F 3 "https://docs.broadcom.com/docs/AV02-1798EN" H 1500 8500 50  0001 C CNN
	1    3500 8300
	-1   0    0    1   
$EndComp
Wire Bus Line
	4100 7250 4100 10100
Wire Bus Line
	6000 7250 6000 9400
Wire Bus Line
	9800 7250 9800 8150
Wire Bus Line
	7900 7250 7900 9400
Wire Bus Line
	8000 7450 8000 8450
Wire Bus Line
	10350 5500 10350 7250
Wire Bus Line
	2700 5100 2700 7450
Wire Bus Line
	6100 7450 6100 9700
Wire Bus Line
	2700 7450 2700 9900
Wire Bus Line
	4200 7450 4200 9700
$Comp
L Connector:Conn_01x07_Male J1
U 1 1 60C2A21B
P 4100 5500
F 0 "J1" H 4072 5432 50  0000 R CNN
F 1 "Conn_01x07_Male" H 4072 5523 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x07_P2.54mm_Vertical" H 4100 5500 50  0001 C CNN
F 3 "~" H 4100 5500 50  0001 C CNN
	1    4100 5500
	-1   0    0    1   
$EndComp
$Comp
L Connector:Conn_01x07_Male J2
U 1 1 60C3182A
P 7550 5700
F 0 "J2" H 7658 6181 50  0000 C CNN
F 1 "Conn_01x07_Male" H 7658 6090 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x07_P2.54mm_Vertical" H 7550 5700 50  0001 C CNN
F 3 "~" H 7550 5700 50  0001 C CNN
	1    7550 5700
	1    0    0    -1  
$EndComp
$EndSCHEMATC
