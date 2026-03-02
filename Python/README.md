# 🐍 Python Projects

Python часть репозитория MyProjects.

## 📁 Структура

```
Python/
├── src/                    ← Ваши .py файлы СЮДА
├── tests/                  ← Тесты
├── requirements.txt        ← Зависимости
├── README.md
└── .gitignore
```

## 🚀 Быстрый старт

### 1. Создайте виртуальное окружение

**Windows:**
```bash
cd Python
python -m venv venv
venv\Scripts\activate
```

**Linux/Mac:**
```bash
cd Python
python3 -m venv venv
source venv/bin/activate
```

### 2. Установите зависимости

```bash
pip install -r requirements.txt
```

### 3. Запустите проект

```bash
python src/main.py
```

## 📝 Как добавить новый файл

### Пример: Создаём калькулятор

**Шаг 1:** Создайте `src/calculator.py`
```python
def add(a, b):
    """Складывает два числа"""
    return a + b

def subtract(a, b):
    """Вычитает два числа"""
    return a - b
```

**Шаг 2:** Используйте в `src/main.py`
```python
from calculator import add, subtract

result1 = add(5, 3)
result2 = subtract(5, 3)

print(f"5 + 3 = {result1}")
print(f"5 - 3 = {result2}")
```

**Шаг 3:** Запустите
```bash
python src/main.py
```

## 📦 Зависимости

Список всех используемых библиотек лежит в `requirements.txt`.

### Добавить новую зависимость

```bash
# Установите пакет
pip install numpy

# Обновите requirements.txt
pip freeze > requirements.txt

# Коммитьте изменения
git add requirements.txt
git commit -m "feat(python): add numpy dependency"
git push
```

## 🔧 PyCharm Настройка

### Выбрать интерпретатор

1. File → Settings (Ctrl+Alt+S)
2. Project: MyProjects → Python Interpreter
3. Выберите интерпретатор из папки `venv/`

### Запуск скрипта

- Нажмите **Shift+F10** или кнопку запуска
- Или правый клик на файл → Run

### Debug

- Нажмите **Shift+F9** для отладки
- Или правый клик → Debug

## 📤 Отправить на GitHub

### Новый файл или изменения

```bash
git add Python/
git commit -m "feat(python): описание что вы добавили"
git push
```

### Если добавили новый пакет

```bash
pip freeze > Python/requirements.txt
git add Python/requirements.txt
git commit -m "feat(python): add new dependency"
git push
```

## ❌ НЕ ДЕЛАЙТЕ

- ❌ Не коммитьте папку `venv/`
- ❌ Не коммитьте папку `__pycache__/`
- ❌ Не коммитьте `.idea/`

Это уже в `.gitignore` - Git их не заметит.

## ✅ Чек-лист перед push

```bash
# 1. Проверьте статус
git status

# 2. Убедитесь что нет:
# ❌ venv/
# ❌ __pycache__/
# ❌ .idea/
# ❌ *.pyc

# 3. Если всё ОК:
git add Python/
git commit -m "feat(python): описание"
git push
```

## 🆘 Проблемы

### "ModuleNotFoundError: No module named..."

Решение:
```bash
# Проверьте что виртуальное окружение активировано
# Если нет - активируйте:
venv\Scripts\activate  # Windows
source venv/bin/activate  # Linux/Mac

# Переустановите зависимости:
pip install -r requirements.txt
```

### "python: command not found"

Решение:
```bash
# Используйте python3 вместо python
python3 src/main.py
```

---

Для полного гайда смотрите `PYTHON_GUIDE.md`

