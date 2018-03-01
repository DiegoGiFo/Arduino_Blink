class Blinker {
private:
  bool status;

public:
  Blinker():
  status(false) {

  }

  void toggle() {
    this->status = !this->status;
    digitalWrite(13, this->status);   // turn the LED on (HIGH is the voltage level)
  }
}
