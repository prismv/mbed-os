/* Copyright (c) 2017 mbed.org, MIT License
*
* Permission is hereby granted, free of charge, to any person obtaining a copy of this software
* and associated documentation files (the "Software"), to deal in the Software without
* restriction, including without limitation the rights to use, copy, modify, merge, publish,
* distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all copies or
* substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
* BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
* DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#if defined(TARGET_DISCO_L476VG)
#include "USBHAL_STM32L476VG.h"

#elif defined(TARGET_DISCO_L475VG_IOT01A)
#include "USBHAL_STM32L475VG.h"

#elif defined(TARGET_DISCO_L072CZ_LRWAN1)
#include "USBHAL_STM32L072CZ.h"

#elif defined(TARGET_NUCLEO_F303ZE)
#include "USBHAL_STM32F303ZE.h"

#elif defined(TARGET_NUCLEO_F103RB)
#include "USBHAL_STM32F103RB.h"

#elif defined(TARGET_DISCO_F769NI)
#include "USBHAL_STM32F769NI.h"

#elif defined(TARGET_DISCO_L053C8)
#include "USBHAL_STM32L053C8.h"

#else /* default configuration */
#include "USBHAL_STM_144_64pins.h"
  		  
#endif
