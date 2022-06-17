Enumeration Varialble: 
typedefenum 
{ 
EAT_UART_1, EAT_UART_2, EAT_UART_3, EAT_UART_NUM, EAT_UART_NULL = 99 
} 
EatUart_enum;
 Typedefenum
 { 
EAT_UART_BAUD_1200 =1200, 
EAT_UART_BAUD_2400 =2400, 
EAT_UART_BAUD_4800 =4800, 
EAT_UART_BAUD_9600 =9600, 
EAT_UART_BAUD_19200 =19200, 
EAT_UART_BAUD_38400 =38400, 
EAT_UART_BAUD_57600 =57600, 
EAT_UART_BAUD_115200 =115200, 
EAT_UART_BAUD_230400 =230400, 
EAT_UART_BAUD_460800 =460800
} 
EatUartBaudrate; typedefenum 
{ 
EAT_UART_DATA_BITS_5=5, 
EAT_UART_DATA_BITS_6, 
EAT_UART_DATA_BITS_7, 
EAT_UART_DATA_BITS_8 
} 
EatUartDataBits_enum; 
Typedefenum
 { 
EAT_UART_STOP_BITS_1=1, 
EAT_UART_STOP_BITS_2, 
EAT_UART_STOP_BITS_1_5
} 
EatUartStopBits_enum; 
typedefenum 
{ 
EAT_UART_PARITY_NONE=0, 
EAT_UART_PARITY_ODD, 
EAT_UART_PARITY_EVEN, 
EAT_UART_PARITY_SPACE 
} 
EatUartParity_enum; 
Struct: 
typedef struct
 {
 EatUart_enumuart; 
} 
EatUart_st;
 Typedefstruct
 { 
EatUartBaudrate baud; 
EatUartDataBits_enumdataBits; 
EatUartStopBits_enumstopBits; 
EatUartParity_enum parity; 
}
 EatUartConfig_st;
