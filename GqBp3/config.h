#define FLOW_TAP_TERM 100
#define USB_SUSPEND_WAKEUP_DELAY 0
#define SERIAL_NUMBER "GqBp3/x9MbAK"
#define LAYER_STATE_8BIT
#define HSS(report) host_system_send(record->event.pressed ? report : 0); return false
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

