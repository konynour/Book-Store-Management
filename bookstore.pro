# إعدادات Qt الأساسية
QT += core gui widgets sql

# إزالة quick لأن المشروع لا يستخدم QML
# QT += quick # تم تعطيلها لأنها غير مستخدمة

# تفعيل معيار C++17
CONFIG += c++17

# تعطيل واجهات برمجة التطبيقات المهجورة (اختياري)
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # يعطل جميع واجهات البرمجة المهجورة قبل Qt 6.0.0

# ملفات المصدر
SOURCES += \
    SalesHistory.cpp \
    addbox.cpp \
    categories.cpp \
    editbook.cpp \
    loginpage.cpp \
    main.cpp \
    mainwindow.cpp \
    purbox.cpp \
    viewbooks.cpp

# ملفات الرأس
HEADERS += \
    SalesHistory.h \
    addbox.h \
    categories.h \
    editbook.h \
    loginpage.h \
    mainwindow.h \
    purbox.h \
    viewbooks.h

# ملفات الواجهات
FORMS += \
    SalesHistory.ui \
    addbox.ui \
    categories.ui \
    editbook.ui \
    loginpage.ui \
    mainwindow.ui \
    purbox.ui \
    viewbooks.ui

# ملفات الموارد

# قواعد النشر الافتراضية
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# تنظيف الملفات المولدة عند إعادة البناء (اختياري)
QMAKE_CLEAN += ui_*.h
