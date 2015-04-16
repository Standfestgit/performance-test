
### Very simple performance test in various programming languages - generate random number in 100.000.000 and 10.000.000 iterations.

- PHP 5.6.7 | 100.000.000 iterations

```
$ time php rand.php // cpu 15.976 total
```

- PHP 5.6.7 | 10.000.000 iterations

 ```
$ time php rand.php // cpu 1.717 total
```

- PHP 7.0.0-dev | 100.000.000 iterations

```
$ time /usr/local/php7/bin/php rand.php // cpu 8.701 total
```

- PHP 7.0.0-dev | 10.000.000 iterations

```
$ time /usr/local/php7/bin/php rand.php // cpu 0.880 total
```

- PHP with HipHop VM 3.4.1 | 100.000.000 iterations

```
$ time hhvm rand.php // cpu 1.858 total
```

- PHP with HipHop VM 3.4.1 | 10.000.000 iterations

```
$ time hhvm rand.php // cpu 0.992 total
```

- Python 2.7.6 | 100.000.000 iterations

```
$ time python rand.py // FAILED: 2274 killed     python rand.py
```

- Python 2.7.6 | 10.000.000 iterations

```
$ time python rand.py // cpu 1.709 total
```

- ruby 1.9.3p | 100.000.000 iterations

```
$ time ruby rand.rb  // cpu 24.005 total
```

- ruby 1.9.3p | 10.000.000 iterations

```
$ time ruby rand.rb  // cpu 2.513 total
```

- GNU bash, version 4.3.11 | 100.000.000 iterations

```
$ time bash rand.sh  // FAILED: cannot allocate 9 bytes (2204471296 bytes allocated)
```

- GNU bash, version 4.3.11 | 10.000.000 iterations

```
$ time bash rand.sh  // FAILED: killed     bash rand.sh
```

- C, gcc 4.7.2 | 100.000.000 iterations

```
$ gcc rand.c -o rand.c.bin && time ./rand.c.bin  // cpu 1.182 total
```

- C, gcc 4.7.2 | 10.000.000 iterations

```
$ gcc rand.c -o rand.c.bin && time ./rand.c.bin  // cpu 0.126 total
```

- C++, g++ 4.8.2 | 100.000.000 iterations

```
$ g++ rand.cpp -o rand.cpp.bin && time ./rand.cpp.bin  // cpu 1.021 total
```

- C, gcc 4.7.2 | 10.000.000 iterations

```
$ g++ rand.cpp -o rand.cpp.bin && time ./rand.cpp.bin  // cpu 0.106 total
```
