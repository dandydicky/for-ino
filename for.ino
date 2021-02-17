int PWMpin = 10;  

void setup() {
 
}

void loop() {
  for (int i = 0; i <= 255; i++) {      //pada pengulangan for ini mengunakan variabel i dengan tipe data integer,, variabel i di inisialisasi dengan nilai 0, lalu variabel i nilainya kecil atau sama dengan 255, i++ sebagai increament.
    analogWrite(PWMpin, i);           //bagian variabel PWMpin, akan membaca nilai yang dihasilkan oleh variabel i dengan menggunakan sistem pembacaan analog yaitu 0 sampai 255.
    delay(10);
  }
}
