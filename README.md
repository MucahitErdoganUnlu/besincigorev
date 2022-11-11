# Gorev-5
5\. görev dosyadan veri okuma ile alakalı

* `fstream` kütüphanesini ve `getline` fonksiyonunu (<string>) kullanmak gerekiyor
A.txt ve b.txt adlı iki dosya var. Bunlarda sırasıyla NxN ve Nx1 boyutunda sayılar var.


Örnek A.txt:
  
```
1 2 3
4 5 6
7 8 9
```
Örnek b.txt:
```
10
11
12
```
Dosyalardaki satır sayısı N, yani fazladan boş satır yok.

**Hedef:** Bu verileri vector yapısına çektikten sonra ekrana yazdırmak

Öncelikle `getline` ile satır sayısını öğrenmek gerekiyor.
Daha sonra A matrisi ve b vektörünü oluşturarak bu veriyi çekmek gerekiyor.
Eğer satır sayısını b.txt'den öğrendiyseniz (yani örneğin ifstream bfile diye başladıysanız) aşağıdaki satırları kullanarak bfile'ı kapatmadan verinin çekileceği pozisyonu dosyanın başına getirebilirsiniz:
```
bfile.clear();
bfile.seekg(0, ios::beg);
```
Yazdırma işlemi en son olsun, yani veriyi çekerken yazdırmasın.
