# kriptolojiOdev1

İlk soruda aklıma şu geldi: örneğin 15'in karesini bulmak kolay ama "225" sayısının hangi sayının karesi olduğunu bulmak zor çünkü bunu bulmak için sayıyı çarpanlarına ayırıp hesaplama yapmak gerekiyor. Kriptlojide ise yüksek bir sayı mesaj olarak gönderilir ve bu sayı neyin tam karesi olduğu işlemi yapılarak şifre çözülmüş olur ve gönderilmek istenen mesaj alınmış olur.

İkinci soruda yüksek basamaklı sayılar girince çarpımları variable limitini aştığı için daha küçük sayılar girdim. 
4 5 ms arasında hesaplamalar yapılıyor ve çarpma işlemi çarpanlara ayırmadan çok daha kısa sürüyor.

Üçüncü soruda şifreleme kısmını bilgisayar hesaplıyor şifreli mesajı doğru oluşturuyor ancak şifreyi çözme kısmında yüksek sayılar girildiği için hesaplamayı yapamıyor. Küçük sayılarda ise mesajı bulabiliyor. (e değeri p-1*q-1 den fazla olamaz vs. gibi , bu tarz kontrolleri ekledim)
