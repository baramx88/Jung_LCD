// event.h
#ifndef EVENT_H
#define EVENT_H

void Event_motor_ON();
void Event_motor_OFF();
void Event_error_ON();
void Event_error_OFF();
void Event_feces_ON();
void Event_feces_OFF();
void Event_connect_ON();
void Event_connect_OFF();
void Event_diaper_ON();
void Event_diaper_OFF();
void Event_tank_ON(float water_level);
void Event_power_ON();
void Event_power_OFF();
void Event_wifi_ON();
void Event_wifi_OFF();
void Event_bat_ON();
void Event_bat_OFF();
void Event_bat_LOW();

void waiting_event_handler(char* status);


#endif  // EVENT_H
