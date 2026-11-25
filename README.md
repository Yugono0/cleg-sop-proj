# B. Braun Infusomat Space - Debugging SOP Test Program

An integrated Arduino program to execute a Standard Operating Procedure
(SOP) debugging routine for B. Braun Infusomat Space components. Each
subsystem is tested by its own module in `src/`.

## Subsystems tested

- Push Button & LCD
- Optical Sensor Block
- OEM Stepper Motor and Driver Circuit
- Integrated target component and indicator LED

## Hardware requirements

- Arduino Board
- B. Braun Infusomat Space Stepper Motor & compatible driver
- Optical Sensor Block
- 16x2 LCD
- Push Button
- OEM Component switch

## Files

| File | What it is |
| --- | --- |
| `src/OEMTest.ino` | Main sketch: OEM component test. LED on digital pin 13, OEM sensor on analog pin A0, threshold 100, serial at 9600 baud. Prints `unblocked` when the optical sensor is unblocked. |
| `src/OEMTest.h` / `src/OEMTest.cpp` | OEM test module (see note below). |
| `src/OpticalSensorTest.h` / `src/OpticalSensorTest.cpp` | Optical sensor block test. |
| `src/StepperTest.h` / `src/StepperTest.cpp` | Stepper motor and driver circuit test. |

## Usage

1. Wire the hardware as listed above (OEM LED to pin 13, OEM sensor to A0).
2. Open `src/OEMTest.ino` in the Arduino IDE.
3. Select your Arduino board and port, then upload.
4. Open the Serial Monitor at 9600 baud to see the test output.

## Known issues

- `src/OEMTest.ino` is a work-in-progress draft: as committed, the sketch
  is incomplete (the `loop()` body and some declarations are unfinished),
  so read it before relying on it as a finished test.
- There is no wiring diagram or pin list in the repo beyond the pins named
  in `OEMTest.ino` (LED pin 13, OEM sensor A0).
