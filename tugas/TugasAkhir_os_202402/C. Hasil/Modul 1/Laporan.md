# 📝 Laporan Tugas Akhir

**Mata Kuliah**: Sistem Operasi
**Semester**: Genap / Tahun Ajaran 2024–2025
**Nama**: `<Mohamad Gilang Rizki Riomdona>`
**NIM**: `<240202903>`
**Modul yang Dikerjakan**:
`(Modul 1 – System Call dan Instrumentasi Kernel)`

---

## 📌 Deskripsi Singkat Tugas

* **Modul 1 – System Call dan Instrumentasi Kernel**:
  Menambahkan dua system call baru, yaitu `getpinfo()` untuk melihat proses yang aktif dan `getReadCount()` untuk menghitung jumlah pemanggilan `read()` sejak boot.
---

## 🛠️ Rincian Implementasi
* Menambahkan dua system call baru di file `sysproc.c` dan `syscall.c`
* Mengedit `user.h`, `usys.S`, dan `syscall.h` untuk mendaftarkan syscall
* Menambahkan struktur `struct pinfo` di `proc.h`
* Menambahkan counter `readcount` di kernel
* Membuat dua program uji: `ptest.c` dan `rtest.c`

## ✅ Uji Fungsionalitas

* `ptest`: untuk menguji `getpinfo()`
* `rtest`: untuk menguji `getReadCount()`
## 📷 Hasil Uji

Lampirkan hasil uji berupa screenshot atau output terminal. Contoh:

### 📍 Contoh Output `ptest`:

```
$ ptest
PID	MEM	NAME
1	4096	init
2	2048	sh
3	2048	ptest
...

$ rtest
Read Count Sebelum: 4
hello
Read Count Setelah: 5
```


Jika ada screenshot:

```
![hasil cowtest](./screenshots/cowtest_output.png)
```

---

## ⚠️ Kendala yang Dihadapi

Tuliskan kendala (jika ada), misalnya:

* Salah implementasi `page fault` menyebabkan panic
* Salah memetakan alamat shared memory ke USERTOP
* Proses biasa bisa akses audit log (belum ada validasi PID)

---

## 📚 Referensi

Tuliskan sumber referensi yang Anda gunakan, misalnya:

* Buku xv6 MIT: [https://pdos.csail.mit.edu/6.828/2018/xv6/book-rev11.pdf](https://pdos.csail.mit.edu/6.828/2018/xv6/book-rev11.pdf)
* Repositori xv6-public: [https://github.com/mit-pdos/xv6-public](https://github.com/mit-pdos/xv6-public)
* Stack Overflow, GitHub Issues, diskusi praktikum

---

