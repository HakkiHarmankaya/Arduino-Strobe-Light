# 🚨 Arduino #6: Çakar Lamba Yapımı (8 LED ile)

Bu projede, 8 adet LED kullanarak **dörderli çakar lamba efekti** oluşturacağız.  
LED'ler sırayla grup halinde yanıp sönerek acil durum ışığı benzeri bir görünüm verecek.

🔗 [Web Siteme Bakmak İçin Tıkla](https://www.hakkiharmankaya.com/)  
🔗 [Tinkercad Tasarımına Göz At](https://www.tinkercad.com/things/2IQSxM50YUM?sharecode=25Xh2Q_STeFc0Yh3XR_d09wHoB5WBfdZyTUNdb5MlmE)

---

## 🧰 Gerekli Malzemeler

- 8 adet **LED**
- 8 adet **direnç** (220Ω veya 330Ω)
- 1 adet **Arduino**
- 1 adet **breadboard**
- 17 adet **jumper kablo**

---

## ⚙️ Adım Adım Devre Kurulumu

### 🔹 Adım 1: Devreyi Kurun

- Breadboard’a 8 adet LED yerleştirin.
- Her LED’in:
  - **Anot (uzun bacak)** → Arduino **D4 ~ D11 pinlerine**
  - **Katot (kısa bacak)** → Direnç → **GND**

---

### 🔹 Adım 2: Arduino Kodunu Yazın ve Yükleyin

```cpp
int ledArray[] = {4,5,6,7,8,9,10,11};

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(ledArray[i], OUTPUT);
  }
}

void loop() {
  // İlk 4 LED grubunu yak
  for (int j = 0; j < 4; j++) {
    digitalWrite(ledArray[j], HIGH);
  }
  delay(500);
  for (int j = 0; j < 4; j++) {
    digitalWrite(ledArray[j], LOW);
  }
  delay(500);

  // Sonraki 4 LED grubunu yak
  for (int j = 4; j < 8; j++) {
    digitalWrite(ledArray[j], HIGH);
  }
  delay(500);
  for (int j = 4; j < 8; j++) {
    digitalWrite(ledArray[j], LOW);
  }
  delay(500);
}
