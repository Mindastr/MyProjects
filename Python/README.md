# 📚 Python Projects - Learning Journey

Мои Python проекты организованы **по датам обучения**.

Каждый день - новая папка с разными проектами!

## 📅 Проекты по датам

### 📌 2026-03-02 (День 1)

**Папка:** `2026-03-02/`

Проекты в этот день:
- `learning/` - Python basics

**Как запустить:**
```bash
cd 2026-03-02/learning
python -m venv venv
venv\Scripts\activate  # Windows
source venv/bin/activate  # Linux/Mac
pip install -r requirements.txt
python src/main.py
```

**Подробнее:** Смотрите `2026-03-02/README.md`

---

## 🎯 Структура проекта

Каждый день - это папка с датой (YYYY-MM-DD):

```
Python/
├── 2026-03-02/          ← День 1
│   ├── learning/
│   │   ├── src/
│   │   ├── requirements.txt
│   │   └── README.md (если нужен)
│   └── README.md
│
├── 2026-03-03/          ← День 2
│   ├── parser/
│   │   ├── src/
│   │   ├── requirements.txt
│   │   └── README.md (если нужен)
│   └── README.md
│
└── README.md            ← Этот файл
```

---

## 🚀 Как добавить новый проект?

### Новый проект в текущий день

```bash
cd Python\2026-03-02

# Создаёете папку для проекта
mkdir my-new-project\src

# Копируете requirements.txt от другого проекта
copy learning\requirements.txt my-new-project\requirements.txt

# Пишете код в src/main.py
```

### Новый день (новый набор проектов)

```bash
cd Python

# Создаёете папку с датой (YYYY-MM-DD)
mkdir 2026-03-03\project1\src
mkdir 2026-03-03\project2\src

# Создаёете requirements.txt для каждого проекта
# Создаёете README.md для дня
```

---

## 📖 Быстрая инструкция

### Запустить проект

```bash
cd Python\2026-03-02\learning

# Создаём виртуальное окружение
python -m venv venv

# Активируем его
venv\Scripts\activate  # Windows
source venv/bin/activate  # Linux/Mac

# Устанавливаем зависимости
pip install -r requirements.txt

# Запускаем
python src/main.py
```

### Добавить новый пакет

```bash
# Активируем venv
venv\Scripts\activate

# Устанавливаем пакет
pip install numpy

# Обновляем requirements.txt
pip freeze > requirements.txt
```

### Отправить на GitHub

```bash
cd C:\MyProjects
git add .
git commit -m "feat(python): добавил новые проекты в 2026-03-03"
git push
```

---

## 💡 Почему такая структура?

✅ **По датам** - видно когда вы что учили
✅ **Проекты в папках** - легко найти нужный
✅ **Каждый проект независим** - свой venv и requirements.txt
✅ **На GitHub красиво** - видна прогресс обучения
✅ **Легко расширять** - просто добавляете новые дни

---

## 🎓 Как использовать

1. **Смотрите по датам** - какие проекты в какой день
2. **Переходите в папку дня** - `cd 2026-03-02`
3. **Выбираете проект** - `cd learning`
4. **Создаёете venv** - `python -m venv venv`
5. **Активируете** - `venv\Scripts\activate`
6. **Устанавливаете** - `pip install -r requirements.txt`
7. **Запускаете** - `python src/main.py`

---

**Ваш путь обучения видна на GitHub!** 🚀

Последнее обновление: 2026-03-03

