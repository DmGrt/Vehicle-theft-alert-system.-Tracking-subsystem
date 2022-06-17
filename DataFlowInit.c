#pragma arm section rodata = "APP_CFG" 

APP_ENTRY_FLAG 

#pragma arm section rodata 
#pragma arm section rodata="APPENTRY" 



constEatEntry_stAppEntry = 
{ 
app_main, 
app_func_ext1, 
(app_user_func)app_user1,//app_user1, 
(app_user_func)app_user2,//app_user2, 
(app_user_func)app_user3,//app_user3, 
(app_user_func)app_user4,//app_user4, 
(app_user_func)app_user5,//app_user5, 
(app_user_func)app_user6,//app_user6, 
(app_user_func)EAT_NULL,//app_user7, 
(app_user_func)EAT_NULL,//app_user8, 
}; 
#pragma arm section rodata
