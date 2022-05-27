# Archiving_Details

- [Archiving_Details](#archiving_details)
  - [Algorithms](#algorithms)
    - [bzip2](#bzip2)
    - [gzip](#gzip)
    - [lzip](#lzip)
    - [lzma](#lzma)
    - [lzop](#lzop)
    - [xz](#xz)
    - [zstd](#zstd)
  - [Compression Testing](#compression-testing)
    - [Text Compression Testing](#text-compression-testing)
    - [Music Compression Testing](#music-compression-testing)
    - [GrailGUI code Compression Testing](#grailgui-code-compression-testing)

## Algorithms

### [bzip2](http://manpages.ubuntu.com/manpages/jammy/en/man1/bzip2.1.html)

### [gzip](http://manpages.ubuntu.com/manpages/jammy/en/man1/gzip.1.html)

### [lzip](https://linux.die.net/man/1/lzip)

### [lzma](http://manpages.ubuntu.com/manpages/jammy/en/man1/xz.1.html)

### [lzop](http://manpages.ubuntu.com/manpages/jammy/en/man1/lzop.1.html)

### [xz](http://manpages.ubuntu.com/manpages/jammy/en/man1/xz.1.html)

### [zstd](http://manpages.ubuntu.com/manpages/jammy/en/man1/zstd.1.html)

- <https://github.com/facebook/zstd/issues/1829>
- tar -cvf - TXT_Books  | zstd -T12 --ultra -22 > TXT_Books.zstd

<!-- TODO add decompression speed -->

## Compression Testing

### Text Compression Testing

| Algorithm | Time | Compression Ratio |
| ---------- | ---- | ----------------- |
| zstd_22 | 54.118 | 0.2605 |
| lzip    | 45.332 | 0.2702 |
| lzma    | 41.811 | 0.2705 |
| xz      | 42.099 | 0.2706 |
| bzip2   |  5.426 | 0.2729 |
| zstd    |  0.532 | 0.3501 |
| gzip    |  4.323 | 0.3644 |
| lzop    |  0.329 | 0.5883 |

### Music Compression Testing

| Algorithm | Compression Time | Compression Ratio |
| ---------- | ---- | ----------------- |
| gzip    |  2.795 | 0.9857 |
| zstd_22 | 22.042 | 0.9859 |
| xz      | 31.326 | 0.9862 |
| bzip2   |  9.092 | 0.9866 |
| lzop    |  0.126 | 0.9904 |
| lzma    | 30.967 | 0.9915 |
| lzip    | 37.020 | 0.9916 |
| zstd    |  0.218 | 0.9873 |

### GrailGUI code Compression Testing

| Algorithm | Compression Time | Compression Ratio |
| ---------- | ---- | ----------------- |
| xz      | 230.490 | 0.6639 |
| zstd_22 | 149.339 | 0.6648 |
| lzma    | 232.164 | 0.6667 |
| lzip    | 269.983 | 0.6668 |
| bzip2   | 52.344  | 0.7455 |
| gzip    | 24.923  | 0.7563 |
| zip     | 23.048  | 0.7567 |
| zstd    | 2.956   | 0.7650 |
| lzop    | 1.209   | 0.8745 |

<!-- TODO add video Compression Test-->
