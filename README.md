# 👤 clsPerson - نظام إدارة الأشخاص

كلاس بلغة C++ يمثل شخصًا مع بياناته الأساسية (الاسم، البريد الإلكتروني، رقم الهاتف) مع إمكانية طباعة المعلومات وإرسال الرسائل.

## المميزات

- **تخزين البيانات الشخصية**: ID، الاسم الأول، الاسم الأخير، البريد الإلكتروني، رقم الهاتف
- **طباعة المعلومات**: عرض جميع البيانات بتنسيق منسق
- **إرسال بريد إلكتروني**: محاكاة إرسال إيميل
- **إرسال SMS**: محاكاة إرسال رسالة نصية
- **Getters & Setters**: التحكم في الوصول للبيانات
- **Full Name**: دمج الاسم الأول والاسم الأخير تلقائيًا

## مثال

```cpp
clsPerson Person1(90, "Mark", "Moheb", "mark@example.com", "0123456789");

Person1.Print();
// المخرجات:
// ID      : 90
// FirstName   : Mark
// LastName    : Moheb
// FullName    : Mark Moheb
// Email       : mark@example.com
// Phone       : 0123456789

Person1.SendEmail("Welcome", "Hello!");
Person1.SendSMS("Welcome to the system!");
