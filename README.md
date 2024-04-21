# Huffman DeCompressor

Este proyecto implementa un compresor/descompresor en C++ utilizando el algoritmo de compresión de Huffman para reducir el tamaño de archivos de texto mediante la asignación de códigos binarios a cada byte, seguido de su reconstrucción para recuperar el archivo original. Utiliza la biblioteca [cppBL](https://github.com/lucaaasch/cppBL) para el manejo de archivos y estructuras de datos básicas.

## Funciones Principales

El código proporciona las siguientes funciones principales para la compresión y descompresión:

### Abstracciones

- `int fileBytes(FILE* f)`: Retorna la cantidad de bytes de un archivo.
- `HuffmanTable huffmanTable(unsigned int n, string cod)`: Inicializa una tabla de Huffman.
- `int cmpHuffmanTreeInfoOrder(HuffmanTreeInfo* a, HuffmanTreeInfo* b)`: Función de comparación para ordenar información del árbol de Huffman.
- `List<HuffmanTreeInfo*> createByteList(FILE* f)`: Crea una lista de bytes con sus ocurrencias en un archivo.
- `HuffmanTreeInfo* byteListToHuffmanTree(List<HuffmanTreeInfo*> lByte)`: Convierte una lista de bytes en un árbol de Huffman.
- `List<HuffmanTable> rootToHuffmanTable(HuffmanTreeInfo* root)`: Convierte la raíz del árbol de Huffman en una tabla de Huffman.
- `void generateHuffmanFile(FILE* f, List<HuffmanTable> lHTable, string fName)`: Genera un archivo comprimido utilizando la tabla de Huffman.
- `void decompress(FILE* f, HuffmanTreeInfo* root, string fName)`: Descomprime un archivo utilizando el árbol de Huffman y guarda el resultado en un nuevo archivo.
- `HuffmanTreeInfo* huffmanTableToRoot(List<HuffmanTable> lHTable)`: Convierte una tabla de Huffman en la raíz del árbol de Huffman.

### Funciones de compresión/descompresión

- `void huffmanCompressor(string fName)`: Función principal para comprimir un archivo utilizando el algoritmo de Huffman.
- `void huffmanDecompressor(string fName)`: Función principal para descomprimir un archivo utilizando el algoritmo de Huffman.

## Uso

Para utilizar el compresor/descompresor de Huffman, primero debes compilar el archivo `HuffmanDeCompressor.cpp` utilizando MINGW. Puedes hacerlo ejecutando el siguiente comando en la línea de comandos:

```bash
C:/AlgunDirectorio> gcc HuffmanDeCompressor.cpp -o HuffDC.exe
```
> Esto creará el ejecutable HuffDC.exe que se encargará de comprimir y descomprimir, asegurate de incluir la imagen en la misma carpeta que el ejecutable.

Luego, a través de la línea de comandos (cmd), deberás hacer lo siguiente:

### Para Comprimir:

```bash
C:/AlgunDirectorio> HuffDC.exe imagen.jpg
```

> HuffmanDeCompressor comprime si la extension del archivo indicada es distinta a .huf, una vez comprimido el archivo adquiere el .huf al final

### Para descomprimir:

```bash
C:/AlgunDirectorio> HuffDC.exe imagen.jpg.huf
```

## Acerca del proyecto

Este proyecto fue realizado en colaboración con [@msantucho1](https://github.com/msantucho1) a finales de 2023 como trabajo final del curso de Algoritmos y Estructuras de Datos. La implementación del compresor/descompresor de Huffman se desarrolló como parte de un ejercicio práctico para comprender y aplicar los conceptos aprendidos a lo largo de la cursada.