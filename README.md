# Prosty system operacyjny na Raspberry Pi 3 - koncepcja programowania bare metal
Oparte na: https://s-matyukevich.github.io/raspberry-pi-os/

Dokumentacja: https://docs.google.com/document/d/1fjRd0hPeBS4jnkQneIyvN7t41PuxX-PIAfVoDRDlbbA/edit?usp=sharing 

## Specyfikacja sprzętowa:

#### Główna platforma sprzętowa: Raspberry Pi model 3B v1.2

#### CPU: ARM Cortex-A53

#### Instruction set: ARMv8-A

## Koncepcja projektu:


Projekt ma zaprezentować koncepcję programowania typu bare metal. Zakłada implementację własnego modelu prostego systemu operacyjnego, spełniającego niżej wymienioną funkcjonalność, oraz prezentację działania stworzonego systemu na przykładzie prostego programu. 

### Oczekiwana funkcjonalność:

- inicjalizacja jądra systemu
- inicjalizacja procesora
- obsługa wyjątków
- process scheduler
- zarządzanie pamięcią wirtualną
- obsługa procesów użytkownika i wywołań systemowych

## Jak korzystać z repozytorium?

Na poszczególnych branchach znajdują się kody do poszczególnych części projektu omawianych w dokumentacji. Aby uruchomić projekt, potrzebne są:

- Raspberry Pi 3 model B (we wspomnianym wyżej repozytorium projektu, na którym się opieramy, istnieją dyskusje na temat uruchomienia projektu na modelu B+ oraz na Raspberry Pi 4, więc polecemy zajrzeć tam, jeśli nie posiada się zalecanego modelu)
- USB to TTL serial cabel - służy do testowania systemu i przesyłania informacji z Raspberry Pi na terminal
- karta SD z zainstalowanym Rasbpian OS, lub Rasberry Pi OS, lub czysta karta, którą trzeba będzie sformatować w odpowieni sposób - na karcie SD będziemy wprowadzać nowe wersje systemu do urządzenia 

