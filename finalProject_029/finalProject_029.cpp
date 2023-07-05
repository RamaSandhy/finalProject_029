#include <iostream>
using namespace std;

class MataKuliah {
private:
    float presensi;
    float activity;
    float exercise;
    float tugasAkhir;

public:
    MataKuliah() {
        presensi = 0;
        activity = 0;
        exercise = 0;
        tugasAkhir = 0;
    }

    virtual float hitungNilaiAkhir() {
        return 0;
    }

    virtual void cekKelulusan() {
        // Fungsinya untuk mengimplementasi cek kelulusan
    }

    virtual void input() {
        float nilai;

        cout << "Masukkan Nilai Presensi: ";
        cin >> nilai;
        setPresensi(nilai);

        cout << "Masukkan Nilai Activity: ";
        cin >> nilai;
        setActivity(nilai);

        cout << "Masukkan Nilai Exercise: ";
        cin >> nilai;
        setExercise(nilai);

        cout << "Masukkan Nilai Tugas Akhir: ";
        cin >> nilai;
        setTugasAkhir(nilai);
    }

    void display() {
        cout << "Nilai Presensi = " << getPresensi() << endl;
        cout << "Nilai Activity = " << getActivity() << endl;
        cout << "Nilai Exercise = " << getExercise() << endl;
        cout << "Nilai Tugas Akhir = " << getTugasAkhir() << endl;
    }

    void setPresensi(float nilai) {
        this->presensi = nilai;
    }

    float getPresensi() {
        return presensi;
    }

    void setActivity(float nilai) {
        this->activity = nilai;
    }

    float getActivity() {
        return activity;
    }

    void setExercise(float nilai) {
        this->exercise = nilai;
    }

    float getExercise() {
        return exercise;
    }

    void setTugasAkhir(float nilai) {
        this->tugasAkhir = nilai;
    }

    float getTugasAkhir() {
        return tugasAkhir;
    }

};

class Pemrograman : public MataKuliah {
public:
    string FirstLine() {
        return "Program Dibuat";
    }
};

int Total(int a, int b, int c, int d) {
    return (a + b + c + d) / 4;
}

int main() {
    Pemrograman MK;
    MK.input();
    MK.display();

    return 0;
}

