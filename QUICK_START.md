# 📋 БЫСТРАЯ ШПАРГАЛКА: Два проекта, один репозиторий

## 🎯 СТРУКТУРА

```
C:\MyProjects\              ← Корень монорепозитория
├── C++/                    ← C++ проект
├── Python/                 ← Python проект
└── README.md               ← Описание обоих
```

## 🚀 ПЕРВЫЙ ЗАПУСК

### C++

```bash
cd C:\MyProjects\C++
mkdir build && cd build
cmake ..
cmake --build .
.\bin\MyProjects.exe
```

### Python

```bash
cd C:\MyProjects\Python
python -m venv venv
venv\Scripts\activate
pip install -r requirements.txt
python src/main.py
```

## 💻 РАБОТА В IDE

### Для C++
- Откройте **CLion** → Open Folder → `C:\MyProjects\C++`

### Для Python
- Откройте **PyCharm** → Open Project → `C:\MyProjects\Python`

## 📝 КОГДА ГОТОВЫ КОММИТИТЬ

### Только C++ изменения

```bash
cd C:\MyProjects
git add C++/
git commit -m "feat(cpp): описание"
git push
```

### Только Python изменения

```bash
cd C:\MyProjects
git add Python/
git commit -m "feat(python): описание"
git push
```

### Оба проекта

```bash
cd C:\MyProjects
git add .
git commit -m "feat: описание"
git push
```

## 📌 ПРИМЕРЫ КОММИТОВ

```bash
# C++
git commit -m "feat(cpp): add Calculator class"
git commit -m "fix(cpp): fix memory leak"
git commit -m "docs(cpp): update README"

# Python
git commit -m "feat(python): create data parser"
git commit -m "feat(python): add numpy dependency"
git commit -m "fix(python): handle edge case"

# Оба
git commit -m "feat: initialize new features"
```

## ❌ НЕ КОММИТЬТЕ

**C++:**
- ❌ `C++/build/`
- ❌ `C++/cmake-build-debug/`
- ❌ `C++/.idea/`

**Python:**
- ❌ `Python/venv/`
- ❌ `Python/__pycache__/`
- ❌ `Python/.idea/`

**Git игнорирует это автоматически** (в `.gitignore`)

## 🔍 ПРОВЕРИТЬ ЧТО МЕНЯЕТСЯ

```bash
cd C:\MyProjects
git status        # Какие файлы изменились
git diff          # Что именно изменилось
```

## 📚 ДОПОЛНИТЕЛЬНЫЕ ГАЙДЫ

- **README.md** - Главное описание
- **MONOREPO_GUIDE.md** - Полный гайд монорепозитория
- **C++/README.md** - Гайд для C++
- **C++/CHEATSHEET.md** - Шпаргалка для C++
- **Python/README.md** - Гайд для Python
- **Python/PYTHON_GUIDE.md** - Полный гайд по venv

## ✅ ЧЕК-ЛИСТ ПЕРЕД PUSH

```
☐ Код работает локально
☐ Тесты прошли (если есть)
☐ Проверили: git status
☐ Добавили: git add C++/ или Python/ или .
☐ Коммитили: git commit -m "..."
☐ Отправили: git push
☐ На GitHub видно изменения ✓
```

## 🎓 ГЛАВНОЕ

| Что | Где | Что делать |
|-----|-----|-----------|
| Пишу C++ | CLion | Пишу в `C++/src/` и `C++/include/` |
| Пишу Python | PyCharm | Пишу в `Python/src/` |
| Все готово | Terminal | `git add C++/` или `git add Python/` |
| Готовый код | GitHub | Видно что в каком проекте |

---

**Просто пишите код, Git позаботится об остальном!** 🚀

