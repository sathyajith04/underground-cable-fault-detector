<h1 align="center">Underground Cable Fault Detection System</h1>

<p align="center">
Simulation-based system for detecting and locating faults in underground power cables using the voltage drop principle.
</p>

<hr>

<h2>Overview</h2>

<p>
Underground power cables are widely used in modern power distribution networks because they are protected from environmental conditions and require less maintenance than overhead lines. However, detecting faults in underground cables is challenging because the cables are not visible.
</p>

<p>
This project presents a simulation-based system that detects and estimates the location of faults in underground cables using the voltage drop principle. The system was designed and tested using <b>Proteus Design Suite</b> with an <b>ESP32 microcontroller</b> to analyze electrical behavior during different fault conditions.
</p>

<hr>

<h2>Objective</h2>

<ul>
<li>Detect faults in underground electrical cables</li>
<li>Estimate the approximate distance to the fault</li>
<li>Simulate cable behavior under fault conditions</li>
<li>Demonstrate the voltage drop method using embedded systems</li>
</ul>

<hr>

<h2>Working Principle</h2>

<p>
The system operates based on the <b>voltage drop method</b>. When a fault occurs along an underground cable, the electrical resistance and voltage distribution change along the cable length.
</p>

<p>
By measuring the voltage at specific points, the system can estimate the approximate location of the fault. The ESP32 reads the voltage levels and processes the data to determine the fault position relative to the cable length.
</p>

<hr>

<h2>Key Features</h2>

<ul>
<li>Fault detection in underground power cables</li>
<li>Fault location estimation using voltage analysis</li>
<li>Proteus-based circuit simulation</li>
<li>Microcontroller-based monitoring</li>
<li>Educational demonstration of cable fault diagnostics</li>
</ul>

<hr>

<h2>Tools and Technologies</h2>

<ul>
<li>Proteus Design Suite</li>
<li>ESP32 Microcontroller</li>
<li>Embedded C / Arduino IDE</li>
</ul>

<hr>

<h2>System Components</h2>

<ul>
<li>ESP32 Microcontroller</li>
<li>Resistive network representing cable segments</li>
<li>Voltage measurement points</li>
<li>Fault simulation switches</li>
<li>Simulation monitoring interface</li>
</ul>

<hr>

<h2>Project Structure</h2>

<pre>
underground-cable-fault-detector
│
├── circuit.png
├── esp32_code.ino
├── cable_fault_detector.pdsprj
└── README.md
</pre>

<hr>
