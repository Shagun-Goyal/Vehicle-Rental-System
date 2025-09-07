# Vehicle-Rental-System
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Vehicle Rental System - C++ Project</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      background: #f5f7fa;
      margin: 0;
      padding: 0;
      color: #333;
    }
    header {
      background: #2c3e50;
      color: #fff;
      padding: 20px;
      text-align: center;
    }
    h1 {
      margin: 0;
      font-size: 28px;
    }
    .container {
      max-width: 900px;
      margin: 20px auto;
      padding: 20px;
      background: #fff;
      border-radius: 8px;
      box-shadow: 0 4px 8px rgba(0,0,0,0.1);
    }
    h2 {
      color: #2c3e50;
      border-bottom: 2px solid #3498db;
      padding-bottom: 5px;
    }
    ul {
      margin: 10px 0;
      padding-left: 20px;
    }
    pre {
      background: #272822;
      color: #f8f8f2;
      padding: 15px;
      border-radius: 6px;
      overflow-x: auto;
    }
    footer {
      text-align: center;
      background: #2c3e50;
      color: white;
      padding: 15px;
      margin-top: 30px;
    }
    .tag {
      background: #3498db;
      color: white;
      padding: 2px 8px;
      border-radius: 4px;
      font-size: 12px;
    }
  </style>
</head>
<body>

  <header>
    <h1>🚗 Vehicle Rental System - C++ Mini Project</h1>
    <p><span class="tag">OOP Concepts</span> <span class="tag">C++</span> <span class="tag">File Handling</span></p>
  </header>

  <div class="container">
    <h2>📌 Overview</h2>
    <p>
      The <b>Vehicle Rental System</b> is a C++ mini-project developed using
      <b>Object-Oriented Programming (OOP)</b> concepts. It simulates a real-world
      rental service where customers can rent cars or bikes, and the system manages
      availability, calculates rent, and stores rental history.
    </p>

    <h2>🎯 Features</h2>
    <ul>
      <li><b>Vehicle Management</b> – Add, display, and track vehicles</li>
      <li><b>Customer Management</b> – Register and display customer details</li>
      <li><b>Rental System</b> – Rent vehicle, calculate rent, update availability</li>
      <li><b>File Handling</b> – Save rental history in text files</li>
      <li><b>Optional</b> – Late fees, search, billing</li>
    </ul>

    <h2>🛠️ Technologies Used</h2>
    <ul>
      <li>Language: C++</li>
      <li>Concepts: OOP (Classes, Inheritance, Polymorphism, Encapsulation)</li>
      <li>Storage: File Handling</li>
      <li>UI: Console-based (Menu-driven)</li>
    </ul>

    <h2>🏗️ Class Structure</h2>
    <ul>
      <li><b>Vehicle (Abstract Class)</b></li>
      <li><b>Car / Bike</b> (Derived classes)</li>
      <li><b>Customer</b></li>
      <li><b>RentalSystem</b></li>
    </ul>

    <h2>📊 Project Flow</h2>
    <ol>
      <li>Admin adds vehicles</li>
      <li>Customer registers</li>
      <li>System displays available vehicles</li>
      <li>Customer rents a vehicle</li>
      <li>Record saved in file</li>
    </ol>

    <h2>📷 Sample Console Screen</h2>
    <pre>
===============================
     VEHICLE RENTAL SYSTEM
===============================
1. Add Customer
2. Display Vehicles
3. Rent Vehicle
4. Exit
Enter your choice: _
    </pre>

    <h2>🌍 Future Scope</h2>
    <ul>
      <li>GUI integration with Qt or SFML</li>
      <li>Database integration (MySQL/SQLite)</li>
      <li>Web-based booking system</li>
      <li>GPS & online payments (like ZoomCar, Turo, Ola Rentals)</li>
    </ul>

    <h2>🙋 Author</h2>
    <p><b>Your Name</b> – B.Tech Student, [Your College Name]</p>
  </div>

  <footer>
    © 2025 Vehicle Rental System | Mini Project in C++
  </footer>

</body>
</html>
