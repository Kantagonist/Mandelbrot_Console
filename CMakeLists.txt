# CMakeList.txt: CMake-Projekt für "Mandelbrot_Console". Schließen Sie die Quelle ein, und definieren Sie
# projektspezifische Logik hier.
#
cmake_minimum_required (VERSION 3.8)

project ("Mandelbrot_Console")

# Fügen Sie der ausführbaren Datei dieses Projekts eine Quelle hinzu.
add_executable (Mandelbrot_Console "Mandelbrot_Console.cpp" "Mandelbrot_Console.h" "Mandelbrot.h" "Mandelbrot.cpp")

# TODO: Fügen Sie bei Bedarf Tests hinzu, und installieren Sie Ziele.
