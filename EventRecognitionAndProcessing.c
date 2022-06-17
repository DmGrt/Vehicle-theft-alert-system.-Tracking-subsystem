EAT_PIN22_UART2_TXD = 22, /* GPIO, KROW4, UART2_TXD */ 
EAT_PIN23_UART2_RXD = 23, /* GPIO, KCOL4, UART2_RXD */ 
EAT_PIN38_ADC = 38, /* ADC */ 
EAT_PIN41_NETLIGHT = 41, /* GPIO */ 
EAT_PIN42_STATUS = 42, /* GPIO, SPI_DC */ 
EAT_PIN52_SIM2_DET = 52, /* GPIO, KROW3, EINT */ 
EAT_PIN57_GPIO1 = 57, /* GPIO, KROW2, PWM1*/ 
EAT_PIN58_GPIO2 = 58, /* GPIO, KROW0 */ 
EAT_PIN64_SDA = 64, /* GPIO, SDA */ 
EAT_PIN65_SCL = 65, /* GPIO, SCL */ 
EAT_PIN_NUM = 66 
} 
EatPinName_enum; 
typedefenum 
{ 
EAT_PIN_MODE_GPIO, 
EAT_PIN_MODE_KEY, 
EAT_PIN_MODE_EINT, 
EAT_PIN_MODE_UART, 
EAT_PIN_MODE_SPI, 
EAT_PIN_MODE_PWM, 
EAT_PIN_MODE_I2C, 
EAT_PIN_MODE_CLK, 
EAT_PIN_MODE_NUM 
} 
EatPinMode_enum; 
Typedefenum
 { 
EAT_GPIO_LEVEL_LOW, 
EAT_GPIO_LEVEL_HIGH 
} 
EatGpioLevel_enum; 
typedefenum { 
EAT_GPIO_DIR_INPUT, 
EAT_GPIO_DIR_OUTPUT, 
} 
EatGpioDir_enum; 


Визначення та обробка подій

EVENT： 
EAT_EVENT_INT 
Enumeration Definition： 
typedef enum { 
EAT_INT_TRIGGER_HIGH_LEVEL, /* високий рівень тригера*/ 
EAT_INT_TRIGGER_LOW_LEVEL, /* низький рівень тригера*/ 
EAT_INT_TRIGGER_RISING_EDGE, /* висхідний фронт*/ 
EAT_INT_TRIGGER_FALLING_EDGE, /* спадний фронт*/ 
EAT_INT_TRIGGER_NUM 
} 
EatIntTrigger_enum; /* GPIO EINT режим тригера */ 
Struct： 
typedefstruct { 
EatPinName_enum pin; /* пін */ 
EatGpioLevel_enum level; /* 1-високий рівень; 0-низький рівень*/ 
} 
EatInt_st; /* EAT_EVENT_INT data struct*/ 
Callback Function： 
typedef void (*eat_gpio_int_callback_func)(EatInt_st *interrupt); 
/* визначити функцію зворотного виклику переривання */
 voidint_test_handler_func (EatInt_st *interrupt)
{ 
//do something 
}
 /* встановити переривання */ 
eat_int_setup(EAT_PIN45_GPIO3, EAT_INT_TRIGGER_LOW_LEVEL, 100, int_test_handler_func); 
/* якщо функція зворотного виклику переривання не визначена (NULL)*/ 
//Get INT EVENT
eat_get_event(&event);
 if( EAT_EVENT_INT == event.event)
 { 
//do something }
/* налаштувати умову тригера переривання */ 
eat_int_set_trigger(EAT_PIN45_GPIO3, EAT_INT_TRIGGER_RISING_EDGE);
