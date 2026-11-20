MQ-4 LATCHED ALERT DASHBOARD V2

WIRING
MQ-4 VCC -> Arduino 5V
MQ-4 GND -> Arduino GND
MQ-4 AO  -> Arduino A0
MQ-4 DO  -> leave disconnected

UPLOAD
1. Open MQ4_Arduino_Test.ino in Arduino IDE.
2. Select Arduino UNO and the correct COM port, then upload.
3. Close Serial Monitor.
4. Open index.html through VS Code Live Server in Chrome/Edge.
5. Click CONNECT USB and select the Arduino COM port.

ALERT BEHAVIOUR
- A raw ADC value at/above the configured alert threshold triggers a latched alert.
- The browser alarm continues even if the value later falls.
- SILENCE SOUND silences audio only; the visual alert and timer remain.
- A 2-minute persistence timer starts at alert activation.
- At 2 minutes, if the latest real reading is still at/above the threshold, the dashboard displays a simulated escalation notice.
- This is a message on the dashboard only. It DOES NOT contact emergency services, authorities, SMS, email, or any external party.
- Reset is manual. For real readings, reset is blocked while the latest reading remains above the alert threshold.
- RUN ALERT TEST simulates the alert and two-minute timer. STOP TEST cancels the simulation.

IMPORTANT SENSOR LIMITATIONS & SAFETY
MQ-4 is intended for methane / combustible gas sensing. It is NOT a smoke detector and does NOT detect flames. Do not label this as "fire detected".
ADC values are raw counts, not methane concentration in ppm. The default thresholds are illustrative only and are not certified safety limits.
The browser alarm is limited by browser/device audio settings; this page cannot force the computer to maximum volume. Keep listening volume at a safe level.
This is an educational prototype, not a certified gas/fire alarm. Do not use it for life-safety decisions. Use approved, certified gas and smoke alarms. Never test with matches, flames, deliberate gas release, smoke, or chemicals. If you suspect a gas leak or fire, move away and follow local emergency guidance; do not wait for this prototype's timer.
