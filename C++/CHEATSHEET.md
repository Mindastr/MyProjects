# 📝 ШПАРГАЛКА ДЛЯ НОВИЧКА

## 🎯 ГЛАВНОЕ: 3 ПАПКИ

```
src/      ← Сюда кладёте .cpp файлы
include/  ← Сюда кладёте .h файлы
```

**Всё. Остальное забудьте.**

---

## 📛 ЧТО ТАКОЕ .gitignore?

**Файл который говорит Git какие файлы НЕ сохранять на GitHub.**

Без него на GitHub будут лежать:
- ❌ Папка `build/` (размером в МБ)
- ❌ `.idea/` (личные настройки IDE)
- ❌ `.exe` файлы
- ❌ Временные файлы

С `.gitignore` на GitHub лежит только:
- ✅ Исходный код (.cpp, .h)
- ✅ CMakeLists.txt
- ✅ README.md

### Вот что в вашем .gitignore:
```
build/                 ← Папка не сохраняется
cmake-build-debug/     ← Папка не сохраняется
.idea/                 ← Папка IDE не сохраняется
*.exe                  ← Исполняемые файлы не сохраняются
*.o                    ← Объектные файлы не сохраняются
```

### Как это работает?
```bash
# Вы пишете:
git add .

# Git думает: "Есть папка build/, но она в .gitignore, пропускаю!"
# И добавляет только: src/, include/, CMakeLists.txt, README.md
```

**Главное правило:** .gitignore уже создан! Просто не удаляйте его!

---

## 🔥 КОМАНДЫ КОТОРЫЕ ВАМ НУЖНЫ

### Собрать проект
```bash
mkdir build
cd build
cmake ..
cmake --build .
```

### Запустить программу
```bash
# Windows
.\bin\MyProjects.exe

# Linux/Mac
./bin/MyProjects
```

### Отправить на GitHub
```bash
git add .
git commit -m "добавил новый код"
git push
```

---

## 📚 КАК ДОБАВИТЬ НОВЫЙ ФАЙЛ

### Пример: Создаём класс Calculator

**Шаг 1:** Создайте `include/Calculator.h`
```cpp
#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    int add(int a, int b);
};

#endif
```

**Шаг 2:** Создайте `src/Calculator.cpp`
```cpp
#include "../include/Calculator.h"

int Calculator::add(int a, int b) {
    return a + b;
}
```

**Шаг 3:** Обновите `src/Test.cpp` - используйте Calculator
```cpp
#include "../include/Calculator.h"

int main() {
    Calculator calc;
    int result = calc.add(5, 3);
    std::cout << result << std::endl;  // Выведет: 8
    return 0;
}
```

**Шаг 4:** Пересоберите
```bash
cd build
cmake ..
cmake --build .
```

---

## ✅ КОГДА ГОТОВЫ К PUSH

```bash
# 1. Проверьте что готово
git status

# 2. Добавьте всё
git add .

# 3. Коммитьте
git commit -m "feat: добавил Calculator класс"

# 4. Отправьте
git push
```

---

## ❌ НЕ ДЕЛАЙТЕ

- ❌ Не коммитьте папку `build/`
- ❌ Не коммитьте папку `cmake-build-debug/`
- ❌ Не коммитьте папку `.idea/`
- ❌ Не создавайте папки кроме `src/` и `include/`

Это уже в `.gitignore` - Git их не заметит.

---

## 🆘 ЕСЛИ ЧТО-ТО СЛОМАЛОСЬ

### "CMake не находит файл"
Проверьте:
- Файл в правильной папке (`src/` или `include/`)?
- Путь в `#include` правильный?

### "Компилятор кричит об ошибке"
- Посмотрите сообщение об ошибке
- Погуглите эту ошибку + "C++"

### "Git не хочет коммитить"
```bash
git status
# Это покажет что не так
```

---

## 📖 ВСЁ ЧТО НУЖНО ЗНАТЬ

- **.h файлы** - только объявления (что это за функции/классы)
- **.cpp файлы** - реализация (как они работают)
- **#include "../include/MyFile.h"** - подключение заголовка
- **src/ и include/** - стандартная структура
- **.gitignore** - какие файлы не сохранять
- **CMakeLists.txt** - как собирается проект (не меняйте обычно)

---

## 🎓 СЛЕДУЮЩИЙ ПРОЕКТ

Просто скопируйте эту структуру:
```
NewProject/
├── src/
├── include/
├── CMakeLists.txt    ← Скопируйте отсюда
├── README.md         ← Скопируйте отсюда
└── .gitignore        ← Скопируйте отсюда
```

Всё! 🚀

