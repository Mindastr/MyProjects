# 🐍 ГАЙД: Виртуальное окружение Python

## ЧТО ЭТО ТАКОЕ?

Виртуальное окружение (virtual environment) - это **изолированная среда** для Python проекта.

**Зачем?**
- Каждый проект имеет свои зависимости
- Проекты не мешают друг другу
- Легко управлять версиями библиотек
- Легко поделиться проектом с другими

## 🎯 АНАЛОГИЯ

```
Без venv:                    С venv:
────────────────────────────────────────────
Компьютер                    Компьютер
├── Python 3.9               ├── Python 3.9
│   ├── numpy 1.20           │   ├── venv/ (изолировано)
│   ├── numpy 1.21 ❌ КОНФЛИКТ
│   ├── pandas 1.2           │   ├── venv/ (изолировано)
│   └── requests 2.25

Проект A & B мешают!        Каждому проекту свой venv!
```

## 🚀 СОЗДАНИЕ ВИРТУАЛЬНОГО ОКРУЖЕНИЯ

### Windows

```bash
# Войдите в папку проекта
cd C:\MyProjects\Python

# Создайте виртуальное окружение
python -m venv venv

# Активируйте его
venv\Scripts\activate

# Вы увидите: (venv) C:\MyProjects\Python>
```

### Linux/Mac

```bash
cd ~/MyProjects/Python

python3 -m venv venv

source venv/bin/activate

# Вы увидите: (venv) user@computer:~/MyProjects/Python$
```

## 📦 УСТАНОВКА ЗАВИСИМОСТЕЙ

### Вариант 1: Установить пакет

```bash
# Сначала активируйте venv (смотрите выше)

# Установите пакет
pip install numpy

# Или конкретную версию
pip install numpy==1.21.0
```

### Вариант 2: Установить из requirements.txt

```bash
# Активируйте venv
cd Python
venv\Scripts\activate  # Windows

# Установите всё из файла
pip install -r requirements.txt
```

## 📝 requirements.txt - ЧТО ЭТО?

`requirements.txt` - это файл со списком всех зависимостей проекта.

### Пример:
```
numpy==1.21.0
pandas==1.3.0
requests==2.26.0
matplotlib==3.4.2
```

### Как создать/обновить?

```bash
# Активируйте venv
venv\Scripts\activate

# После установки пакетов, создайте requirements.txt
pip freeze > requirements.txt

# Теперь другой человек может установить всё одной командой
pip install -r requirements.txt
```

## 🔄 РАБОЧИЙ ПРОЦЕСС

### День 1: Создание проекта

```bash
# 1. Создайте venv
python -m venv venv

# 2. Активируйте
venv\Scripts\activate  # Windows

# 3. Установите нужные пакеты
pip install numpy pandas requests

# 4. Сохраните список
pip freeze > requirements.txt

# 5. Коммитьте requirements.txt (НЕ venv папку!)
git add Python/requirements.txt
git commit -m "feat(python): add initial dependencies"
```

### День 2: Другой человек/компьютер

```bash
# 1. Клонируйте проект
git clone https://github.com/Mindastr/MyProjects.git
cd MyProjects/Python

# 2. Создайте venv
python -m venv venv

# 3. Активируйте
venv\Scripts\activate

# 4. Установите зависимости
pip install -r requirements.txt

# ГОТОВО! Всё то же самое!
```

## ✅ КОМАНДЫ

### Активирование

```bash
# Windows
venv\Scripts\activate

# Linux/Mac
source venv/bin/activate
```

### Деактивирование

```bash
# Все ОС
deactivate
```

### Проверка активного venv

```bash
# Если активирован, в начале строки будет (venv)
# (venv) C:\MyProjects\Python>  ← Активирован

# C:\MyProjects\Python>  ← НЕ активирован
```

### Установка пакета

```bash
# Активируйте venv СНАЧАЛА!
pip install package_name

# Или конкретную версию
pip install package_name==1.0.0
```

### Обновление requirements.txt

```bash
pip freeze > requirements.txt
```

### Просмотр установленных пакетов

```bash
pip list
```

### Удаление пакета

```bash
pip uninstall package_name
```

## 📍 ГДЕ ЛЕЖИТ venv?

```
Python/
├── venv/               ← ВОТ ЗДЕСЬ (не коммитьте!)
│   ├── Scripts/
│   ├── Lib/
│   ├── Include/
│   └── ...
├── src/
├── requirements.txt    ← КОММИТЬТЕ ЭТО
└── README.md
```

## ❌ НЕ ДЕЛАЙТЕ

- ❌ Не удаляйте папку `venv/` если работаете активно
- ❌ Не коммитьте `venv/` на GitHub (она большая и ненужна)
- ❌ Не забывайте активировать venv перед `pip install`

## ✅ ЧТО ДОЛЖНО БЫТЬ

### На GitHub:
- ✅ `requirements.txt` - все видят зависимости
- ✅ `.gitignore` с `venv/` - папка не коммитится

### На вашем компьютере:
- ✅ `venv/` папка - локальное окружение
- ✅ `requirements.txt` - список зависимостей

## 🆘 ПРОБЛЕМЫ

### "pip: command not found"

**Решение:**
```bash
# Убедитесь что venv активирован
# (venv) должен быть в начале строки

# Если нет - активируйте:
venv\Scripts\activate  # Windows
```

### "ModuleNotFoundError: No module named 'xyz'"

**Решение:**
```bash
# 1. Активируйте venv
venv\Scripts\activate

# 2. Установите пакет
pip install xyz

# 3. Или установите из requirements.txt
pip install -r requirements.txt
```

### "Permission denied" при активации (Mac/Linux)

**Решение:**
```bash
chmod +x venv/bin/activate
source venv/bin/activate
```

## 📚 PyCharm И venv

### Автоматическое определение

1. Откройте проект в PyCharm
2. PyCharm спросит: "Activate venv?"
3. Нажмите "Yes"

### Ручное выбирание

1. File → Settings (Ctrl+Alt+S)
2. Project → Python Interpreter
3. Нажмите шестеренку → Add...
4. Выберите `venv\Scripts\python.exe`

## 🎓 ГЛАВНОЕ ПРАВИЛО

> **Коммитьте requirements.txt, не коммитьте venv/** 🎯

```bash
# ПРАВИЛЬНО:
git add Python/requirements.txt
git commit -m "update dependencies"

# НЕПРАВИЛЬНО:
git add Python/venv/  ❌
```

---

Готовы писать Python код? 🚀

