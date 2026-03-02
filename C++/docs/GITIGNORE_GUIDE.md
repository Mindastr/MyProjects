# 📋 .gitignore - ПОЛНЫЙ ГАЙД

## ЧТО ЭТО ТАКОЕ?

`.gitignore` - это файл который **говорит Git какие файлы НЕ сохранять** на GitHub.

**Без .gitignore** ваш GitHub будет полон:
- ❌ Временных файлов
- ❌ Скомпилированных .exe
- ❌ Личных настроек IDE
- ❌ Папок размером в гигабайты

**С .gitignore** на GitHub лежит только:
- ✅ Исходный код (.cpp, .h)
- ✅ Конфигурация (CMakeLists.txt)
- ✅ Документация (README.md)

---

## 🔥 СИНТАКСИС .gitignore

### Папки
```
build/                 ← Папка build/ не сохраняется
cmake-build-debug/     ← Папка cmake-build-debug/ не сохраняется
```

### Файлы
```
*.exe                  ← ВСЕ файлы заканчивающиеся на .exe
*.o                    ← ВСЕ файлы заканчивающиеся на .o
myfile.txt             ← Конкретный файл myfile.txt
```

### Специальные символы
```
*                      ← Означает "любые символы"
?                      ← Означает "ровно один символ"
[abc]                  ← Означает "a ИЛИ b ИЛИ c"
!important.o           ← ! значит "КРОМЕ ЭТО" (исключение)
```

### Примеры:
```
*.o                    ← Игнорирует: file.o, main.o, test.o
src/*.tmp              ← Игнорирует: src/temp.tmp, src/file.tmp
!src/keep.o            ← НЕ игнорирует: src/keep.o (исключение)
```

---

## 📝 ЧТО ДОЛЖНО БЫТЬ В .gitignore ДЛЯ C++

### Обязательно игнорировать:

```gitignore
# Сборка
build/                 ← Папка с собранным проектом
cmake-build-*/         ← Папки сборки от CLion
*.o                    ← Объектные файлы
*.exe                  ← Исполняемые файлы

# IDE
.idea/                 ← Настройки CLion
.vscode/               ← Настройки VS Code

# OS
.DS_Store              ← Mac файл
Thumbs.db              ← Windows файл
```

---

## 🚀 ПРАКТИЧЕСКИЙ ПРИМЕР

### Вот типичная структура проекта:

```
MyProject/
├── src/
│   ├── main.cpp
│   └── calculator.cpp
├── include/
│   └── calculator.h
├── build/              ← НЕ сохраняется! (в .gitignore)
│   ├── CMakeFiles/
│   ├── bin/
│   └── main.exe
├── .idea/              ← НЕ сохраняется! (в .gitignore)
│   ├── workspace.xml
│   └── ...
├── CMakeLists.txt      ← СОХРАНЯЕТСЯ! (не в .gitignore)
├── .gitignore          ← СОХРАНЯЕТСЯ! (не в .gitignore)
└── README.md           ← СОХРАНЯЕТСЯ! (не в .gitignore)
```

Когда вы коммитите:
```bash
git add .
git commit -m "добавил calculator"
```

Git автоматически пропустит папки `build/` и `.idea/` потому что они в `.gitignore`.

---

## ❓ ЧАСТО ЗАДАВАЕМЫЕ ВОПРОСЫ

### "Я случайно закоммитил build/ папку. Как удалить?"

```bash
git rm -r --cached build/
git commit -m "remove build directory from git"
git push
```

### "Как проверить что будет закоммичено?"

```bash
git status
# Покажет список файлов которые будут добавлены
```

### "Я хочу игнорировать все .tmp файлы везде"

```gitignore
*.tmp        ← Игнорирует все .tmp файлы везде
src/**/*.tmp ← Игнорирует все .tmp в src/ и подпапках
```

---

## ✅ ФИНАЛЬНЫЙ ЧЕК-ЛИСТ

Перед первым `git push` проверьте:

```bash
# 1. Смотрим что будет закоммичено
git status

# 2. Проверяем что там нет:
# ❌ build/
# ❌ .idea/
# ❌ *.exe
# ❌ *.o

# 3. Если всё ОК:
git add .
git commit -m "initial commit"
git push
```

---

## 📚 ПОЛНЫЙ .gitignore для C++ проекта

```gitignore
# ========== BUILD ==========
build/
cmake-build-debug/
cmake-build-release/
dist/
out/

# ========== IDE ==========
.idea/
.vscode/
*.swp
*.swo

# ========== COMPILED ==========
*.o
*.exe
*.dll
*.so
*.a

# ========== OS ==========
.DS_Store
Thumbs.db

# ========== CMAKE ==========
CMakeCache.txt
CMakeFiles/
cmake_install.cmake
```

---

## 🎓 ГЛАВНОЕ ПРАВИЛО

> **.gitignore сохраняем, остальное сохраняем, только не сохраняем что в .gitignore** 🎯

**Всё просто!** 😊

