# ft_printf
*Because ft_putnbr() and ft_putstr() aren’t enough*

## Introduction
Recode of printf from the C standard library. Learn what is and how to implement variadic functions. This function will be reused in future 42 projects.

## Outline
This ft_printf project is designed with bonuses in mind from the start, structs will be used to store attributes of flags. ft_printf will work with the following flags and specifiers.

* Specifiers

| Specifier | Output |
| :-------: | :---------: |
| ``c`` | Character |
| ``s`` | String |
| ``d``,``i`` | Integer |
| ``p`` | Pointer address in hexadecimal |
| ``u`` | Unsigned integer |
| ``x`` | Unsigned hexadecimal integer (lowecase) |
| ``X`` | Unsigned hexadecimal integer (uppercase) |
| ``%`` | The % character |

* Flags (Bonus)

| Flag | Description |
| :--: | :---------: |
| (width) | The minimum width of the printed conversion |
| (precision) | The minimum number of characters in the printed conversion |
| ``-`` | Left aligns the printed conversion |
| ``0`` | Pads printed conversion with zeroes instead of spaces |
| ``.`` | Separates the width and precision variables |
| ``#`` | Prepends 0x or 0X to hexadecimal coversions |
| `` `` | A blank is placed before a positive number produced by a signed conversion |
| ``+`` | Places a sign (+ or -) before a number produced by a signed conversion|

## Workflow
[![ft_printf workflow](https://github.com/fractalfeeling/uploads/blob/b8a0ae2dcb7dfbae58886c5fcea18d41767acaa2/images/ft_printf_workflow.png)

## Score
[![lwee's 42 ft_printf Score](https://badge42.vercel.app/api/v2/cl5pppwsq001109mdiigy33za/project/2565622)](https://github.com/JaeSeoKim/badge42)

## Resources
* [ft_printf subject document](https://github.com/fractalfeeling/uploads/blob/706153dcc01349465c865a07985236d4a7bbe354/docs/ft_printf.pdf)
* Great [outline](https://github.com/edithturn/42-silicon-valley-ft-printf) of the project by *edithturn*. (Project requirements have since been changed and updated)
* [francinette](https://github.com/xicodomingues/francinette) tester by *xicodomingues*.
