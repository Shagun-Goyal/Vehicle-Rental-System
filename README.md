<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Vehicle Rental System Visualization</title>
    <!-- Chart.js CDN -->
    <script src="https://cdn.jsdelivr.net/npm/chart.js@4.4.0/dist/chart.min.js"></script>
    <!-- Tailwind CSS CDN -->
    <script src="https://cdn.tailwindcss.com"></script>
    <style>
        body {
            font-family: 'Arial', sans-serif;
            background-color: #f4f4f9;
            color: #333;
            transition: background-color 0.3s, color 0.3s;
        }
        .dark body {
            background-color: #1f2937;
            color: #e5e7eb;
        }
        .container {
            max-width: 1200px;
            margin: 0 auto;
            padding: 20px;
        }
        .chart-container {
            background: white;
            border-radius: 8px;
            padding: 20px;
            box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);
            transition: background 0.3s;
        }
        .dark .chart-container {
            background: #374151;
        }
        .theme-toggle {
            cursor: pointer;
            padding: 10px;
            border-radius: 50%;
            background: #e5e7eb;
        }
        .dark .theme-toggle {
            background: #4b5563;
        }
    </style>
</head>
<body class="min-h-screen">
    <div class="container mx-auto">
        <div class="flex justify-between items-center mb-6">
            <h1 class="text-3xl font-bold">Vehicle Rental System: Cost Visualization</h1>
            <button id="themeToggle" class="theme-toggle" title="Toggle Theme">
                <svg class="w-6 h-6" fill="none" stroke="currentColor" viewBox="0 0 24 24" xmlns="http://www.w3.org/2000/svg">
                    <path stroke-linecap="round" stroke-linejoin="round" stroke-width="2" d="M12 3v1m0 16v1m9-9h-1M4 12H3m15.364 6.364l-.707-.707M6.343 6.343l-.707-.707m12.728 0l-.707.707M6.343 17.657l-.707.707M16 12a4 4 0 11-8 0 4 4 0 018 0z"></path>
                </svg>
            </button>
        </div>
        <p class="mb-4 text-lg">Explore the cost per day of available cars, grouped by type (Sedan, SUV, Convertible).</p>
        <div class="chart-container">
            <canvas id="carCostChart"></canvas>
        </div>
    </div>

    <script>
        // Toggle dark/light theme
        const themeToggle = document.getElementById('themeToggle');
        themeToggle.addEventListener('click', () => {
            document.body.classList.toggle('dark');
        });

        // Chart.js configuration
        const ctx = document.getElementById('carCostChart').getContext('2d');
        new Chart(ctx, {
            type: 'bar',
            data: {
                labels: [
                    'Skoda Octavia', 'Toyota Camry', 'Honda Civic', 'Hyundai Elantra', 'Maruti Suzuki Ciaz',
                    'Toyota Fortuner', 'MG Gloster', 'Mahindra XUV700', 'Kia Seltos', 'Hyundai Creta',
                    'Mercedes C-Class', 'Audi A5', 'BMW Z4', 'Mini Cooper', 'Ford Mustang'
                ],
                datasets: [
                    {
                        label: 'Sedan',
                        data: [3800, 3500, 3200, 3000, 2800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
                        backgroundColor: '#4CAF50',
                        borderColor: '#388E3C',
                        borderWidth: 1
                    },
                    {
                        label: 'SUV',
                        data: [0, 0, 0, 0, 0, 6500, 6200, 5500, 4800, 4500, 0, 0, 0, 0, 0],
                        backgroundColor: '#2196F3',
                        borderColor: '#1976D2',
                        borderWidth: 1
                    },
                    {
                        label: 'Convertible',
                        data: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14000, 13500, 12000, 10500, 11500],
                        backgroundColor: '#FF5722',
                        borderColor: '#E64A19',
                        borderWidth: 1
                    }
                ]
            },
            options: {
                plugins: {
                    title: {
                        display: true,
                        text: 'Vehicle Rental System: Cost Per Day by Car Type',
                        font: { size: 18 }
                    },
                    legend: {
                        position: 'top'
                    },
                    tooltip: {
                        callbacks: {
                            label: function(context) {
                                let label = context.dataset.label || '';
                                let value = context.parsed.y;
                                return value ? `${label}: ₹${value}/day` : '';
                            }
                        }
                    }
                },
                scales: {
                    y: {
                        beginAtZero: true,
                        title: {
                            display: true,
                            text: 'Cost Per Day (INR)'
                        }
                    },
                    x: {
                        title: {
                            display: true,
                            text: 'Car Models'
                        }
                    }
                },
                responsive: true,
                maintainAspectRatio: false
            }
        });
    </script>
</body>
</html>