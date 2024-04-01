void setup() {}


void output_moisture(uint8_t moisture) {}


uint8_t read_moisture() {}


void open_valve() {}


void close_valve() {}


void water(uint8_t target_moisture) {
  open_valve();
  uint8_t current_moisture = read_moisture();
  while (current_moisture < target_moisture) {
    output_moisture(current_moisture);
    current_moisture = read_moisture();
  }
  close_valve();
}


void loop() {
  uint8_t target_moisture = 80;
  uint8_t current_moisture = read_moisture();
  if (current_moisture < target_moisture) {
    water(target_moisture);
  }
  output_moisture(current_moisture);
}
