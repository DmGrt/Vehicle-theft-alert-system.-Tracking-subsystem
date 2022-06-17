u32 APP_DATA_RUN_BASE; //поточна адреса app 
u32 APP_DATA_STORAGE_BASE; // адреса зберігання коду оновлення app 
const unsigned char app_new_data[] = { 
#include app_new 
};//дані оновлення коду 
void update_app_test_start（） 
{ 
…….. 
//Отримати адресу та розмір арр
APP_DATA_RUN_BASE = eat_get_app_base_addr(); // отримати адресу app
app_space_value = eat_get_app_space(); //отримати розмір app 
APP_DATA_STORAGE_BASE = APP_DATA_RUN_BASE + (app_space_value>>1); // зберігти адресу app у оновленому файлі
// стерти область флеш-пам’яті для оновлення адреси сховища
eat_flash_erase(APP_DATA_STORAGE_BASE,update_app_data_len); 
…….. 
// завантажте програму оновлення в область флеш-пам'яті, початкова адреса APP_DATA_STORAGE_BASE 
eat_flash_write(APP_DATA_STORAGE_BASE, app_new_data, app_datalen); 
……… 
// оновлення 
eat_update_app((void*)(APP_DATA_RUN_BASE), (void*)(APP_DATA_STORAGE_BASE), app_datalen, EAT_PIN_NUM, EAT_PIN_NUM, EAT_FALS
