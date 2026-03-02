# 📚 MyProjects - Learning Repository

![C++](https://img.shields.io/badge/C%2B%2B-17-blue)
![Python](https://img.shields.io/badge/Python-3.9%2B-blue)
![License](https://img.shields.io/badge/License-MIT-green)

> Единый репозиторий для обучения: C++ и Python проекты в одном месте.

## 📁 Структура репозитория

```
MyProjects/
├── C++/                    ← C++ проекты
│   ├── src/                  - Исходные файлы (.cpp)
│   ├── include/              - Заголовочные файлы (.h)
│   ├── CMakeLists.txt
│   ├── .gitignore
│   └── README.md             - Описание C++ части
│
├── Python/                 ← Python проекты
│   ├── src/                  - Исходные файлы (.py)
│   ├── requirements.txt
│   ├── .gitignore
│   └── README.md             - Описание Python части
│
├── .gitignore              ← Общий для всех
└── README.md               ← Этот файл
```

## 🎯 Проекты

### 📌 C++ Part

Место для C++ проектов с CMake.

**Что там:**
- Правильная структура `src/` и `include/`
- CMake конфигурация
- Полный гайд в `C++/README.md`

**Как использовать:**
```bash
cd C++
mkdir build && cd build
cmake ..
cmake --build .
```

### 🐍 Python Part

Место для Python проектов.

**Что там:**
- Структура для Python проектов
- Requirements.txt для зависимостей
- Полный гайд в `Python/README.md`

**Как использовать:**
```bash
cd Python
python -m venv venv
venv\Scripts\activate  # Windows
source venv/bin/activate  # Linux/Mac
pip install -r requirements.txt
python src/main.py
```

## 🔧 Git Workflow (для обоих проектов)

### Добавить файлы

```bash
# Если меняете C++:
git add C++/
git commit -m "feat(cpp): описание"
git push

# Если меняете Python:
git add Python/
git commit -m "feat(python): описание"
git push
```

### Стиль коммитов

```
feat(cpp): добавил новый класс
feat(python): добавил функцию
fix(cpp): исправил ошибку
docs(python): обновил гайд
```

## 📝 Правила коммитов

Используем **Conventional Commits**:

```
<type>(<scope>): <description>

type: feat, fix, docs, refactor, style, test, chore
scope: cpp или python
```

**Примеры:**
```bash
git commit -m "feat(cpp): add Calculator class"
git commit -m "feat(python): create data parser"
git commit -m "fix(cpp): memory leak in allocator"
git commit -m "docs(python): update installation guide"
```

## ⚙️ IDE Рекомендации

### Для C++
- **CLion** - лучший выбор для C++
- **VS Code** + C++ Extension
- **Visual Studio Community**

### Для Python
- **PyCharm Community Edition** - лучший выбор для Python
- **VS Code** + Python Extension

> **Совет:** Если вы одновременно пишете C++ и Python, можно использовать VS Code для обоих или открывать CLion для C++ и PyCharm для Python отдельно.

## 📚 Дополнительно

### C++
- Гайд в `C++/README.md`
- Шпаргалка в `C++/CHEATSHEET.md`
- Гайд про .gitignore в `C++/docs/GITIGNORE_GUIDE.md`

### Python
- Гайд в `Python/README.md`
- Гайд про виртуальное окружение в `Python/VIRTUAL_ENV_GUIDE.md`

## 🎓 Начало работы

### Для C++
```bash
cd C++
# Смотрите README.md и CHEATSHEET.md
```

### Для Python
```bash
cd Python
# Смотрите README.md
```

## 📞 Краткие команды

### Первый раз
```bash
git clone https://github.com/Mindastr/MyProjects.git
cd MyProjects
```

### После изменений
```bash
git add .
git commit -m "ваше сообщение"
git push
```

### Только C++ изменения
```bash
git add C++/
git commit -m "feat(cpp): описание"
git push
```

### Только Python изменения
```bash
git add Python/
git commit -m "feat(python): описание"
git push
```

---

**Автор:** Mindastr

**Лицензия:** MIT

**Последнее обновление:** 2026-03-02

