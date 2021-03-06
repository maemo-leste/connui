#ifndef CONNUI_FLIGHTMODE_H
#define CONNUI_FLIGHTMODE_H

typedef void (*connui_flightmode_notify) (dbus_bool_t offline, gpointer user_data);

dbus_bool_t connui_flightmode_off_confirm();
dbus_bool_t connui_flightmode_off();
dbus_bool_t connui_flightmode_on();
void connui_flightmode_close(connui_flightmode_notify callback);
gboolean connui_flightmode_status(connui_flightmode_notify callback, gpointer user_data);

#endif
