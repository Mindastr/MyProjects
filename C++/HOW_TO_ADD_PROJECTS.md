# 🚀 КАК БЫСТРО ДОБАВЛЯТЬ НОВЫЕ ДНИ И ПРОЕКТЫ

## ⚡ БЫСТРО: Добавить новый проект в текущий день

### Вариант 1: Через PowerShell

```powershell
# Переходите в папку дня
cd C:\MyProjects\C++\2026-03-02

# Создаёте новую папку проекта
mkdir my-project\src
mkdir my-project\include

# Копируете CMakeLists.txt от другого проекта
copy test\CMakeLists.txt my-project\CMakeLists.txt

# Редактируете CMakeLists.txt - меняете название:
# project(my-project) вместо project(Test)
```

### Вариант 2: В CLion

1. **Правый клик** на папку 2026-03-02
2. **New → Directory** → Название проекта
3. **Внутри создаёте** src, include папки
4. **Копируете** CMakeLists.txt из другого проекта
5. **Редактируете** название в CMakeLists.txt

---

## ⚡ БЫСТРО: Добавить новый день

### Шаг 1: Создаёте папку дня

```powershell
# Переходите в C++
cd C:\MyProjects\C++

# Создаёте новый день
mkdir 2026-03-03\project1\src
mkdir 2026-03-03\project1\include
```

### Шаг 2: Копируете CMakeLists.txt

```powershell
# Копируете конфиг
copy 2026-03-02\test\CMakeLists.txt 2026-03-03\project1\CMakeLists.txt

# Редактируете - меняете название в CMakeLists.txt
```

### Шаг 3: Копируете README шаблон

```powershell
# Копируете README от прошлого дня
copy 2026-03-02\README.md 2026-03-03\README.md

# Редактируете дату и название проектов
```

---

## 📝 ШАБЛОН: CMakeLists.txt

Используйте этот шаблон для каждого нового проекта:

```cmake
cmake_minimum_required(VERSION 3.20)
project(YourProjectName VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} src/main.cpp)
target_include_directories(${PROJECT_NAME} PRIVATE include)

set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
```

**Просто замените `YourProjectName` на название вашего проекта!**

---

## 📝 ШАБЛОН: README для дня

Используйте этот шаблон для README.md каждого дня:

```markdown
# YYYY-MM-DD - День N

## 📚 Проекты в этот день

### 1. Project Name - Description
**Папка:** `project-name/`

Brief description

**Как собрать:**
\`\`\`bash
cd project-name
mkdir build && cd build
cmake ..
cmake --build .
.\bin\ProjectName.exe  # Windows
./bin/ProjectName      # Linux/Mac
\`\`\`

---

### 2. Another Project - Description
(Скопируйте структуру выше)

---

## 🎓 Что я изучал в этот день

- Тема 1
- Тема 2
- Тема 3

---

**Дата:** YYYY-MM-DD
```

---

## 🖇️ КОПИРОВАНИЕ ФАЙЛОВ

### Копировать существующий проект (начало)

```powershell
# Если хотите скопировать проект calculator как основу для нового

# 1. Копируете всю папку
Copy-Item -Path "C++\2026-03-02\calculator" -Destination "C++\2026-03-02\new-project" -Recurse

# 2. Редактируете CMakeLists.txt - меняете название
# 3. Редактируете исходные файлы
```

---

## ✅ ЧЕКЛИСТ: Добавить новый день

- [ ] Создал папку с датой (YYYY-MM-DD)
- [ ] Создал в ней папки для проектов
- [ ] Каждой папке проекта даны src/ и include/
- [ ] Скопировал CMakeLists.txt в каждый проект
- [ ] Отредактировал названия в CMakeLists.txt
- [ ] Создал README.md для дня
- [ ] Отредактировал README - дата и названия проектов
- [ ] Обновил главный README - добавил новый день
- [ ] Пишу код...
- [ ] `git add .`
- [ ] `git commit -m "feat(cpp): add projects for 2026-03-03"`
- [ ] `git push`

---

## 💡 СОВЕТЫ

### Имена проектов

```
✅ ХОРОШО:
calculator/
string-parser/
sorting-algorithm/
game-2d/

❌ ПЛОХО:
project/
my_stuff/
new/
test123/
```

### Имена файлов

```
✅ ХОРОШО:
src/main.cpp
src/calculator.cpp
include/calculator.h

❌ ПЛОХО:
src/Test.cpp
src/file1.cpp
include/my_file.h
```

---

## 🎯 ГЛАВНОЕ

> **Структура: Год-Месяц-День → Проект → src/ + include/ + CMakeLists.txt**

Это всё что нужно! 🚀

---

Готовы добавлять проекты быстро? 💪

