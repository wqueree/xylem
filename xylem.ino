void setup() {}


void output_moisture(uint8_t moisture) {}


uint8_t read_moisture() {
    return 0;
}


void open_valve() {}


void close_valve() {}


void loop() {
    uint8_t target_moisture = 80;
    uint8_t current_moisture = read_moisture();
    while (current_moisture < target_moisture) {
        output_moisture(current_moisture);
        current_moisture = read_moisture();
    }
    output_moisture(current_moisture);
}
