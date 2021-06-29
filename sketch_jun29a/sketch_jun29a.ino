#include <ir_Coolix.h>
#include <ir_Sanyo.h>
#include <ir_Hitachi.h>
#include <ir_Panasonic.h>
#include <ir_Vestel.h>
#include <ir_Airwell.h>
#include <ir_MitsubishiHeavy.h>
#include <ir_Midea.h>
#include <ir_Gree.h>
#include <IRtimer.h>
#include <ir_Delonghi.h>
#include <ir_Samsung.h>
#include <ir_Truma.h>
#include <ir_Sharp.h>
#include <ir_Kelvinator.h>
#include <ir_NEC.h>
#include <ir_Electra.h>
#include <IRsend.h>
#include <IRac.h>
#include <ir_Daikin.h>
#include <ir_Carrier.h>
#include <IRremoteESP8266.h>
#include <i18n.h>
#include <ir_Trotec.h>
#include <ir_Tcl.h>
#include <ir_Goodweather.h>
#include <ir_Corona.h>
#include <ir_Neoclima.h>
#include <ir_Ecoclim.h>
#include <ir_Toshiba.h>
#include <ir_Technibel.h>
#include <ir_Teco.h>
#include <ir_Magiquest.h>
#include <ir_Argo.h>
#include <ir_Transcold.h>
#include <ir_Haier.h>
#include <IRrecv.h>
#include <ir_LG.h>
#include <IRutils.h>
#include <ir_Whirlpool.h>
#include <ir_Voltas.h>
#include <ir_Amcor.h>
#include <ir_Fujitsu.h>
#include <ir_Mitsubishi.h>
#include <IRtext.h>

#include <M5Stack.h>
const uint16_t kRecvPin = 36; //受信ピン(ADC対応)
const uint16_t kCaptureBufferSize = 1024;
const uint8_t kTimeout = 50;
IRrecv irrecv(kRecvPin, KCaptureBufferSize, kTimeout, true);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(50);

  irrect.enableIRIn();
}

void loop() {
  // put your main code here, to run repeatedly:
  decode_results results;
}
