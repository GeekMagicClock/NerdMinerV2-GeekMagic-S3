// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: han-wt32

#ifndef _HAN_WT32_UI_H
#define _HAN_WT32_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_SplashScreen
void ui_SplashScreen_screen_init(void);
extern lv_obj_t * ui_SplashScreen;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_lblpassword;
extern lv_obj_t * ui_lblssid;
extern lv_obj_t * ui_lblversion;
// SCREEN: ui_HomeScreen
void ui_HomeScreen_screen_init(void);
extern lv_obj_t * ui_HomeScreen;
extern lv_obj_t * ui_btnconfirm;
void ui_event_btnpost(lv_event_t * e);
extern lv_obj_t * ui_btnpost;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_barhashrate;
extern lv_obj_t * ui_Label6;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_Label7;
extern lv_obj_t * ui_btndelete;
extern lv_obj_t * ui_Label8;
extern lv_obj_t * ui_Label10;
extern lv_obj_t * ui_lblhashrate;
extern lv_obj_t * ui_lblbestdiff;
extern lv_obj_t * ui_lbltemplates;
extern lv_obj_t * ui_lblvalid;
extern lv_obj_t * ui_lblshares32;
extern lv_obj_t * ui_lblclock;
extern lv_obj_t * ui_Label2;
void ui_event_btnpre(lv_event_t * e);
extern lv_obj_t * ui_btnpre;
extern lv_obj_t * ui_Label11;
extern lv_obj_t * ui_lbltotalhashrate;
extern lv_obj_t * ui_Label19;
extern lv_obj_t * ui_lbltemperature;
extern lv_obj_t * ui_Label5;
extern lv_obj_t * ui_Label9;
// SCREEN: ui_StatsScreen
void ui_StatsScreen_screen_init(void);
extern lv_obj_t * ui_StatsScreen;
extern lv_obj_t * ui_btnconfirm2;
void ui_event_btnpost2(lv_event_t * e);
extern lv_obj_t * ui_btnpost2;
extern lv_obj_t * ui_Image2;
extern lv_obj_t * ui_btndelete2;
void ui_event_btnpre2(lv_event_t * e);
extern lv_obj_t * ui_btnpre2;
extern lv_obj_t * ui_Label13;
extern lv_obj_t * ui_Label14;
extern lv_obj_t * ui_Label16;
// SCREEN: ui_ClockScreen
void ui_ClockScreen_screen_init(void);
extern lv_obj_t * ui_ClockScreen;
extern lv_obj_t * ui_Label18;
void ui_event_btnpre3(lv_event_t * e);
extern lv_obj_t * ui_btnpre3;
extern lv_obj_t * ui_btnconfirm3;
void ui_event_btnpost3(lv_event_t * e);
extern lv_obj_t * ui_btnpost3;
extern lv_obj_t * ui_btndelete3;
extern lv_obj_t * ui_lblclock2;
extern lv_obj_t * ui_Label15;
extern lv_obj_t * ui_Label17;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_sky_png);    // assets/sky.png
LV_IMG_DECLARE(ui_img_1552732429);    // assets/bitcoin-btc-logo-100.png
LV_IMG_DECLARE(ui_img_metal2_png);    // assets/metal2.png



LV_FONT_DECLARE(ui_font_calculator128);
LV_FONT_DECLARE(ui_font_calculator16);
LV_FONT_DECLARE(ui_font_calculator24);
LV_FONT_DECLARE(ui_font_calculator32);
LV_FONT_DECLARE(ui_font_calculator48);
LV_FONT_DECLARE(ui_font_star24);
LV_FONT_DECLARE(ui_font_star32);
LV_FONT_DECLARE(ui_font_start16);



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
