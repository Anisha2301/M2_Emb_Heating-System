# Requirements
# Intorduction
The Seat Heating and Monitoring System is capable of keeping car seats at the desired temperature. The button sensor in our project checks if the passenger is sitting or not, and once seated, the passenger must select the temperature according to his or her needs, after which the seat begins to heat and the corresponding temperature is displayed on the LCD.

# Research
- The primary cause for the significant sales of car seat heaters is the rising number of vehicle sales. However, due to the covid-19 pandemic, there has been a severe drop in worldwide car sales, and there is still concern due to the mounting cases of covid-19 in several parts of the world. According to a news release from acea.be, the European Union saw a 19.3 percent drop in new passenger car registrations in February 2021 as a result of containment measures and uncertainties.
- Aside from the worries, manufacturers are concentrating on new product launches and developments in automobile seat heaters in order to deliver the best possible comfort to clients. Customers are encouraged to increase demand for automobile seat heaters since they provide relief from painful backs and deliver rapid warmth.
- In June 2020, Indian Motorcycle, America's First Motorcycle Company, launched the Clima Command Classic Seat, which provides heated and cooled comfort to riders and passengers. The thermoelectric technology that pumps heat away from the rider, a ducting system that cools the thermoelectric module, and a grapheme, which is a highly conductive and flexible material that allows for heating and cooling distribution while maintaining superior comfort, are the key elements used in the design of the seat. Such market innovations are based on the assumption that demand will remain stable.

Ref-: https://www.futuremarketinsights.com/reports/automotive-seat-heater-market .

# Cost and Features

## Cost -:
 The kits are simple, the installation is straightforward, and the cost is surprisingly affordable (under $500 for most applications). If you live in a cold climate, seat heaters are a nice add-on your dealership can install for a modest fee.
 
 ## Features -:
-  It determines the existance of the passengers.
-  The passenger or driver is capable of accessing the temperature according to there requirement.
-  Used in Europeron Countries.
# Defining Our System
The operation of the heat control system is coded in embedded c and the working is demonstrated using a simuation software called SimulIDE.
This system is usually done in 3 steps or in 3 activities
When the two switches are closed, the first LED glows indicating the actuation of the system and the heater.
Then the analog input from the temperature sensor is received and digitized using ADC.
The digitized temperature input is visualized using Pulse Width Modulation.

# SWOT ANALYSIS

## Strength -:
- Sets the temperature according to user need.
- Its less expensive.

## Weakness -:
- It is best for those countries where the room temperature will be below -5* Celsius.

## Opportunities -:
- Implementation in better code which serves various other purposes
- Can be interfaced with automatic gear control unit.

## Threats -:
- Not suitable for average or high temperature environment.
- This device cannot be used in equatorial regions.

# 4 W's and 1'H
* WHAT: Seat Heating And Monitoring System.
* WHERE: Used in Europeron Countries.
* WHEN: At very low temperatires
* WHY: For being warm and comfortable.
* HOW:By varying the temperature according to the requirement of the user.

 # Detail Requirements
## High Level Requirements
| Requirements | Description |
| --- | --- |
| HLR1 | Microcontroller |
| HLR2 | Temperature Sensor |
| HLR3 | LCD Display or LED&#39;s(different colored) |
| HLR4 | Temprature Generation |
| HLR5 | Softwares to Implement |
## Low Level Requirements
| Requirements | Description |
| --- | --- |
| LLR1\_1 | ATmega328 |
| LLR2\_1 | LM35 and ADC |
| LLR2\_2 | ADC with PWM |
| LLR3\_1 | LCD OR LED&#39;S |

