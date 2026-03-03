# 🚀 Полная настройка проекта

Полный гайд по настройке и запуску обоих проектов (C++ и Python).

## 📋 Требования

### Для обоих проектов
- Git
- GitHub аккаунт (опционально, только для синхронизации)

### Для C++
- CMake 3.20+
- Компилятор (MSVC, GCC, или Clang)
  - Windows: MSVC (идет с Visual Studio)
  - Linux: GCC (`sudo apt-get install build-essential cmake`)
  - Mac: Clang (`xcode-select --install`)

### Для Python
- Python 3.8+
- pip (идет с Python)

---

## 🐍 Python - Настройка

### 1. Откройте терминал и перейдите в папку Python
```bash
cd MyProjects/Python
```

### 2. Создайте виртуальное окружение

**Windows:**
```bash
python -m venv venv
venv\Scripts\activate
```

**Linux/Mac:**
```bash
python3 -m venv venv
source venv/bin/activate
```

Вы должны увидеть `(venv)` в начале строки.

### 3. Обновите pip
```bash
python -m pip install --upgrade pip
```

### 4. Установите зависимости
```bash
pip install -r requirements.txt
```

### 5. Запустите проект
```bash
python src/main.py
```

### 6. Добавьте новую зависимость (если нужна)
```bash
# Установите пакет
pip install numpy

# Обновите requirements.txt
pip freeze > requirements.txt
```

### 7. Отключение виртуального окружения
```bash
deactivate
```

---

## ⚙️ C++ - Настройка

### 1. Откройте терминал и перейдите в папку C++
```bash
cd MyProjects/C++
```

### 2. Создайте папку build
```bash
mkdir build
cd build
```

### 3. Запустите CMake
```bash
cmake ..
```

### 4. Выполните сборку

**Windows (MSVC):**
```bash
cmake --build . --config Release
```

**Linux/Mac:**
```bash
cmake --build . --config Release
```

Или просто:
```bash
make
```

### 5. Запустите приложение

**Windows:**
```bash
.\bin\MyProjects.exe
# или
.\Debug\MyProjects.exe  # если сборка в режиме Debug
```

**Linux/Mac:**
```bash
./bin/MyProjects
```

### 6. Чистка (удаление артефактов сборки)
```bash
cd ..
rm -rf build  # Linux/Mac
rmdir /s build  # Windows
```

---

## 🔄 IDE Рекомендации

### Для Python

**PyCharm Community Edition (рекомендуется)**
1. Откройте PyCharm
2. File → Open → выберите папку `MyProjects/Python`
3. PyCharm спросит про интерпретатор - выберите `venv/Scripts/python.exe`

**VS Code**
1. Откройте VS Code
2. Откройте папку `MyProjects/Python`
3. Установите расширение "Python"
4. Выберите интерпретатор: Ctrl+Shift+P → Python: Select Interpreter → выберите из venv

### Для C++

**CLion (рекомендуется)**
1. Откройте CLion
2. File → Open → выберите папку `MyProjects/C++`
3. CLion автоматически обнаружит CMakeLists.txt

**VS Code**
1. Откройте VS Code
2. Откройте папку `MyProjects/C++`
3. Установите расширения: C/C++, CMake Tools
4. CMake автоматически сконфигурируется

**Visual Studio Community**
1. Откройте Visual Studio
2. File → Open → Folder → выберите `MyProjects/C++`
3. VS автоматически загрузит CMake проект

---

## 📦 Управление зависимостями

### Python - Добавление новой библиотеки
```bash
cd Python
source venv/bin/activate  # активируйте venv

# Установите пакет
pip install pandas

# Обновите requirements.txt
pip freeze > requirements.txt

# Коммитьте изменения
git add requirements.txt
git commit -m "feat(python): add pandas dependency"
```

### C++ - Использование CMake

В CMakeLists.txt:
```cmake
# Найти пакет
find_package(Boost REQUIRED)

# Добавить в линкование
target_link_libraries(MyProject Boost::boost)
```

Или использовать vcpkg:
```bash
vcpkg install boost
```

---

## 🧪 Тестирование

### Python Tests
```bash
cd Python
source venv/bin/activate
pip install pytest
pytest tests/
```

### C++ Tests
```bash
cd C++/build
cmake ..
cmake --build .
ctest
```

---

## 🐛 Решение проблем

### Python: "ModuleNotFoundError"
**Решение:** Убедитесь, что виртуальное окружение активировано
```bash
# Windows
venv\Scripts\activate

# Linux/Mac
source venv/bin/activate
```

### C++: CMake не найден
**Решение:** Установите CMake
- Windows: скачайте с [cmake.org](https://cmake.org/download/) или `choco install cmake`
- Linux: `sudo apt-get install cmake`
- Mac: `brew install cmake`

### C++: Компилятор не найден
**Решение:**
- Windows: установите Visual Studio Community (с инструментами C++)
- Linux: `sudo apt-get install build-essential`
- Mac: `xcode-select --install`

### Git: "Permission denied"
**Решение:** Убедитесь, что вы используете SSH ключи или token
```bash
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"
```

---

## ✅ Чек-лист первого запуска

- [ ] Git установлен
- [ ] Python 3.8+ установлен (для Python части)
- [ ] Компилятор установлен (для C++ части)
- [ ] CMake установлен (для C++ части)
- [ ] Вы в папке `MyProjects`
- [ ] Python venv создан и активирован
- [ ] `pip install -r requirements.txt` выполнен
- [ ] `python src/main.py` работает
- [ ] CMake конфигурация выполнена
- [ ] C++ проект собран

---

## 📚 Дальнейшие шаги

1. **Читайте README.md** в каждой папке (C++, Python)
2. **Изучайте примеры** в папках src/
3. **Запускайте тесты** чтобы убедиться что всё работает
4. **Внесите свои изменения**
5. **Коммитьте и пушьте** на GitHub

---

**Готовы? Начинайте с Python или C++ в зависимости от ваших целей! 🚀**

