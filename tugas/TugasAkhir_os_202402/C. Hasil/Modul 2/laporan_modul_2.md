# 📝 Laporan Tugas Akhir

**Mata Kuliah**: Sistem Operasi
**Semester**: Genap / Tahun Ajaran 2024–2025
**Nama**: Mohamad Gilang Rizki Riomdona
**NIM**: 240202903
**Modul yang Dikerjakan**:
(Modul 2 – Penjadwalan CPU Lanjutan (Priority Scheduling Non-Preemptive))

---

## 📌 Deskripsi Singkat Tugas
* **Modul 2 – Penjadwalan CPU Lanjutan (Priority Scheduling Non-Preemptive)**:
memodifikasi algoritma penjadwalan proses pada kernel xv6 dari yang semula menggunakan Round Robin menjadi Non-Preemptive Priority Scheduling. Dalam implementasinya, setiap proses diberikan sebuah nilai prioritas. Scheduler akan selalu memilih proses RUNNABLE dengan prioritas tertinggi (nilai numerik paling kecil) untuk dijalankan, tanpa adanya preemption.
---

## 🛠️ Rincian Implementasi

* Menambahkan field priority ke dalam `struct proc` di `proc.h`
* Menginisialisasi nilai default priority pada `allocproc()` di `proc.c`
* Membuat system call baru `set_priority(int)` melalui modifikasi file:
  * `syscall.h`, `user.h`, `usys.S`, `syscall.c`, `ysproc.c`
* Menambahkan program pengujian `ptest.c` untuk menguji perilaku scheduling
* Menambahkan `_ptest` ke dalam `Makefile` agar program uji bisa dikompilasi dan dijalankan
---

## ✅ Uji Fungsionalitas

Tuliskan program uji apa saja yang Anda gunakan, misalnya:

* `ptest`: menguji urutan eksekusi proses berdasarkan nilai prioritas masing-masing proses

---

## 📷 Hasil Uji

```
Child 2 selesai
Child 1 selesai
Parent selesai
```

## 📷 screenshot:


![hasil ptest](./screenshots/cowtest_output.png)


---

## ⚠️ Kendala yang Dihadapi

* Awalnya lupa menginisialisasi `priority` dalam `allocproc()`, menyebabkan nilai prioritas tidak terdefinisi
* Penamaan `syscall set_priority` sempat tidak dikenali karena lupa menambahkan ke `usys.S`
---

## 📚 Referensi

* Buku xv6 MIT: [https://pdos.csail.mit.edu/6.828/2018/xv6/book-rev11.pdf](https://pdos.csail.mit.edu/6.828/2018/xv6/book-rev11.pdf)
* Repositori xv6-public: [https://github.com/mit-pdos/xv6-public](https://github.com/mit-pdos/xv6-public)
* Stack Overflow, GitHub Issues, diskusi praktikum

---

