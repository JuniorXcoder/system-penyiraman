# system-penyiraman
System penyiraman automatis menggunakan microcontroller arduino
bahan yang dibutuhkan:
- Arduino Uno
- rtc ds3231
- relay
- Soil moisture sensor

Alat ini bekerja saat jam menunjukan pukul 8 & 16
pada saat pukul 8 & 16 sensor moisture akan mendeteksi kelembapan tanah. apabila sensor mendeteksi bahwa tanah masih lembap, maka penyiraman tidak akan terjadi
apabila tanah sudah kering maka data yang di terima oleh soil moisture akan terkirim ke arduino sebagai micro controller dan akan mentriger relay pompa air sebagai output
