#include "LedArray.h"

LEDArray::LEDArray(ArduinoLEDMatrix &matrix) {
  this->matrix = matrix;
}

void LEDArray::init() {
  matrix.begin();
  }

void LEDArray::displayHappyFace() { 
  matrix.loadFrame(LEDMATRIX_EMOJI_HAPPY);
}

void LEDArray::displaySadFace() {
  matrix.loadFrame(LEDMATRIX_EMOJI_SAD);
}

void LEDArray::updateDisplay(bool isFollowingLine) {
  if (isFollowingLine) {
    displayHappyFace();
  } else {
    displaySadFace();
  }
}
