# lab5-IE-0117-

Para compilar con GNU Make, se debe tener el archivo L5_C35472.c y el archivo Makefile, en el mismo directorio. además de tener instalada la biblioteca cJSON, que puede ser instalada en liux con el siguiente comando: sudo apt install libcjson-dev

Con todo esto sólo es necesario escribir make en la terminal, en el directorio del proyecto. Al final se creará un archivo llamado json_make que puede ser ejecutado usando ./json_make

Para compilar con CMake, es necesario tener el archivo L5_C35472.c y el archivo CMakeLists.txt en el mismo directorio, igualmente requiere la biblioteca CJSON.
Para compilar, se deben escribir los siguientes comando en la terminal desde este directorio
  mkdir build
  cd build
  cmake ..
  make

