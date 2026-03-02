# 📚 МОНОРЕПОЗИТОРИЙ - Гайд для работы с C++ и Python

## ЧТО ЭТО ТАКОЕ?

**Монорепозиторий (Monorepo)** - один Git репозиторий содержит несколько проектов.

```
MyProjects/                    ← Один репозиторий
├── C++/                       ← Проект 1
│   ├── src/
│   ├── include/
│   └── CMakeLists.txt
│
└── Python/                    ← Проект 2
    ├── src/
    ├── requirements.txt
    └── venv/
```

**Преимущества:**
- ✅ Всё в одном месте
- ✅ Одна история Git для всех проектов
- ✅ Видно что где
- ✅ Легче управлять

## 🎯 СТРУКТУРА

```
C:\MyProjects\
├── .git/                      ← ОДИН Git для всего
├── .gitignore                 ← Общий для обоих
├── README.md                  ← Главное описание
│
├── C++/                       ← C++ ПРОЕКТ
│   ├── src/                   - .cpp файлы
│   ├── include/               - .h файлы
│   ├── build/                 - (не коммитится)
│   ├── CMakeLists.txt
│   ├── README.md
│   ├── .gitignore
│   └── docs/
│
└── Python/                    ← PYTHON ПРОЕКТ
    ├── src/                   - .py файлы
    ├── tests/
    ├── venv/                  - (не коммитится)
    ├── requirements.txt
    ├── README.md
    ├── .gitignore
    └── PYTHON_GUIDE.md
```

## 🚀 БЫСТРЫЙ СТАРТ

### Клонирование

```bash
git clone https://github.com/Mindastr/MyProjects.git
cd MyProjects
```

### Для C++

```bash
cd C++
mkdir build && cd build
cmake ..
cmake --build .
```

### Для Python

```bash
cd Python
python -m venv venv
venv\Scripts\activate  # Windows
source venv/bin/activate  # Linux/Mac
pip install -r requirements.txt
python src/main.py
```

## 📤 ОТПРАВКА НА GITHUB

### Если вы только меняете C++

```bash
cd C:\MyProjects
git add C++/
git commit -m "feat(cpp): добавил новый класс"
git push
```

### Если вы только меняете Python

```bash
cd C:\MyProjects
git add Python/
git commit -m "feat(python): добавил функцию"
git push
```

### Если меняете оба

```bash
cd C:\MyProjects
git add .
git commit -m "feat: update both projects"
git push
```

## 📝 СТИЛЬ КОММИТОВ

### Формат

```
<type>(<scope>): <description>

type: feat, fix, docs, refactor, style, test, chore
scope: cpp или python
```

### Примеры

```bash
git commit -m "feat(cpp): add Calculator class"
git commit -m "feat(python): create data parser"
git commit -m "fix(cpp): fix memory leak"
git commit -m "docs(python): update installation guide"
git commit -m "feat: add new dependencies"  # Если оба проекта
```

## ✅ ПЕРЕД КАЖДЫМ PUSH

### Чек-лист

```bash
# 1. Проверьте что меняется
git status

# 2. Убедитесь что НЕ коммитятся:
# ❌ C++/build/
# ❌ C++/.idea/
# ❌ C++/cmake-build-debug/
# ❌ Python/venv/
# ❌ Python/__pycache__/
# ❌ Python/.idea/

# 3. Если всё ОК:
git add C++/
# или
git add Python/
# или
git add .

# 4. Коммитьте
git commit -m "ваше сообщение"

# 5. Отправьте
git push
```

## 🔀 РАБОТА С ВЕТКАМИ

### Создать ветку для функции

```bash
# Для C++ функции
git checkout -b feature/cpp-new-class

# Для Python функции
git checkout -b feature/python-parser

# Работаете...
git add .
git commit -m "feat(cpp): add new class"

# Создайте Pull Request на GitHub
```

## 📊 СТАТУС ОБОИХ ПРОЕКТОВ

```bash
# Посмотрите что меняется
git status

# Посмотрите последние коммиты
git log --oneline -10

# Посмотрите какие файлы меняются
git diff --stat
```

## 🎓 РЕКОМЕНДАЦИИ

### IDE

**Option 1: Два IDE**
- CLion для C++
- PyCharm для Python
- Окна рядом

**Option 2: VS Code**
- Один VS Code
- Extension для C++
- Extension для Python

### Рабочий процесс

1. **Утро:** Открываете CLion или PyCharm
2. **Пишете код** в своём проекте (C++ или Python)
3. **Тестируете** локально
4. **Коммитите**
```bash
git add C++/  # или Python/
git commit -m "feat(cpp): ..."
git push
```
5. **На GitHub видно** что и где менялось

## 📚 ДОПОЛНИТЕЛЬНО

### Для C++
- Гайд: `C++/README.md`
- Шпаргалка: `C++/CHEATSHEET.md`
- Гайд про .gitignore: `C++/docs/GITIGNORE_GUIDE.md`

### Для Python
- Гайд: `Python/README.md`
- Гайд про venv: `Python/PYTHON_GUIDE.md`

### Общее
- Главное описание: `README.md` в корне

## ❓ FAQ

### "Я меняю и C++, и Python, как коммитить?"

```bash
# Коммитьте отдельно!
git add C++/
git commit -m "feat(cpp): add class"
git add Python/
git commit -m "feat(python): add function"
git push

# Или всё вместе если работали вместе:
git add .
git commit -m "feat: update both projects"
git push
```

### "Я забыл что в каких папках"

```bash
cd MyProjects
cat README.md  # Прочитайте это!
```

### "Как узнать что меняется?"

```bash
git status        # Что меняется
git diff          # Полный diff
git log --oneline # История коммитов
```

### "Я случайно добавил venv или build"

```bash
git rm -r --cached C++/build/
# или
git rm -r --cached Python/venv/
git commit -m "remove from tracking"
git push
```

## 🆘 ПРОБЛЕМЫ

### "Я коммитил build/ папку!"

```bash
# Удалите из Git
git rm -r --cached C++/build/

# Коммитьте удаление
git commit -m "remove build directory"

# Отправьте
git push
```

### "Я не знаю что изменилось"

```bash
# Посмотрите diff
git diff

# Посмотрите какие файлы
git status
```

### "Я хочу отменить последний коммит"

```bash
git reset --soft HEAD~1
# Теперь можете сделать новый коммит
```

---

## 🎯 ГЛАВНОЕ ПРАВИЛО

> **Работайте в своём проекте (C++ или Python), а Git позаботится об остальном** ✅

**Коммитьте понятные сообщения, используйте scope (cpp или python), и всё будет хорошо!**

---

Готовы работать? 🚀

